#include <iostream>
using namespace std;
int main()
{
    int numri = 24, i; // i = pjestuesi i numrit te dhene
    bool i_thjeshte = true;
    i=2;
    while(i <= numri/2){
        if (numri%i==0) {
            i_thjeshte = false;
            cout<<"Test"<<endl;
            break;
        }
        i++;
    }
    if (i_thjeshte)
        cout<<"Numri natyror " <<numri <<" eshte numer i thjeshte.\n";
    else
        cout<<"Numri natyror " <<numri <<" eshte numer jo i thjeshte.\n";
    return 0;
}
