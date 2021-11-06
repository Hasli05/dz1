#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Ukr");

    double raw_numbers = 0;
    string yesOrNo = "Y";
    while (yesOrNo == "Y") {
        if (yesOrNo == "Y") {
            cout << "Введiть значення :" << endl;
            cin >> raw_numbers;
            cout << raw_numbers * raw_numbers << endl;


            cout << "Продовжити?(Y - так , N - нi)" << endl;
            cin >> yesOrNo;
        }
        if (yesOrNo == "N") {
            cout << "Завершення" << endl;
        }
        else {
            cout << "Не та буква" << endl;

            cout << "Продовжити?(Y - так , N - нi)" << endl;
            cin >> yesOrNo;
        }


        if (yesOrNo != "Y" || yesOrNo != "N") {
            cout << "Даю послєдню попитку написати правельно! Y - продовжити , N - Завершити" << endl;
            cin >> yesOrNo;
        }
     }
    cout << "Завершення" << endl;
}

