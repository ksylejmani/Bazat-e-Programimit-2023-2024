#include<iostream>
#include<string>
using namespace std;
const int EMETIMI_MESATAR_CO2_PER_VETURE=272;
string rajonet[]={"Prishtina","Mitrovica","Peja","Prizreni","Ferizaji","Gjilani","Gjakova"};
enum rajoni{
    Prishtina, Mitrovica, Peja, Prizreni, Ferizaji, Gjilani, Gjakova
};
int llogarit_investimin_ne_vetura(rajoni r,int cmimi_mesatar, int numri_i_veturave);
int llogarit_emetimin_co2(int numri_i_veturave);
int main(){
    int nv, cm, intR;
    rajoni r;
    cout<<"Vendos numrin e veturave: ";
    cin>>nv;
    cout<<"Vendos cmimin mesatar: ";
    cin>>cm;
    cout<<"Cakto njerin prej rajoneve te Kosoves (1-7): ";
    cin>>intR;
    r=static_cast<rajoni>(intR-1);
    cout<<"Investimi ne vetura ne rajoni "<<rajonet[r]<<" eshte "
    <<llogarit_investimin_ne_vetura(r,cm,nv)<<endl;
    cout<<"Emetimi i CO2-it eshte: "<<llogarit_emetimin_co2(nv)<<" litra."<<endl;
    return 0;
}
int llogarit_investimin_ne_vetura(rajoni r,int cmimi_mesatar, int numri_i_veturave){
    int rez;
    float rritja_zbritja=0;
    switch (r)
    {
    case Prishtina:
        rritja_zbritja=1.1;
        break;
    case Mitrovica:
    case Peja:
    case Ferizaji:
        rritja_zbritja=1.05;
        break;
    case Prizreni:
        rritja_zbritja=1.07;
    default:
        rritja_zbritja=1;
        break;
    }
    rez=cmimi_mesatar*numri_i_veturave*rritja_zbritja;
    return rez;
}
int llogarit_emetimin_co2(int numri_i_veturave){
    int rez;
    rez=numri_i_veturave*EMETIMI_MESATAR_CO2_PER_VETURE;
    return rez;   
}