#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	srand(time(0));
	int lowernum = 1;
	int uppernum = 100;
	int randomnum;
	int guess;
	int attempts=0;
	randomnum = rand() % (uppernum - lowernum + 1) + lowernum;
	
	cout<<"==================================="<<endl;
	cout<<"Welcome in Number Guessing Game"<<endl;
	cout<<"==================================="<<endl;
	
	do
	{
		cout<<"Enter your Guess between 1 and 100:"<<endl;
		cin>>guess;
		attempts++;
		
		if(guess<0 || guess>100)
		{
			cout<<"Invalid Number! Please Enter a valid Number"<<endl;
		}
		else if(guess < randomnum)
		{
			cout<<"Value is too low! Try again"<<endl;
		}
		else if(guess > randomnum)
		{
			cout<<"Value is too high! Try again"<<endl;
		}
		else
		{
			cout<<"----------------------------------------------------------"<<endl;
			cout<< "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
			cout<<"----------------------------------------------------------"<<endl;
		}
		
	}while (guess != randomnum);

    return 0;
	
}

