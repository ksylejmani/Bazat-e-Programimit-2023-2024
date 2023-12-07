#include <iostream>
#include <cmath>

using namespace std;
 int main (){
    short int n1, n2, n3, n4, n5;
    double mesatarja;
    /*
    cout << "Sheno noten e pare: ";
    cin >> n1;

    cout << "Sheno noten e dyte: ";
    cin >> n2;

    cout << "Sheno noten e trete: ";
    cin >> n3;

    cout << "Sheno noten e katert: ";
    cin >> n4;

    cout << "Sheno noten e peste: ";
    cin >> n5;*/

    cout << "Sheno notat: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    mesatarja = (double)(n1+n2+n3+n4+n5)/5;

    cout << "Mesatarja e te gjitha notave: " << mesatarja << endl;

    return 0;
 }