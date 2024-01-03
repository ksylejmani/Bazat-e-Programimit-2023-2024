#include<iostream>
#include<string>
using namespace std;
struct Libri
{
    string emri;
    int viti_i_botimit, shitjet;
    void teDhenat(){
        cout<<"Emri: "<<emri<<endl;
        cout<<"Viti i botimit: "<<viti_i_botimit<<endl;
        cout<<"Shitjet: "<<shitjet<<endl;
    }   
    
};
Libri inicializo(){
    Libri rez;
    cout<<"Si eshte emertimi i librit? ";
    getline(cin,rez.emri);
    cout<<"Cili eshte viti i botimit? ";
    cin>>rez.viti_i_botimit;
    cout<<"Sa libra jane shitur? ";
    cin>>rez.shitjet;
    cin.ignore();
    return rez;
}
int main(){
    Libri Libri1=inicializo();
    Libri Libri2=inicializo();
    Libri1.teDhenat();
    Libri2.teDhenat();
    return 0;
}