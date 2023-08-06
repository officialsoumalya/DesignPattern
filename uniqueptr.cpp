#include <iostream>
using namespace std;
template <typename T>
class uniqueptr{
    private:
    T * res;
    public:
    uniqueptr(T * r = nullptr):res(r)
    {
        cout<<"ctor called\n";
    }

    uniqueptr(const uniqueptr& ptr) = delete;
    uniqueptr& operator=(const uniqueptr& ptr) = delete;

    uniqueptr(uniqueptr&& ptr)
    {
        cout<<"move ctor\n";
        res = ptr.res;
        ptr.res = nullptr;
    }

    uniqueptr& operator = (uniqueptr&& ptr)
    {
        cout<<"move assgn\n";
        if(this != &ptr)
        {
            if(res)
            {
                delete res;
                res = nullptr;
            }

            res = ptr.res;
            ptr.res = nullptr;
        }
        return *this;
    }

    T* operator ->()
    {
        return res;
    }

    T& operator *()
    {
        return *res;
    }

    void reset(T * r=nullptr)
    {
        if(res)
        {
            delete res;
            res = nullptr;
        }

        res = r;
    }

    ~uniqueptr()
    {
        cout<<"dtor called\n";
        delete res;
        res = nullptr;
    }

};

 int main()
 {
    uniqueptr<int> ptr1(new int(6));
    uniqueptr<int>ptr2;

    // uniqueptr<int>ptr3(ptr1); //compilation error
    // ptr2 = ptr1; // compilation error

    uniqueptr<int>ptr4(std::move(ptr1));
    uniqueptr<int>ptr5;
    ptr5 = std::move(ptr1);

    // ptr1->func();
    try{
        cout<<*ptr1<<"\n";
    }
    catch(std::exception &ex)
    {
        cout<<ex.what()<<"\n";
    }

    ptr1.reset(new int);

    return 0;
 }