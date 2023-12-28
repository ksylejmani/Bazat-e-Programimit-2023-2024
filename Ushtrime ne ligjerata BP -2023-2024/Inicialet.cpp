#include<iostream>
#include<string>
using namespace std;
int find_space(string text, bool from_start_to_end);
int count_spaces(string text);
string createInitials(string text);
int main(){
    string name_surnames;
    cout<<"Write your name and surname/s: ";
    getline(cin,name_surnames);
    cout<<"Your initials are: "<<createInitials(name_surnames)<<endl;
    cout<<"Number of names and surnames are: "<<count_spaces(name_surnames)+1<<endl;
    return 0;
}
int find_space(string text, bool from_start_to_end ){
    int ans=-1;
    if(from_start_to_end){
        for(int i=0;i<text.size();i++){
            if(text[i]==' '){
                ans=i;
                break;
            }
        }
    }
    else{
        for(int i=text.size()-1;i>=0;i--){
            if(text[i]==' '){
                ans=i;
                break;
            }                       
        }
    }
    return ans;
}
string createInitials(string text){
    string ans="";
    ans=ans+text.at(0)+"."; //text[0];
    int first_space=find_space(text,true);
    int second_space=find_space(text,false);
    if(first_space==second_space){
        ans=ans+text[first_space+1]+".";
    }
    else{
        ans=ans+text[first_space+1]+".";
        ans=ans+text[second_space+1]+".";
    }
    return ans;
}
int count_spaces(string text){
    int ans=0;
    for(int i=0;i<text.size();i++){
        if(text[i]==' '){
                ans=ans+1;
        }
    }
    return ans;
}