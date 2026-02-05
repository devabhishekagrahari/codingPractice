#include<iostream>
using namespace std;
class Binary{
    vector<int> data;
    bool isAdjacentZero(int num){
        int prev=-1;   
        while(num>0){
            int current=num%10;
            if(current==0 && prev==0){
                return true;
            }
            prev=current;
            num/=10;
        }
        return false; 
    }
    public:
    Binary(vector<int>& arr):data(arr){}

    void showAdjZero(){
        for(int i=0;i<data.size();i++){
            if(isAdjacentZero(data[i])){
                cout<<"Yes\n";
            }else{
                cout<<"No\n";
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
    Binary bn=Binary(arr);
    bn.showAdjZero();
    return 0;
}