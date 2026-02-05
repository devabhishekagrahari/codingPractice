#include<iostream>
using namespace std;
class Digit{
    vector<int> data;
    int sumDigit(int num){
        int sum=0;
        while(num>0){
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    public:
    Digit(vector<int>& arr):data(arr){}

    void showSumDigit(){
        for(int i=0;i<data.size();i++){
            cout<<sumDigit(data[i])<<"\n";
        }
    }

};
int main(){
    int t;
    cin>>t;
    vector<int> arr(t);
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    Digit dg=Digit(arr);
    dg.showSumDigit();
    return 0;

}