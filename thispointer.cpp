/* 'this pointer'
when local variables name is same as members name */

#include<iostream>
using namespace std;
class Test 
{
    private:
        int y; //members name
    public:
        void setX(int y)
        {
            this->y=y;
        }
        void print()
        {
            cout<<"y="<<y<<endl;
        }
};

int main()
{
  Test obj;
  int y=20;//local variable
  obj.setX(y);
  obj.print();
  return 0;
}
