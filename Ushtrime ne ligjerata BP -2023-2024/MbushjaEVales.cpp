#include<iostream>
#include<string>
using namespace std;
int findSpace(string name_and_surname){
    int ans=-1;
    for(int i=0;i<name_and_surname.size();i++){
        if(name_and_surname[i]==' '){
            ans=i;
            break;
        }
    }
    return ans;
}
double llogaritCmiminPerMbushje(string lloji_i_mbushjes){
    double cmimi=-1;
    // Shiko per hapesira
    if(findSpace(lloji_i_mbushjes)==-1){
        return cmimi;
    } 
    //Shnderro ne shkronaj te vogla
    for(int i=0;i<lloji_i_mbushjes.size();i++){
        if(lloji_i_mbushjes[i]==' '){
            continue;
        }
        if(lloji_i_mbushjes[i]>=65 && lloji_i_mbushjes[i]<=91){
            lloji_i_mbushjes[i]=lloji_i_mbushjes[i]+32;
        }
    }
    string pako=lloji_i_mbushjes.substr(0, 3);
    char madhesia=lloji_i_mbushjes[lloji_i_mbushjes.size()-1];
    if(pako=="fol"){
        if(madhesia=='s'){
            cmimi=2.99;
        }
        else if(madhesia=='m'){
            cmimi=4.99;
        }
        else if(madhesia=='l'){
            cmimi=7.49;
        }
    }
    else if(pako=="int"){
        if(madhesia=='m'){
            cmimi=5.99;
        }
        else if(madhesia=='l'){
            cmimi=9.99;
        }
    }
    return cmimi;
}
int main(){
    double cmimi;
    string mesazhi;
    cout<<"Cfare lloji te mbushjes deshironi: ";
    getline(cin,mesazhi);
    cmimi=llogaritCmiminPerMbushje(mesazhi);
    if(cmimi!=-1){
        cout<<"Cmimi per kete lloji te mbushjes eshte: "<<cmimi<<endl;
    }
    else{
        cout<<"Mesazhi nuk eshte valid!\n";
    }
    return 0;
}