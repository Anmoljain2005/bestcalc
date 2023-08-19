#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
void addition();
void subtraction();
void multiplication ();
void division();
void power();


int main()
{
    cout << "Welcome to the Calculator" << endl;
    cout << "***Press 0 to quiet the program***" << endl;
    cout << "Enter 1 for addition" << endl;
    cout << "Enter 2 for subtraction" << endl;
    cout << "Enter 3 for multiplication" << endl;
    cout << "Enter 4 for division" << endl;
    cout << "Enter 5 for power" << endl;
    int choice;
    while (1)
    {
        cout << "Enter your choice :" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            power();
            break;
        case 0:
            exit(0);
            break;
        default:
            cout << "Wrong choice, Enter valid choice" << endl;
            break;
        }
    }

    return 0;
}

void addition(){
    cout<< "Enter the numbers you want to add:";
    int a,b;
    cin>>a>>b;
    cout<<a+b<<endl;
}
void subtraction(){
    cout<< "Enter the numbers you want to subtract:";
    int a,b;
    cin>>a>>b;
    cout<<a-b<<endl;
}
void multiplication(){
    cout<< "Enter the numbers you want to multiply:";
    int a,b;
    cin>>a>>b;
    cout<<a*b<<endl;
}
void division(){
    cout<< "Enter the numbers you want to divide:";
    int a,b;
    cin>>a>>b;
    cout<<(float)a/(float)b<<endl;
}
void power(){
    //6^4 =6*6*6*6
    //pow(b,e);
    //pow(6,4)
    cout<< "Enter the base and exponent:";
    int b,e;
    cin>>b>>e;
    double power = pow(b,e);
    cout<<power<<endl;
}
