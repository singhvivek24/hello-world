#include<iostream>
using namespace std;
class addbinary
{
	private:
	int a,b;
	
	public:
	void input()
	{
		cout<<"Enter the value of a and b\n";
		cin>>a>>b;
	}
	 void output()
	 {
	      cout<<"A:"<<a<<"\n"<<"B: "<<b<<"\n";	
	  }	
	  void operator +(addbinary &s2); 
};
void addbinary::operator +(addbinary &s2)
{
	a = a+s2.a;
	b  =b+s2.b;
	cout<<a+s2.a<<"\n"<<b+s2.b<<"\n";

}
int main()
{
	addbinary s1,s2;
	s1.input();
	s2.input();
	s1.output();
	s2.output();
	s1+s2;
	s1.output();

}
