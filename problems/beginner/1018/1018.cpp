#include <iostream>
 
using namespace std;
 
int main() {
    int numberOfNotes = 7;
    double notes[] = {
        100.00,
        50.00,
        20.00,
        10.00,
        5.00,
        2.00,
        1.00
    };

    const char * noteStrings[] = {
        "100,00",
        "50,00",
        "20,00",
        "10,00",
        "5,00",
        "2,00",
        "1,00"
    };

    double num = 0.0;

    cin >> num;

    cout << (int) num << endl;

    for (int i = 0; i < numberOfNotes; i++) {
        int count = 0;

        while(num >= notes[i]) {
            num -= notes[i];
            count++;
        }

        cout << count << " nota(s) de R$ " << noteStrings[i] << endl;
    }

    return 0;
}
