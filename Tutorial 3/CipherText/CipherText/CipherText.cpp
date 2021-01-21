
#include <iostream>
using namespace std;

int main()
{
    //This is a casting operator
    //cout << int('a') << endl;
    //cout << int('A') << endl;
    //cout << char(65) << endl;
    //system("pause>0");

    char c1, c2, c3, c4, c5;
    cout << "Please enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII message is: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5);
}


