#include <iostream>
#include "lib.h"

using namespace std;

int main() {

    int a;

    cin >> a;

    if (det (a) == true){

        cout << "numero primo" << endl;
    }else {

        cout << "numero non primo" << endl;
    }
}
