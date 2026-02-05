#include<iostream>
using namespace std;
class Palindrome{
    public:
    bool isPalindrome(string word){
        string tempWord;
        for(int i=word.length()-1;i>=0;i--){
            tempWord+=word[i];
        }
        if(tempWord==word){
            return true;
        }else{
            return false;
        }
    }
};
class Solution{
   vector<string> wordsArr;
   Palindrome pal;
   public:
   Solution(vector<string> &words):wordsArr(words){}
    void printPalStatus(){
        for(int i=0;i<wordsArr.size();i++){
            if(pal.isPalindrome(wordsArr[i])){
                cout<<"True"<<"\n";
            }else{
                cout<<"False"<<"\n";
            }
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
    Solution sol=Solution(arr);
    sol.printPalStatus();
    return 0;
}