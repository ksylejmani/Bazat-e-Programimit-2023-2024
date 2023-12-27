#include<iostream>
#include<string>
using namespace std;
string generateUserName(string name_and_surname);
int findSpace(string name_and_surname);
int main(){
    string ns;
    cout<<"Write your name and surname: ";
    getline(cin,ns);
    string username=generateUserName(ns);
    cout<<"Your username is: "<<username<<endl;
    return 0;
}
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
string generateUserName(string name_and_surname){
    int spacePosition=findSpace(name_and_surname);
    char firstLetter=name_and_surname[0];
    if(firstLetter>=65 && firstLetter<=91){
            firstLetter=name_and_surname[0]+32;
    }
    string name2=name_and_surname.substr(1,2);
    char fifthLetter=name_and_surname[spacePosition+1];
    if(fifthLetter>=65 && fifthLetter<=91){
        fifthLetter=name_and_surname[spacePosition+1]+32;
    }
    string surname2=name_and_surname.substr(spacePosition+2,2);
    string ans=  firstLetter+name2+"_"+fifthLetter+surname2;
    return ans;
}