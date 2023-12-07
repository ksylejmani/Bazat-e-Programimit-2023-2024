#include<iostream>
using namespace std;
int main(){
    const int m12=4,m3=6;
    char A[m12]={'o','r','a'};
    char B[m12]={'a','r','a'};
    char C[m3]={'k','i','m','i','k'};
    bool rezA=true,rezB=true,rezC=true;
    for(int i=0;i<m12/2-1;i++){
        if(A[i]!=A[m12-2-i]){
            rezA=false;
        }
        if(B[i]!=B[m12-2-i]){
            rezB=false;
        }
    }
    for(int i=0;i<m3/2-1;i++){
        if(C[i]!=C[m3-2-i]){
            rezC=false;
            break;
        }
    }
    if(rezA){
        cout<<A<<" eshte palindrom.\n";
    }
    else{
        cout<<A<<" nuk eshte palindrom.\n";
    }
    if(rezB){
        cout<<B<<" eshte palindrom.\n";
    }
    else{
        cout<<B<<" nuk eshte palindrom.\n";
    }
    if(rezC){
        cout<<C<<" eshte palindrom.\n";
    }
    else{
        cout<<C<<" nuk eshte palindrom.\n";
    }
    return 0;

}