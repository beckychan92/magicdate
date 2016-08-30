#include <iostream>
#include <string>

using namespace std;

int main()
{
    int month;
    int date;
    int year;

    //This will ask the user to input the month (in number)
    cout << "Please enter the month in number (1 to 12):" << endl;
    cin >> month;
    //This will confirm that the month that was inputted is between 1-12 else it will request the user to provide an update
    while (month < 1 || month > 12){
        cout << "That is not within range." << endl;
        cout << "Please enter the month in number (1 to 12)" << endl;
        cin >> month;
    }

    //This will ask the user to input the date (in number)
    cout << "Please enter the date in number:" << endl;
    cin >> date;
    //This will confirm the date exist (by comparing the month and date provided).
    //It will request for an update for the date if the date does not exist for the month.
    while (date < 1 || date > 31){
        cout << "Please enter the date in number again!" << endl;
        cin >> date;
    }
    if (month == 2){
        while (date < 1 || date > 28){
            cout << "That is not within range for the month." << endl;
            cout << "Please enter the date in number (1 to 28)" << endl;
            cin >> date;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11){
        while (date < 1 || date > 30){
            cout << "That is not within range for the month." << endl;
            cout << "Please enter the date in number (1 to 30)" << endl;
            cin >> date;
        }
    }else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        while (date < 1 || date > 31){
            cout << "That is not within range for the month." << endl;
            cout << "Please enter the date in number (1 to 31)" << endl;
            cin >> date;
        }
    }

    //This will ask the user to input the year (in number)
    cout <<"Please enter the last two digits of the year:" << endl;
    cin >> year;
    //This will confirm that the year is within range of 00 to 99 (since we only want the last 2 digits of the year)
    while (year < 00 || year > 99){
        cout << "That is not within range." << endl;
        cout << "Please enter the year in number (1 to 99)" << endl;
        cin >> year;
    }

    //This will determine whether the date provided is considered magic or not.
    //Created an additional if/else statement as I cannot properly display "00" to "09" so this will add a "0" to my code as part
    //of a string
    if (month*date == year){
        if (year <= 9){
            cout << "You inputted:" <<month<<"/"<<date<<"/0"<<year<<endl;
            cout << "Date is magic" <<endl;
        }else
            cout << "You inputted:" <<month<<"/"<<date<<"/"<<year<<endl;
            cout << "Date is magic" <<endl;
    }else{
        if (year <= 9){
            cout << "You inputted:" <<month<<"/"<<date<<"/0"<<year<<endl;
            cout << "Date is not magic"<<endl;
        }else{
            cout << "You inputted:" <<month<<"/"<<date<<"/"<<year<<endl;
            cout << "Date is not magic"<<endl;
        }
    }
}

/*Example dates of Execution:

 //Date inputted 06/10/60 (expected to work perfectly fine)
 Please enter the month in number (1 to 12):
 6
 Please enter the date in number:
 10
 Please enter the last two digits of the year:
 60
 You inputted:6/10/60
 Date is magic

 //Purposely entered wrong numbers in order to see the error message
 Please enter the month in number (1 to 12):
 0
 That is not within range.
 Please enter the month in number (1 to 12)
 13
 That is not within range.
 Please enter the month in number (1 to 12)
 4
 Please enter the date in number:
 0
 Please enter the date in number again!
 59
 Please enter the date in number again!
 28
 Please enter the last two digits of the year:
 100
 That is not within range.
 Please enter the year in number (1 to 99)
 99
 You inputted:4/28/99
 Date is not magic

 //Goal of checking the range between year of 00 to 09
 Please enter the month in number (1 to 12):
 2
 Please enter the date in number:
 3
 Please enter the last two digits of the year:
 04
 You inputted:2/3/04
 Date is not magic

 */
