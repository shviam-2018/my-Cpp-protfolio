#include <iostream>
#include <string>
using namespace std;
int main(){
//variable to make this code oprational
    int Total_bill;
    float Tip_percentage;
    float Bill_after_tip;

//takeing total bill ammount
    while (true)
    {
        cout << "what is the total bill: ";
        cin >> Total_bill;
        cout<<"your total is: "<< Total_bill<< endl;

        string confirm_total_bill_ammount;
        cout<<"is this correct(y/n): ";
        cin >> confirm_total_bill_ammount;
        if(confirm_total_bill_ammount == "y"){
            break;
        }
    }
    
//taking the tip ammount 
while (true)
{
    cout << "how much do you what to tip: ";
    cin >> Tip_percentage;
    cout << "you what to tip " << Tip_percentage << " %" << endl;

    string confirm_Tip_percentage;
    cout << "is this correct(y/n): ";
    cin >> confirm_Tip_percentage;
    if (confirm_Tip_percentage == "y"){
        break;
    }
}

//calcutating the total bill after bill 
    Bill_after_tip = Total_bill + (Total_bill*Tip_percentage/100);

    cout << "you bill after tip is: " << Bill_after_tip;
    return 0;
}