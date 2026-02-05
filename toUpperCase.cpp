#include<iostream>
#include<string>
#include<cctype>
#include<vector>
using namespace std;
class Word{
    vector<string> data;
    string upperCase(string word){
        string res=word;
        for(char &c:res){
            c=toupper(static_cast<unsigned char>(c));
        }
        return res;

    }
    public:
    Word(vector<string>& arr):data(arr){}

    void showSentence(){
        for(int i=0;i<data.size();i++){
            cout<<upperCase(data[i])<<"\n";
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
    Word wr(arr);
    wr.showSentence();
    return 0;
}