#include <iostream>
#include <string>
using namespace std;

void displayresult(const string& message, int times);

int main(){
    string What_to_say;
    int times;

    while (true)
    {
        cout << "what do youo what me to say: ";
        cin >> What_to_say;
        cout << "you what to say: "<<What_to_say<<endl;

        string confirm_WTS;
        cout<<"is this correct(y/n): ";
        cin >> confirm_WTS;
        if(confirm_WTS == "y"){
            break;
        }
    }

    while (true)
    {
        cout<<"how many time do you what me to say: "<<What_to_say<<endl;
        cout<<"enter number of times: ";
        cin >> times;
        cout<<"you what me to say this: "<<times<<endl;

        string confirm_T;
        cout<<"is this correect(y/n): ";
        cin>>confirm_T;
        if(confirm_T=="y"){
            break;
        }
    }
    displayresult(What_to_say, times);
return 0;
}

void displayresult(const string& message, int times) {
        for( int i = 0; i<times; ++i) {
            cout<<i<<" "<<message<<endl;
        }
    }
