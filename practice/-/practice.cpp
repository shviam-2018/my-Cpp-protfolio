#include <iostream>
#include <string>
using namespace std;

void displayresult(const string& message, int time);

int main(){
    string What_to_say;
    int times;

    while (true)
    {
        cout<<"what do you what me to say: ";
        cin >> What_to_say;
        cout << "do you want me to say: " << What_to_say << endl;

        string confirm_what_to_say;
        cout << "is this correct(y/n): ";
        cin >> confirm_what_to_say;
        if(confirm_what_to_say == "y") {
            break;
        }
    }

    while (true)
    {
        cout << "how many times do you want me to say: " << What_to_say << endl;
        cout << "enter number of times: ";
        cin >> times;
        cout << "you want me to say: " << What_to_say << " " << times << "times" <<endl;

        string confirm_times;
        cout << "is this correct(y/n): ";
        cin >> confirm_times;
        if(confirm_times == "y") {
            break;
        }
    }
    
    displayresult(What_to_say, times);
    return 0;
}

void displayresult(const string& message, int time) {
    for( int i = 1; i<time; ++i) {
        cout << i+1 << " " << message << endl;
    }
}
