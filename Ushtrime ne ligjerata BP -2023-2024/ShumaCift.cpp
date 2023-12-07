#include<iostream>
using namespace std;
int main(){
    short int n,i;
    cout<<"Jepe vleren per n: ";
    cin>>n;
    // int s=0;
    // i=4;
    // do{
    //     s=s+i;
    //     cout<<"Test\n";
    //     i=i+2;
    // }while (i<=n);
    // cout<<"Shuma s="<<s<<endl;
    // cout<<"i="<<i<<endl;
    int s=1/2.0*(n/2.0-1)*(4+n);
    cout<<"Shuma s="<<s<<endl;

    
    return 0;
}