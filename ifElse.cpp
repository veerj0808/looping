//conditional statement
#include<iostream>//inbuilt class
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the value of a b c";
	cin>>a>>b>>c;
	
	if(a>b && a>c)
	cout<<"A is greater";
	else if(b>c)
	cout<<"B is greater";
	else
	cout<<"C is greater";
	
	return 0;
}
