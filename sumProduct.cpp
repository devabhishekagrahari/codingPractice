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
    int productDigit(int num){
        int product=1;
        while(num>0){
            product*=num%10;
            num/=10;
        }
        return product;
    }
    int sumProduct(int num){
        return sumDigit(num)*productDigit(num);
    }
    public:
    Digit(vector<int>& arr):data(arr){}

    void showSumProduct(){
        for(int i=0;i<data.size();i++){
            if(sumProduct(data[i])==data[i]){
                
            }
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

    return 0;
}