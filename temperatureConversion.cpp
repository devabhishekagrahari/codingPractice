#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
class Temperature{
    protected:
    float centToFharenheit(float num){
        return ((9*num)/5)+32;
    }
};
class Solution:protected Temperature{
    vector<float> arrTempCent;
    public:
    Solution(vector<float> arr):arrTempCent(arr){}
    void printCentToFahrenheit(){
        for(int i=0;i<arrTempCent.size();i++){
            cout<<fixed<<setprecision(2)<<centToFharenheit(arrTempCent[i])<<"\n";
        }
    }
};
int main(){
    int n;
    cin>>n;
    vector<float> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution sol=Solution(arr);
    sol.printCentToFahrenheit();
    return 0;
}