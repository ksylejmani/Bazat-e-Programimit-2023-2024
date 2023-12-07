#include<iostream>
using namespace std;
int main(){
    const int m=6;
    int k=0,sh=0,notat[m];
    cout<<"Jepi notat:\n";
    for(int i=0;i<m;i++){
        cout<<"Cakto noten "<<i+1<<": ";
        cin>>notat[i];
    }
    for(int i=0;i<m;i++){
        if(notat[i]<4){
            k++;
            cout<<"Test\n";
        }
        else if(notat[i]==5){
            sh++;
            cout<<"Prova\n";
        }
        if(k>2){
            break;
        }
    }
    if(k>2){
        cout<<"Nxenesi denohet!\n";
    }
    else if(sh>=5){
        cout<<"Nxenesi shperblehet\n";
    }
    else{
        cout<<"Nxenesi as nuk shperblehet as nuk denohet";
    }
    return 0;
}