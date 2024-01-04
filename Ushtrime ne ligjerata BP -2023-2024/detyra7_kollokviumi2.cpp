#include<iostream>
using namespace std;
enum nota{
    gjashte, shtate, tete, nente, dhjete
};
int main(){
    const int m=5;
    nota n;
    int numeruesi[m]={0,0,0,0,0};
    int intN;
    for(int i=1;i<=m;i++){
        cout<<"Shkruaj nje note nga 6 deri ne 10: ";
        cin>>intN;
        n=static_cast<nota>(intN-6);
        switch(n){
            case gjashte: 
                numeruesi[gjashte]++;
                break;
            case shtate:
                numeruesi[shtate]++;
                break;
            case tete:
                numeruesi[tete]++;
                break;
            case nente:
                numeruesi[nente]++;
                break;
            default:
                numeruesi[dhjete]++;
                break;
        }
    }
    cout<<"Ne vijim eshte paraqitur numri i notave per secilen note:\n";
    for(nota i=gjashte;i<=dhjete;i=static_cast<nota>(i+1)){
        cout<<i+6<<" : "<<numeruesi[i]<<endl;
    }
    return 0;
}