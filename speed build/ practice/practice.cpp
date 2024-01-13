#include <iostream>
#include <string>
using namespace std;

int main(){
    float Total_bill;
    float tip_percentage;
    float bill_after_tip;

    while (true)
    {
        cout << "how much is the bill: ";
        cin >> Total_bill;
        cout << "your total bill is : " << Total_bill << endl;

        string confirm_total_bill;
        cout << "is this correcty (y/n): ";
        cin >> confirm_total_bill;
        if(confirm_total_bill == "y") {
            break;
        }
    }

    while (true)
    {
        cout << "how much do you what to tip: ";
        cin >> tip_percentage;
        cout << "you want to tip: " << tip_percentage <<" " << "%" << endl;

        string confirm_tip_percentage;
        cout << "is this correct(y/n): ";
        cin >> confirm_tip_percentage;
        if(confirm_tip_percentage == "y") {
            break;
        }
    }

    bill_after_tip = Total_bill + (Total_bill*tip_percentage/100);

    cout << "your total bill is: " << bill_after_tip;
    
    return 0;
}