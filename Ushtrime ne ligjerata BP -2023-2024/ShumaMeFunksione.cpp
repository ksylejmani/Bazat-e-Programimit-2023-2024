#include<iostream>
using namespace std;
int shuma(int a,int b,int c, int d);
int main(){
    int n,y;
    cout<<"Shkruaj vleren per n: ";
    cin>>n;
    y=2*shuma(2,n,1,-1)+shuma(1,n-1,2,0)+shuma(3,n+1,0,4);
    cout<<"y="<<y<<endl;
    return 0;
}
int shuma(int a, int b, int c, int d){
    int s=0;
    cout<<"Prova\n";
    int i;
    for(i=a;i<=b;i++){
        s=s+(c*i+d);
        cout<<"Test\n";
    }
    return s;
}