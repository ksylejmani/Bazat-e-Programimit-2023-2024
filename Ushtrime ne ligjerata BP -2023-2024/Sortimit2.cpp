#include<iostream>
using namespace std;
int main(){
    const int m=5;
    int a[m]={17,27,51,32,44};
    int i,z,j;
    i=0;
    do{
        j=i+1;
        do{
            if(a[i]>a[j]){
                z=a[i];
                a[i]=a[j];
                a[j]=z;
            }
            j++;
        }while(j<m);
        i++;   
    }while(i<m-1);
    cout<<"Vektori i sortuar A : {";
    for(i=0;i<m;i++){
        cout<<a[i];
        if(i<m-1)
        cout<<", ";
    }
    cout<<"}\n";

    return 0;
}