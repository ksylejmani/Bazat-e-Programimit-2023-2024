#include<iostream>
#include<vector>
using namespace std;
int minimalja(int a, int b, int c);
int minimalja(int a, int b, int c, int d);
int minimalja(int a[],int m);
float minimalja(float a, int b, int c);
float pjesto_minimalen(int n1, int n2, int n3, int pjestuesi);
int main(){
    int n1=5,n2=4,n3=1,n4=-1;
    const int m=8;
    int a[m]={5,1,6,9,3,4,5,0};
    cout<<"Min3: "<<minimalja(n1,n2,n3)<<endl;
    cout<<"Min4: "<<minimalja(n1,n2,n3,n4)<<endl;
    cout<<"MinVargu: "<<minimalja(a,m)<<endl;
    cout<<"Min3 me pjestim prej 100: "<<minimalja((float)n1,n2,n3)<<endl;
    int pjestuesi=4;
    cout<<"Minimalja prej tre numrave e pjstuar me "<<pjestuesi<<" eshte: " <<pjesto_minimalen(n1,n2,n3,pjestuesi)<<endl;
    return 0;
}
int minimalja(int a, int b, int c){
    int rez=a;
    if(b<rez)
        rez=b;
    if(c<rez)
        rez=c;
    return rez;
}
int minimalja(int a, int b, int c, int d){
    int rez=a;
    if(b<rez)
        rez=b;
    if(c<rez)
        rez=c;
    if(d<rez)
        rez=d;
    return rez;   
}
int minimalja(int a[],int m){
    int min=a[0];
    for(int i=1;i<m;i++){
        if(a[i]<min){
            min=a[i];
        }       
    }
    return min;
}
float minimalja(float a, int b, int c){
    int rez=a;
    if(b<rez)
        rez=b;
    if(c<rez)
        rez=c;
    return (float)rez/100;
}
float pjesto_minimalen(int n1, int n2, int n3, int pjestuesi){
    int min=minimalja(n1,n2,n3);
    float rez=(float)min/pjestuesi;
    return rez;
}