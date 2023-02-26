#include<iostream>
using namespace std;

//calculator

class calculator{
	public:
		void add(int a,int b)
		{
			cout<<a+b;
		}
		
		void sub(int a,int b)
		{
			cout<<a-b;
		}
		void mult(int a,int b)
		{
			cout<<a*b;
		}
		void div(int a,int b)
		{
			cout<<a/b;
		}
	
};

int main()
{
	calculator c;
	
	cout<<"---------Welcome to calculator----------";
	int a;
	int b;
	cout<<"\nEnter first number:";
	cin>>a;
	cout<<"\nEnter second number:";
	cin>>b;
	
	cout<<"----Menu----"<<endl;
	cout<<"1)Add"<<endl<<"2)Subtract"<<endl<<"3)Multiply"<<endl<<"4)Divide"<<endl<<"5)Perform all operations";
	
	int n;
	cout<<"\nEnter you choice:";
	cin>>n;
	
	switch (n){
		case 1:
			cout<<"The addition of number is:";
			c.add(a,b);
			break;
		case 2:
			cout<<"The subtraction on number is:";
			c.sub(a,b);
			break;
		case 3:
			cout<<"The multiplication of number is:";
			c.mult(a,b);
			break;
		case 4:
			cout<<"The division of number is:";
			c.div(a,b);
			break;
		case 5:
			cout<<"\nThe addition of number is:";
			c.add(a,b);
			cout<<"\nThe subtraction on number is:";
			c.sub(a,b);
			cout<<"\nThe multiplication of number is:";
			c.mult(a,b);
			cout<<"\nThe division of number is:";
			c.div(a,b);
			break;
			
	}
	cout<<"\n\nThanks for using..see you again!!";
	
	return 0;
}
