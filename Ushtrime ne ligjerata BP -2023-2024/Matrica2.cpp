#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    const int m=20;
    int a[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i<j){
                a[i][j]=i+2;
            }
            else if(i==j){
                a[i][j]=/*(i+j+2)*(i+j+2);*/pow((double)(i+j+2),2.0);
            }
            else{
                a[i][j]=j+3;
            }
        }
    }
    cout<<"Matrica A:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<setw(4)<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}