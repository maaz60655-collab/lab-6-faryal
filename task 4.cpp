#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    if(str[0] == str[str.length() - 1])
        cout << "First and last characters are same";
    else
        cout << "First and last characters are different";

    return 0;
}
