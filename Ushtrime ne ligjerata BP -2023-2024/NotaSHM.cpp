#include<iostream>
using namespace std;
int main(){
    short int nota;
    cout<<"Cakto noten: ";
    cin>>nota;
    switch (nota)
    {
    case 1:
        cout<<"Nota eshte e dobet\n";
        break;
    case 2:
        cout<<"Nota eshte e mjaftueshme\n";
        break;
    case 3: 
        cout<<"Nota eshte e mire\n";
        break;
    case 4:
        cout<<"Nota eshte shume mire\n";
        break;
    case 5:
        cout<<"Nota eshte shkelqyeshem\n";
        break;
    default:
        cout<<"Nota eshte e pavlefshme\n";
        break;
    }
    return 0;
}