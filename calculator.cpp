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
 
        switch (choice)

        {
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
 
    } while (choice != 7);
 
    return 0;

}
 