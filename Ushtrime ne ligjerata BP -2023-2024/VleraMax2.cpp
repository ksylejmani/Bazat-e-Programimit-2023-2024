#include<iostream>
using namespace std;
int main(){
    const int m=8;
    int d[m],max,min;
    cout<<"Ne vijim te caktohen diamtrat e sferave:\n";
    for(int i=0;i<m;i++){
        cout<<"Sa eshte diametri i sferes "<<i+1<<": ";
        cin>>d[i];
    }
    max=d[0];
    min=d[0];
    for(int i=1;i<m;i++){
        if(d[i]>max){
            max=d[i];
        }
        if(d[i]<min){
            min=d[i];
        }
    }   
    cout<<"Diametri maksimal eshte: "<<max<<endl;
    cout<<"Diametri minimal eshte: "<<min<<endl;
    return 0;
}