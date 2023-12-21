#include<iostream>
using namespace std;
void paga_javore(int no[],int m, float po, float bonusi){
    float paga_baze=0;
    int nr_diteve_8OseMeShume=0;
    int oret_mbi_norme=0;
    for(int i=0;i<m;i++){
        paga_baze=paga_baze+no[i]*po;
        if(no[i]>=8){
            nr_diteve_8OseMeShume++;
            oret_mbi_norme=oret_mbi_norme+(no[i]-8);
        }
    }
    cout<<"Paga baze eshte: "<<paga_baze<<endl;
    if(nr_diteve_8OseMeShume>=3){
        float paga_me_rritje=paga_baze*(1+bonusi);
        cout<<"Paga me bonus eshte: "<<paga_me_rritje<<endl;
        float paga_me_ekstra_rritje=paga_me_rritje+oret_mbi_norme*po*bonusi;
        cout<<"Paga me ekstra bonus eshte: "<<paga_me_ekstra_rritje<<endl;
    }
    else{
        cout<<"Punetori nuk ka perfiguar bonus.\n";
    }

}
int main(){
    const int m=5;
    int numri_oreve[m];
    float bonusi, paga_per_ore;
    cout<<"Ne vijim te caktohen oret e punes per punetoren:\n";
    for(int i=0;i<m;i++){
        cout<<"Sa ore pune jane ne diten "<<i+1<<"? ";
        cin>>numri_oreve[i];
    }
    cout<<"Sa eshe paga per nje ore pune? ";
    cin>>paga_per_ore;
    cout<<"Sa eshte bonusi (te jepet ne perqindje)? ";
    cin>>bonusi;
    bonusi=bonusi/100;
    paga_javore(numri_oreve,m,paga_per_ore,bonusi);
    return 0;
}