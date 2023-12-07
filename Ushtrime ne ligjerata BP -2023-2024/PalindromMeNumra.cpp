#include<iostream>
using namespace std;
int main(){
    const int m=8;
    int a[m];
    int r=1;
    cout<<"Ne vijim duhet te caktoni numrat e vargut\n";
    for(int i=0;i<m;i++){
        cout<<"Cakto numrin "<<i+1<<": ";
        cin>>a[i];
    }
    for(int i=0;i<m/2;i++){
        if(a[i]!=a[m-i-1]){
            r=0;
            break;
        }
    }
    //cout<<"Vargu i dhene eshte palindrom: "<<r<<endl;
    if(r==1){
        cout<<"Vargu i dhene eshte palindrom.\n";
    }
    else{
        cout<<"Vargu i dhene nuk eshte palindrom.\n";
    }
    return 0;
}