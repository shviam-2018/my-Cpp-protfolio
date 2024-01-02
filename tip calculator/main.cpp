#include <iostream>
#include <string>
using namespace std;

int main(){
//needed varaiable to work
    int Total_bill;
    float Tip_percentage;
    float Total_bill_after_tip;

// a loop that ask for the total bill and then ask if. what you enterd is correct
    while (true)
    {
        cout << "what is the total bill: ";
        cin >> Total_bill;
        cout << "you entered " << Total_bill << endl;

        string confirm_total_bill;
        cout << "is this correct(y/n): ";
        cin >> confirm_total_bill;
        if (confirm_total_bill == "y"){
            break;
        }
    }

// a loop like the pervivises one but this one for for taking and confirming the input of tip percentage
    while (true)
    {
        cout << "how much do you what to tip (in %): ";
        cin >> Tip_percentage;
        cout << Tip_percentage << endl;

        string confirm_tip_percentage;
            cout << "is this correct(y/n): ";
            cin >> confirm_tip_percentage;
            if (confirm_tip_percentage == "y"){
                break;
            }
    }
    
// this is to calcula the total bill after tip 
    Total_bill_after_tip = Total_bill + (Total_bill*Tip_percentage/100);
    cout << "you total bill after tip is: " << Total_bill_after_tip << endl; 

    return 0;
}