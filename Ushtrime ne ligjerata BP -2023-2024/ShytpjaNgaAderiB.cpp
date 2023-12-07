#include<iostream>
using namespace std;
int main(){
    int a,b,i;
    cout<<"Shkruaj vlerat per a dhe b: ";
    cin>>a>>b;
    if(b%2==0){
        b=b-1;
    }
    for(i=a;i<=b;i++/* ose i=i+1*/){
        // if(i%2!=0){
        //     cout<<i;
        //     if(i<b-1 && (i+2)%2!=0){
        //         cout<<", ";    
        //     }   
        // }
        if(i%2==1){
            cout<<i;
            if(i!=b){
                cout<<", ";    
            } 
        }
 
    }
    return 0;
}