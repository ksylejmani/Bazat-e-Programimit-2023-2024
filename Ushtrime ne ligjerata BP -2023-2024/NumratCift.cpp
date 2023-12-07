#include<iostream>
using namespace std;
int main(){
    const int m=6;
    int a[m]={3,4,11,5,7,6};
    int k=0;
    for(int i=0;i<m;i++){
        if(a[i]%2==0){
            k++;
            cout<<"Test\n";
        }
    }
    cout<<"Numri i vlerave cifte eshte: "<<k<<endl;
    return 0;
}