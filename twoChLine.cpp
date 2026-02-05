#include<iostream>
using namespace std;

int main(){
    string word;
    cin>>word;
    for(int i=0;i<word.length();i=i+2){
        cout<<word[i]<<word[i+1]<<"\n";
    }
    return 0;
}