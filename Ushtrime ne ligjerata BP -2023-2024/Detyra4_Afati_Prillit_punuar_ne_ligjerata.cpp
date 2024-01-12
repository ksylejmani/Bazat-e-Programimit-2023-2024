#include<iostream>
using namespace std;
bool f1(int vargu[], int m, int numri);
int main(){
    const int m=7;
    int vargu[m];
    int i=0;
    while(i<m){
        int numri;
        cout<<"Jepe nje numer: ";
        cin>>numri;
        vargu[i]=numri;
        if(i>0){
            bool jo_unik=f1(vargu,i,numri);
            if(jo_unik){
                i--; 
                cout<<"Numri i dhene eshte caktuar me pare!\n";
            }
        }
        i++;
    }
    cout<<"Vargu: ";
    for(int i=0;i<m;i++){
        cout<<vargu[i]<<" "; 
    }
    cout<<endl;
    return 0;
}
bool f1(int vargu[], int m, int numri){
    bool rez=false;
    for(int i=0;i<m;i++){
        if(numri==vargu[i]){
            rez=true;
            break;
        }
    }
    return rez;
}