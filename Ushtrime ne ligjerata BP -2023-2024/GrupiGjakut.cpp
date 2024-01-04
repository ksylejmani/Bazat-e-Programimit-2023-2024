#include<iostream>
#include<string>
using namespace std;
enum grupi_gjakut{
    A=1, B, AB, ZERO
};
string caktoRrezikshmerineNdajCOVID19(grupi_gjakut ggj);
string caktoRrezikshmerineNdajCOVID19(grupi_gjakut ggj, int leukocitet);
string caktoDhenesinEGjakut(grupi_gjakut ggj);
string caktoMarresinEGjakut(grupi_gjakut ggj);
int main(){
    grupi_gjakut gr_gj;
    int leukocitet, i_gr_gjakut;
    cout<<"Shenoni grupin e gjakut (A->1, B->2, AB->3 ose ZERO->4): ";
    cin>>i_gr_gjakut;
    gr_gj=static_cast<grupi_gjakut>(i_gr_gjakut);
    cout<<"Shenoni numrin e leukociteve per microliter: ";
    cin>>leukocitet;
    cout<<"Niveli i rrezikshmerise ndaj COVID19 sipas grupit te gjakut: "
        <<caktoRrezikshmerineNdajCOVID19(gr_gj)<<endl;
    cout<<"Niveli i rrezikshmerise ndaj COVID19 sipas grupit te gjakut dhe imunitetit: "
        <<caktoRrezikshmerineNdajCOVID19(gr_gj,leukocitet)<<endl;
    cout<<"Jeni dhenes per keto grupe te gjakut: "<<caktoDhenesinEGjakut(gr_gj)<<endl;
    cout<<"Jeni marres nga keto grupe te gjakut: "<<caktoMarresinEGjakut(gr_gj)<<endl;
    return 0;
}
string caktoRrezikshmerineNdajCOVID19(grupi_gjakut ggj){
    string rez;
    if(ggj==A){
        rez="e larte";
    }
    else if(ggj==B||ggj==AB){
        rez="e mesme";
    }
    else{
        rez="e ulet";
    }
    return rez;
}
string caktoRrezikshmerineNdajCOVID19(grupi_gjakut ggj, int leukocitet){
    string rez;
    if(leukocitet<3000){
        rez="teje mase i larte";
        return rez;
    }
    if(ggj==A){
        if(leukocitet>11000){
            rez="shume i larte";    
        }
        else{
            rez="i larte";
        }
    }
    else if(ggj==B||ggj==AB){
        if(leukocitet>11000){
            rez="mbi mesatare";
        }
        else{
            rez="mesatar";
        }
    }
    else{
        if(leukocitet>11000){
            rez="nen mesatare";
        }
        else{
            rez="i ulet";
        }      
    }
    return rez;       
}

string caktoDhenesinEGjakut(grupi_gjakut ggj){
    string rez;
    if(ggj==A){
        rez="A dhe AB";       
    }
    else if(ggj==B){
        rez="B dhe AB";
    }
    else if(ggj==AB){
        rez="AB";
    }
    else{
        rez="A, B, AB dhe ZERO";
    }
    return rez;
}
string caktoMarresinEGjakut(grupi_gjakut ggj){
    string  rez;
    switch (ggj)
    {
    case A:
        rez="A dhe ZERO";
        break;
    case B: 
        rez="B dhe ZERO";
        break;
    case AB:
        rez="A, B, AB dhe ZERO";
        break;
    default:
        rez="ZERO";
        break;
    }
    return rez;
}