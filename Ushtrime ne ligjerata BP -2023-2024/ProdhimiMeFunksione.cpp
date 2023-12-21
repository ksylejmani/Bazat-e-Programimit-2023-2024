#include<iostream>
using namespace std;
int prodhimi(int a, int b, int c, int d);
int main(){
    int x,n;//x=5,n=3
    cout<<"Cakto x dhe n: ";
    cin>>x>>n;
    int y=2*x+4*prodhimi(1,n,2,1)+prodhimi(2,n-1,3,0)+prodhimi(3,n+1,0,5);
    cout<<"Rezultati y="<<y<<endl;
    return 0;
}
int prodhimi(int a, int b, int c, int d){
    int i,p=1;
    cout<<"Test\n";
    for(i=a;i<=b;i++){
        p=p*(c*i+d);
        cout<<"Prova\n";
    }
    return p;
}