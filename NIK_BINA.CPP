//Program to demonstrate unary +(plus) operator overlosding without
//  using frind function
#include<iostream.h>
#include<conio.h>
class binary
{
      private:
	      int a,b;
      public:
	      void get();
	      void show();
	      binary operator +(binary &b);   //declaretion
};
void binary::get()
{
	cout<<"enter value of a = ";
	cin>>a;
	cout<<"enter value of b = ";
	cin>>b;

}
void binary::show()
{
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
}
binary binary::operator +(binary &B)    //defination
{
       binary B3;
	B3.a=a+B.a;
	B3.b=b+B.b;
	return(B3);
}
void main()
{
	clrscr();
	binary b1,b2,b4;
	b1.get();
	b2.get();
	      b4=b1+b2;  //b1(b2)      //operator function call
	b4.show();
	getch();
}