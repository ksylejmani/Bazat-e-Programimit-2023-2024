#include<iostream>
using namespace std;
int main(){
    const int m=3,n=5;
    int l[m][n]={
        {123,99,142,170,111},
        {200,190,250,240,212},
        {180,162,299,102,437}};
    int max=-1,imax=-1,jmax=-1;
    int i=0;
    do{
        int j=0;
        do{
            if(l[i][j]>max){
                max=l[i][j];
                imax=i;
                jmax=j;
            }
            j++;
        }while(j<n);
        i++;
    }while(i<m);
    cout<<"Vlera maksimale: "<<max<<endl;
    cout<<"Drejtimi maksimal: "<<imax+1<<endl;
    cout<<"Dita maksimale: "<<jmax+1<<endl;
    return 0;
}