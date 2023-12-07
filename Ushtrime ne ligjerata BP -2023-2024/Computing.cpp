#include<iostream>
using namespace std;
int main(){
    short int f;
    cout<<"Jepe fushen e kompjuterikes (1-CS, 2-CE, 3-SE dhe 4-IS): ";
    cin>>f;
    switch (f)
    {
    case 1:
        cout<<"Paga per CS eshte 2500 '€'";
        break;
    case 2:
        cout<<"Paga per CE eshte 2800 \u20a0\n";
        break;
    case 3:
        cout<<"Paga per SE eshte 1500 \u20a0\n";
        break;
    case 4:
        cout<<"Paga per IS eshte 1800 \u20a0\n";
        break;
    default:
        cout<<"Nuk kemi informacion per kete fushe\n";
        break;
    }

    return 0;
}