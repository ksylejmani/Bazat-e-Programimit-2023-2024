#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int m=8;
    int s,i,n[m];
    float p;
    cout<<"Ne vijim duhet te caktoni numrin e pacienteve neper departamente te Klinkes Interne\n";
    for(i=0;i<m;i++){
        cout<<"Sa pacienta jane ne departamentin "<<i+1<<": ";
        cin>>n[i];
    }
    s=0;
    for(i=0;i<m;i++){
        s=s+n[i]; // s+=n[i];
    }
    p=(n[0]+n[1])/((float)s)*100;
    cout<<"Perqindja e pacienteve ne dy departamentet e para eshte: "
        <<p<<endl;
    cout<<"Numri i pacienteve ne dy departamentet e pare eshte: "<<n[0]+n[1]<<endl;
    cout<<"Numri i pacienteve ne departamentet tjera eshte: "<<s-(n[0]+n[1])<<endl;
    cout<<"Perqindja e pacienteve ne departamentet tjera eshte: "<<100-p<<endl;
    cout<<"Mesatarja e pacienteve neper departamente eshte: "<<(float)s/m<<endl;
    return 0;
}