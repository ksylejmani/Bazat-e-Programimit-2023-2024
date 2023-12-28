#include<iostream>
using namespace std;
int min(int a, int b){
    int rez;
    rez=(a<b)?(a):(b);
    return rez;
}
int min(int a, int b, int c){
    int rez=a;
    if(b<rez)
        rez=b;
    if(c<rez)
        rez=c;
    return rez;
}
int min(int A[], int n){
    int rez=A[0];
    for(int i=1;i<n;i++){
        if(A[i]<rez){
            rez=A[i];
        }
    }
    return rez;
}
int main(){
    const int n=7;
    int a=4,b=-1,c=-4;
    int A[n]={4,3,2,9,4,7,3};
    cout<<"Min2: "<<min(a,b)<<endl;
    cout<<"Min3: "<<min(a,b,c)<<endl;
    cout<<"MinVargu: "<<min(A,n)<<endl;
    return 0;
}