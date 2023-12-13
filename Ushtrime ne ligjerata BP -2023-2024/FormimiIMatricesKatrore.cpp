#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int m=20;
    int a[m][m],i,j;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(i<j){
                a[i][j]=j+1;
            }
            else if(i==j){
                a[i][j]=i+j+2;
            }
            else{
                a[i][j]=i;
            }
        }
    }
    cout<<"Matrica e krijuar eshte:\n";
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            cout<<setw(4)<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}