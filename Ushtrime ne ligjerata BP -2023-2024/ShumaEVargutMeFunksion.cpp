#include<iostream>
#include<iomanip>
using namespace std;
int shuma(float A[],int m);
void lexo_vlerat(float A[],int m);
void zmadho_vlerat(float A[], int m, float rritja);
void shtyp(float A[], int m){
    cout<<"Vlerat: ";
    for(int i=0;i<m;i++){
        cout<<setw(6)<<A[i];
        if(i<m-1)
            cout<<", ";
    }
}
int main(){
    const int m=10;
    float A[m];
    lexo_vlerat(A,m);
    int s=shuma(A,m);
    cout<<"Shuma: "<<s<<endl;
    shtyp(A,m);
    float rritja;
    cout<<"\nCakto rritjen ne perqindje: ";
    cin>>rritja;
    rritja=rritja/100;
    zmadho_vlerat(A,m,rritja);
    shtyp(A,m);
    return 0;
}
int shuma(float A[],int m){
    int s=0;
    int i=0;
    do{
        s=s+A[i];
        i=i+2; //i+=2
    }while(i<m);
    return s;
}
void lexo_vlerat(float A[],int m){
    cout<<"Jepni vlerat per anetaret e vargut:\n";
    for(int i=0;i<m;i++){
        cout<<"Vlera "<<i+1<<": ";
        cin>>A[i];
    }
    cout<<endl;
}
void zmadho_vlerat(float A[], int m, float rritja){
    for(int i=0;i<m;i++){
        A[i]=A[i]*(1+rritja);       
    }
}
