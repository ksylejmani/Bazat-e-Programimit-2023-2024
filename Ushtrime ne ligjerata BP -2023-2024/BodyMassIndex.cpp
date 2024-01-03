#include<iostream>
#include<string>
#include<math.h>
using namespace std;
struct personi
{
    string emri, mbiemri;
    int mosha;
    double masa, lartesia;
};
void shtyp_indeksin_e_mases_se_trupit(personi p);
int main(){
    personi p;
    cout<<"Jepe emrin: ";
    cin>>p.emri;
    cout<<"Jepe mbiemrin: ";
    cin>>p.mbiemri;
    cout<<"Jepe moshen: ";
    cin>>p.mosha;
    cout<<"Jepe masen: ";
    cin>>p.masa;
    cout<<"Jepe lartesine: ";
    cin>>p.lartesia;
    shtyp_indeksin_e_mases_se_trupit(p);
    return 0;
}
void shtyp_indeksin_e_mases_se_trupit(personi p){
    double indeksi_mt=p.masa/(pow(p.lartesia,2));
    cout<<p.emri<<" "<<p.mbiemri<<"  me moshen "
        <<p.mosha<<" ka indeksin e mases se trupit: "
        <<indeksi_mt<<"."<<endl;
    if(indeksi_mt<18.5){
        cout<<p.emri<<" "<<p.mbiemri<<" eshte nen peshen normale.\n"; 
    }
    else if(indeksi_mt<=24.9){
        cout<<p.emri<<" "<<p.mbiemri<<" eshte ne peshen normale.\n"; 
    }
    else{
        cout<<p.emri<<" "<<p.mbiemri<<" eshte mbi peshen normale.\n"; 
    }
}