#include<iostream>
using namespace std;
int main(){
    const int m=7;
    int d[m];
    int i;
    cout<<"Vendosni vlerat e vargut:\n";
    for(i=0;i<m;i++){
        cout<<"Cakto anetarin "<<i+1<<": ";
        cin>>d[i];
    }
    int max=d[0],min=d[0];
    i=1;
    do{
        if(d[i]>max){
            max=d[i];
        }
        if(d[i]<min){
            min=d[i];
        }
        i++;
    }while(i<m);
    cout<<"Vlera maksimale eshte: "<<max<<endl;
    cout<<"Vlera minimale eshte: "<<min<<endl;
    return 0;
}