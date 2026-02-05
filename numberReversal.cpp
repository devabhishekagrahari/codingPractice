#include<iostream>
using namespace std;
class Solution{
    public:
    int reverseDigit(int num){
        int reverseNum=0;
        while(num){
            reverseNum=reverseNum*10+num%10;
            num/=10;
        }
        return reverseNum;
    }
    //732
    //1*10+7=7
    //7*10+3=73
    //73*10+2=732
};
int main(){
    int num;
    cin>>num;
    Solution sol;
    cout<<sol.reverseDigit(num);
    return 0;
}