
#include <iostream>
#include <cstring>
#include<string>
#include<iomanip>

using namespace std;
int main() {
    
    
    int store;
    int total;
    int year;
    int space;
    int count = 1;
    int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    string names[12] = { "January", "Februrary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    
    cout << "Please enter the calander year followed by the number of the day of the week the year starts on. Example: 2017 3 (January starts on Wednesday)" << endl;
    cin >> year;
    cin >> space;
    
    
    
    
    for (int i = 0; i < 12; i++) {
        cout << endl;
        cout << names[i];
        cout << endl;
        cout << "---------------------------------" << endl;
        cout << "Sun Mon  Tue  Wed  Thu  Fri  Sat  " << endl;
        
        for (int i = 1; i <= space; i++) {
            cout << setw(5) << left << " ";
        }
        
        // Section For a leap Year condition
        for (int j = 0; j <= months[i] - 1; j++) {
            if (year % 4 == 0  && year % 100 != 0 || year % 400 == 0 ) {
                months[1] = 29;
            }
            
            cout << left << setw(5) << count;
            total = space + count;
            if (total % 7 == 0) {
                cout << endl;
                
            }
            count++;
        }
        

        store = (months[i] + space)%7 ;
        store = abs(store);

        cout << endl;
        
        count = 1;
        space = store;
        

    }
    
    return 0;
}
