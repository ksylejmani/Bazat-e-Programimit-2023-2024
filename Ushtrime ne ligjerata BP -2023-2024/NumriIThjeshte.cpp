#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Shkruaj nje numer: ";
    cin>>n;
    bool p=true;
    i=2;
    while (i<=n/2)
    {
        cout<<i<<endl;
        if(n%i==0){
            p=false;
            break;
        }
        i++;
    }
    if(p){
        cout<<"Numri "<<n<< " eshte i thjeshte.\n";
    }
    else{
        cout<<"Numri "<<n<< " nuk eshte i thjeshte.\n";
    }
    
    return 0;
}