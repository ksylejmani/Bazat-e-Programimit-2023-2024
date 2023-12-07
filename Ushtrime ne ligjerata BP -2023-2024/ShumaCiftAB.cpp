#include<iostream>
using namespace std;
int main(){
    short int a,b,s,i;
    cout<<"Shkruani vlerat per a dhe b: ";
    cin>>a>>b;
    s=0;
    int numruesi=0;
    for(i=a;i<=b;i+=2){
        s=s+i; //s+=i;
        cout<<i;
        if(i<b){
            cout<<", ";
            numruesi++;
        }
    }
    cout<<"\nShuma eshte s= "<<s<<endl;
    cout<<numruesi<<endl;
    return 0;
}