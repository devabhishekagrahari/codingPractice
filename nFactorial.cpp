#include<iostream>
using namespace std;
class Factorial{
    vector<int> data;
    int factorial(int num){
        int product=1;
        for(int i=1;i<=num;i++){
            product*=i;
        }
        return product;
    }
    public:
    Factorial(vector<int> &arr):data(arr){}
    void showFactorial(){
        for(int i=0;i<data.size();i++){
            cout<<factorial(data[i])<<"\n";
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
    Factorial fc=Factorial(arr);
    fc.showFactorial();

    return 0;
}