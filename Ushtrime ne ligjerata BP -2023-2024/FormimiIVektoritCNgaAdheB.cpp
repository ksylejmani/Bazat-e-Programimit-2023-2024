#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int m=6,n=5;
    int a[m]={1,-1,1,-1,1,-1},b[n]={1,2,3,4,5},c[m+n];
    for(int i=0;i<m+n;i++){
        if(i<n){
            c[i]=b[i];
        }
        else{
            c[i]=a[i-n];
        }
    }
    cout<<"Vargu C: ";
    for(int i=0;i<m+n;i++){
        cout<<setw(5)<<c[i];
        if(i<m+n-1)
            cout<<", ";
    }
    return 0;
}