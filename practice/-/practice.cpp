#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

void writeToFile(int hour, int min, int sec, const string& timestamp, const string& additionalInfo);

int main() {
    int hour, min, sec;
    string additional_information;

    while (true) {
        cout << "Congratulations on your speed build today!" << endl;

        cout << "Enter hours: ";
        cin >> hour;

        cout << "Enter minutes: ";
        cin >> min;

        cout << "Enter seconds: ";
        cin >> sec;

        string confirm_additional_information;
        cout << "Do you have something to add about today's speed build? (y/n): ";
        cin >> confirm_additional_information;

        if (confirm_additional_information == "y") {
            cout << "Write here: ";
            cin.ignore();  // Clear the newline character from the buffer
            getline(cin, additional_information);
        }

        cout << "So today you completed your speed build in " << hour << "H " << min << "M " << sec << "S." << endl;

        string confirmResult;
        cout << "Is this correct (y/n): ";
        cin >> confirmResult;

        if (confirmResult == "y") {
            // Get current date and time
            time_t t = time(nullptr);
            tm* tm_info = localtime(&t);

            // Format timestamp
            char timestamp[20];
            strftime(timestamp, sizeof(timestamp), "%Y-%m-%d %H:%M:%S", tm_info);

            // Write to file with timestamp and additional information
            writeToFile(hour, min, sec, timestamp, additional_information);
            break;
        }
    }

    return 0;
}

void writeToFile(int hour, int min, int sec, const string& timestamp, const string& additionalInfo) {
    ofstream file("new_speed_logger_test.txt", ios::app);
    if (file.is_open()) {
        file << timestamp << " - " << hour << "H " << min << "M " << sec << "S";
        if (!additionalInfo.empty()) {
            file << " - " << additionalInfo;
        }
        file << endl;
        file.close();
        cout << "Data written to file successfully." << endl;
    } else {
        cerr << "Error opening file for writing." << endl;
    }
}
