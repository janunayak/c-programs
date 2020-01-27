/* TO RETURN REFERENCE TO THE CALLING OBJECT */
#include<iostream>
using namespace std;
/* when a reference to a local object is returned;
the returned reference can be used to chain function calls on a single object */
class Test 
{
    private:
    int x;
    int y;
    public:
    Test(int x=0,int y=0)
    {
        this->x=x;
        this->y=y;
    }
    Test &setX(int a)
    {
        x=a;
        return *this;
    }
     Test &setY(int b)
    {
        y=b;
        return *this;
    }
    void print()
    {
        std::cout<<"x="<<x<<"y="<<y<<std::endl;
    }
};
int main()
{
    Test obj(5,5);
    //chained function calls,all calls modify the same object is returned by reference
    obj.setX(10);
    obj.setY(20);
    obj.print();
    return 0;
}
