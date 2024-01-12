#include<iostream>
using namespace std;
int main(){
    const int m=3,n=5;
    int a[m][n]={{4,5,3,4,2},{4,4,6,1,2},{3,6,4,2,3}};
    int oret_max=-1;
    int punetori_max=-1;
    for(int i=0;i<m;i++){
        int s=0;
        for(int j=0;j<n;j++){
            s=s+a[i][j];
        }
        if(s>oret_max){
            oret_max=s;
            punetori_max=i;
        }
    }
    cout<<"Punetori me oret maksimale javore ("<<oret_max<<") eshte: "
        <<punetori_max+1<<endl;
    return 0;
}