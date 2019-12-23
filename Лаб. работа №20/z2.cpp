#include <iostream>

#include <cstring>

using namespace std;

 

int main() {

    char str[] = "aaaa";

    for (auto i = 0; i < strlen(str); i++)

        cout << str[i] << " ";

    cout << endl;

 

    return 0;

}