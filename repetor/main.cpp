#include <iostream>
#include <string>
using namespace std;

void displayresult(const string& message, int times);

int main(){
    string What_to_say;
    int time;

    while (true)
    {
        cout << "what do you want me to say: ";
        cin >> What_to_say;
        cout << "you what me to say: " << What_to_say << endl;

        string confirm_What_to_say;
        cout << "is this correct (y/n): ",
        cin>> confirm_What_to_say;
        if(confirm_What_to_say == "y") {
            break;
        }
    }

    while (true)
    {
        cout << "how many times you what me to say " << What_to_say << endl;
        cout << "enter number of times: ";
        cin >> time;
        cout << "you what me to say: " << What_to_say << " " << time << " " << "times" << endl;

        string confirm_t;
        cout << "is this correct (y/n): ";
        cin >> confirm_t;
        if (confirm_t == "y") {
            break;
        }
    }
    
    
    displayresult(What_to_say, time);
    return 0;
}

void displayresult(const string& message, int times) {
    for(int i=0; i<times; ++i) {
        cout << i+1 << " " << message << endl;
    }
}