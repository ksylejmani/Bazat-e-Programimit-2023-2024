#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int x,y;
    cout<<"Vendose x-in: ";
    cin>>x;
    if(x<100){
        y=4;
    }
    else if(x==100){
        y=x+4;
    }
    else{
        y=-1;
    }
    cout<<"Rezultati y="<<setw(5)<<setfill('j')<<y<<endl;
    return 0;
}