#include <iostream>

#include <cmath>
 
using namespace std;
 
int main()

{

    int choice;
 
    do

    {

        cout << "\n============================\n";

        cout << "     GIT TEAM CALCULATOR\n";

        cout << "============================\n";

        cout << "1. Addition\n";

        cout << "2. Subtraction\n";

        cout << "3. Multiplication\n";

        cout << "4. Division\n";

        cout << "5. Max of two numbers\n";

        cout << "6. Average\n";

        cout << "7. Exit\n";

        cout << "============================\n";
 
        cout << "Enter your choice: ";

        cin >> choice;
 
        double firstNumber;

        double secondNumber;
		
		double result;
 
        switch (choice)

<<<<<<< HEAD
        {
<<<<<<< HEAD
			  
			  case 2:
			  cout <<"first number is:"<<endl;
			  cin>>firstNumber;
			  cout <<"second number is"<<endl;
			  cin>>secondNumber;
			  int c = firstNumber-secondNumber;
			  cout << "Result of subtraction = "<<c;
			  
			case 4:
			
			cout<<"Enter first number: \n";
			cin>>firstNumber;
			cout<<"Enter second number: \n";
			cin>>secondNumber;
			
			result=firstNumber/secondNumber;
			
			cout<<"Result is "<<result<<endl;
			
        }
=======
        {case 6:
		   double avg;
		   cout << "Enter first number: ";
           cin >> firstNumber;
		   cout << "\nEnter second number: ";
           cin >> secondNumber;
		   avg=(firstNumber+secondNumber)/2;
		   cout<<"\nAverage: "<<avg;
		   break;
		}

>>>>>>> feature/average
=======
          case 5:
		  cout<<"enter the first num\n";
		  cin>>firstNumber;
		  cout<<"enter the second num\n";
		  cin>>secondNumber;
		     if (firstNumber > secondNumber){
				 cout<<"\nfirstNumber is largest\n";
        }
		else if (secondNumber>firstNumber){
			cout<<"\nsecondNumber is largest\n";
		}
		else
			cout<<"Both are equal";
		}
>>>>>>> feature/max2
 
    } while (choice != 7);
 
    return 0;

}
 