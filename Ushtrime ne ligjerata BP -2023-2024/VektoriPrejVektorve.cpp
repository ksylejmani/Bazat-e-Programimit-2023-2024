#include<iostream>
using namespace std;
int main(){
    const int k1=5,k2=6,k3=3;
    int a[k1]={1,2,3,4,5},b[k2]={5,5,6,6,7,7},d[k3]={-1,-1,-1},c[k1+k2+k3];
    for(int i=0;i<k1+k2+k3;i++){
        if(i<k1){
            c[i]=a[i];
        }
        else if(i<k1+k2){
            c[i]=b[i-k1];
        }
        else{
            c[i]=d[i-(k1+k2)];
        }
    }
    cout<<"Vargu C: ";
    for(int i=0;i<k1+k2+k3;i++){
        cout<<c[i];
        if(i<k1+k2+k3-1)
            cout<<", ";
    }
    cout<<endl;

    return 0;
}