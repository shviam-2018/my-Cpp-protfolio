#include <iostream>
#include <string>
using namespace std;

int main(){
    float base;
    float side;
    float result;

    while (true)
    {
    cout<<"enter the value of base: ";
    cin >> base ;
    cout<< base << endl;

    string confirm_valeu;
    cout<< "is the value of base entered correct(y/n): ";
    cin >> confirm_valeu;
    if(confirm_valeu == "y"){
        break;
    }
    }
    
    while (true)
    {
        cout << "enter the value of side: ";
        cin >> side;
        cout << side << endl;

    string confirm_side;
        cout << "is the value of side correct(y/n): ";
        cin >> side;
        if (confirm_side == "y"){
            break;
        }
    }
    
    result = side * base;
    cout << "the area of sqare is "<< result;

}