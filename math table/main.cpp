#include <iostream>
#include <string>
using namespace std;

// Declare the function prototype
void displayresult(int table, int end);

int main(){
    int What_table;
    int up_to;

    while (true)
    {
        cout << "what mathamatical table do you need: ";
        cin >> What_table;
        cout << "you what the math table of: " << " " << What_table << endl;

        string confirm_WT;
        cout << "is this correct(y/n): ";
        cin >> confirm_WT;
        if(confirm_WT == "y") {
            break;
        }
    }

    while (true)
    {
        cout << "how long should the table be: ";
        cin >> up_to;
        cout << "you what: " << What_table << "to : " << up_to << endl;

        string confirm_up_to;
        cout << "is this correct(y/n): ";
        cin >> confirm_up_to;
        if(confirm_up_to == "y") {
            break;
        }
    }
    
displayresult(What_table, up_to);
    return 0;
}

void displayresult(const int table, int end) {
    for(int i=+1; i<end; ++i ) {
        cout << table << "x" << i << "=" << (table*i) << endl;
    }
}