#include<iostream>
#include<cctype>
using namespace std;
class Solution{
    vector<string> data;
    int countVowel(string word){
        int cnt=0;
        for(char& ch:word){
            ch=tolower(ch);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                cnt++;
            }
        }
        return cnt;
    }
    public:
    Solution(const vector<string>& nameList):data(nameList){}


    void showNoCandies(){
        for(int i=0;i<data.size();i++){
            cout<<countVowel(data[i])<<"\n";
        }
    }
}; 
int main(){
    int t;
    cin>>t;
    vector<string> nameList(t);
    for(int i=0;i<t;i++){
        cin>>nameList[i];
    }
    Solution sol=Solution(nameList);
    sol.showNoCandies();
    return 0;
}
