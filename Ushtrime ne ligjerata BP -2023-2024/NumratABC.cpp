#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Jepi tre vlera: ";
    cin>>a>>b>>c;
    for(int i=a;i<=c;i++){
        if(i!=b)
            cout<<i<<" ";
    }
    return 0;
}