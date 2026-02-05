#include<iostream>
#include<vector>
using namespace std;

class reverseArray{
    vector<int> data;
    public:
    reverseArray(vector<int>& arr):data(arr){}
    void showReverseArr(){
        for(int i=data.size()-1;i>=0;i--){
            cout<<data[i]<<" ";
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
    reverseArray rA(arr);
    rA.showReverseArr();
    return 0;
}