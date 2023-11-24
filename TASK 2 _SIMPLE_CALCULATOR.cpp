#include<iostream>
using namespace std;

int main()
{
	int num1,num2,result;
	char op;
	
	cout<<"Enter Number 1:"<<endl;
	cin>>num1;
	
	cout<<"------------------------------"<<endl;
	cout<<"Enter Operator('+,-,*,/'):";
	cin>>op;
	cout<<"------------------------------"<<endl;
	
	cout<<"Enter Number 2:";
	cin>>num2;
	
	switch(op)
	{
		case '+':
			result=num1+num2;
			break;
		case '-':
			result=num1-num2;
			break;
	    case '*':
		    result=num1*num2;
		    break;
		case '/':
			if (num2 != 0) 
			{
                result = num1 / num2;
            } 
			else 
			{
                cout << "Division by zero is not allowed" << endl;
            }
            break;

		 default:
		    cout<<"Invalid Choice! please Enter a valid Operator";
		    break;
				 		 
	}
	cout<<"============"<<endl;
	cout<< "Result:"<<result<<endl;
	cout<<"============"<<endl;
    return 0;	
}
