#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    unordered_map<string,float> mp;
    for(int i=0;i<t;i++){
        string name;
        float fever;
        cin>>name>>fever;
        mp[name]=fever;
    }
    for(auto & ele:mp){
        if(ele.second>98.6){
            cout<<ele.first<<", ";
        }
    }
    return 0;

}