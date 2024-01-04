    #include <iostream>
    #include <string>
    using namespace std;

    // Function prototype
    void displayResult(const string& message, int times);

    int main() {
        // Variables for this project
        string What_to_say;
        int How_many_times_to_say;

        // Loop to ask the user what they want to say
        while (true) {
            cout << "What do you want me to say: ";
            cin >> What_to_say;
            cout << What_to_say << endl;

            string confirm_WTS;
            cout << "Is this correct? (y/n): ";
            cin >> confirm_WTS;
            if (confirm_WTS == "y") {
                break;
            }
        }

        // Loop to ask how many times to repeat the What_to_say variable
        while (true) {
            cout << "How many times do I say: " << What_to_say;
            cin >> How_many_times_to_say;

            string confirm_HMTS;
            cout << "Is this correct? (y/n): ";
            cin >> confirm_HMTS;
            if (confirm_HMTS == "y") {
                break;
            }
        }

        // Function call to display the result
        displayResult(What_to_say, How_many_times_to_say);

        return 0;
    }

    // Function to display the What_to_say and How_many_times_to_say
    void displayResult(const string& message, int times) {
        for (int i = 0; i < times; ++i) {
            cout << i << " " << message << endl;
        }
    }
