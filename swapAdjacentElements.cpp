#include<iostream>
#include<vector>
using namespace std;
class Swap{
    vector<int>& data;
    void swapVector(){
        for(int i=0;i<data.size();i=i+2){
            int temp=data[i];
            data[i]=data[i+1];
            data[i+1]=temp;
        }
    }    
    public:
    Swap(vector<int>& arr):data(arr){}
    void showSwapVect(){
        swapVector();
        for(int i=0;i<data.size();i++){
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
    Swap sp(arr);
    sp.showSwapVect();
    return 0;
}