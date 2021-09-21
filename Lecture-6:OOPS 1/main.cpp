#include <iostream>

using namespace std;

class complexNumber
{
private:
    int real1;
    int imaginary1;
public:
    complexNumber(int real1,int imaginary1)
    {
    this->real1=real1;
    this->imaginary1=imaginary1;
    }
    void print()
    {
        cout<<this->real1<<"+"<<"i"<<this->imaginary1;
    }
     void add(complexNumber c2)
    {
        this->real1+=c2.real1;
        this->imaginary1+=c2.imaginary1;
    }
    void multipy(complexNumber c2)
    {
        int res1=c2.real1*this->real1;
        int res2=c2.real1*this->imaginary1;
        int res3=c2.imaginary1*this->real1;
        int res4=c2.imaginary1*this->imaginary1;
        int res5=-res4+res1;
        this->real1=res5;
        int res6=res3+res2;
        this->imaginary1=res6;
    }


};

int main()
{
    int choice;
     int real1,real2;
    int imaginary1,imaginary2;
   cin>>real1>>imaginary1;
   cin>>real2>>imaginary2;
   cin>>choice;
   complexNumber c1(real1,imaginary1);
   complexNumber c2(real2,imaginary2);
   if(choice==1)
   {
    c1.add(c2);
    c1.print();
   }
   if(choice==2){
    c1.multipy(c2);
    c1.print();
   }


}
