#include<iostream>
using namespace std;
class Fibonacci{
    vector<int> data;
    int fibo(int num){
        if(num==1) return 0;
        if(num==2) return 1;
        else{
            return fibo(num-1)+fibo(num-2);
        }
    }
    void printFibo(int k){
        for(int i=1;i<=k;i++){
            cout<<fibo(i)<<" ";
        }
    }
    public:
    Fibonacci(vector<int>& arr):data(arr){}
    
    void showFibo(){
        for(int i=0;i<data.size();i++){
            printFibo(data[i]);
            cout<<"\n";
        }
    }

};

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Fibonacci fb=Fibonacci(arr);
    fb.showFibo();
    return 0;
}