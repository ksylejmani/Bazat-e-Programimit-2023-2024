#include<iostream>
using namespace std;
int main(){
    const int m=8;
    int a[m]={8,4,7,1,3,5,6,2};
    int i,j,z;
    cout<<"Vargu i parendetur eshte : ";
    for(i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
    cout<<"Vargu i renditur me renditje rritese eshte : ";
    for(i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}