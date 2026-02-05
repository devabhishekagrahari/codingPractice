#include<iostream>
#include<vector>
#include<cctype>
using namespace std;
class Toggle{
    vector<string> data;
    string toggleCase(string word){
        for(char &c:word){
            if(isupper(c)){
                c=tolower(static_cast<unsigned char>(c));
            }else{
                c=toupper(static_cast<unsigned char>(c));
            }
        }
        return word;
    }
    public:
    Toggle(vector<string>& arr):data(arr){}

    void showToggle(){
        for(int i=0;i<data.size();i++){
            cout<<toggleCase(data[i])<<"\n";
        }
    }
};
int main(){
    int t;
    cin>>t;
    vector<string> arr(t);
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    Toggle tg(arr);
    tg.showToggle();
    return 0;
}