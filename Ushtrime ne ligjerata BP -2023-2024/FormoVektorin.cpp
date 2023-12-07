#include<iostream>
using namespace std;
int main(){
    const int m=5,n=6;
    int a[m]={1,2,3,4,5},b[n]={5,5,6,6,7,7},c[n+m];
    for(int i=0;i<m+n;i++){
        if(i<m){
            c[i]=b[i];
        }
        else{
            c[i]=a[i-n];
        }
    }
    cout<<"Vargu C: ";
    for(int i=0;i<m+n;i++){
        cout<<c[i];
        if(i<m+n-1)
            cout<<", ";
    }
    cout<<endl;

    return 0;
}