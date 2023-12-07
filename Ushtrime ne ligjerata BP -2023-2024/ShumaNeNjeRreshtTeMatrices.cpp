#include<iostream>
using namespace std;
int main(){
    const int m=5,n=4;
    int a[m][n]={{16,10,12,8},{4,12,9,7},{13,10,15,20},{7,8,14,16},{10,11,10,12}};
    int k,s=0;
    cout<<"Vendosni vleren per diten: ";
    cin>>k;
    for(int j=0;j<n;j++){
        s=s+a[k-1][j];
    }
    cout<<"Shume e anetareve ne diten "<<k<<" eshte: "<<s<<endl; 
    return 0;
}