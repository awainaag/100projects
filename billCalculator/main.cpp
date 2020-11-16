//This is a program that calculates the percentage tip and the total bill at a restaurant
#include <iostream>
using namespace std;

int main()
{   int numberofPeople;
    double totalAmount;
    float percentageTip;
    double actualTip;
    double amount_to_be_paid;
    cout << "Hello there!\n" <<"Hope you enjoyed your meal"<< endl;
    cout<< "Please enter the total amount spent"<< endl;
    cin>>totalAmount;
    cout<< "What percentage tip would you like to give?" <<endl;
    cin>> percentageTip;
    actualTip= percentageTip/100;
   amount_to_be_paid= actualTip*totalAmount + totalAmount;
   cout<< "Press 1 if the bill will be split and 2 if it will not"<<endl;
    int x;
    cin>>x;
    if (x==1){
    cout<<"Enter the number of people splitting the bill"<<endl;
            cin>> numberofPeople;
        cout<<"Each person will pay:"<< amount_to_be_paid/numberofPeople<<endl;
    }
    else {if (x==2){
        cout<< "The total bill is:"<< amount_to_be_paid<<endl;
    }
    else {cout<<"invalid entry"<<endl;}
    }
    return 0;
}
