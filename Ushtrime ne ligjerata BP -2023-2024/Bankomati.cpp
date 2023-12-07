#include<iostream>
#include<string>
using namespace std;
int main(){
    int p;
    string k;
    float r=-1;
    cout<<"Sa para doni te terheqni? ";
    cin>>p;
    cout<<"Cilen valute done ta perdorni per shnderrim? ";
    cin>>k;
    /*if(k=="ALL"){
        r=105*p;
    }
    else if(k=="USD")
        r=1.15*p;
    else{
        cout<<"Kjo valute nuk eshte e disponueshme!\n"; 
    }
    if(r!=-1)
        cout<<"Vlera e konvertuar ne "<<k<<" : "<<r<<endl;
        */
    if(k=="ALL"){
        r=p;
        r=105*p;
        cout<<"Vlera e konvertuar ne "<<k<<" : "<<r<<endl;
    }
    if(r==-1)
        cout<<"Vlera origjinale ne EUR: "<<p<<endl;
    return 0;
}