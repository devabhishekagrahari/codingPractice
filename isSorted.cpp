#include<iostream>
#include<vector>
using namespace std;
class Sorted{
    public:
    bool isSorted(vector<int>& data){
        for(int i=0;i<data.size()-1;i++){
            if(data[i]>data[i+1]){
                return false;
            }
        }
        return true;
    }


};
int main(){
    int t;
    cin>>t;
    Sorted st;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(st.isSorted(arr)){
            cout<<"Yes"<<"\n";
        }else{
            cout<<"No"<<"\n";
        }
    }
    return 0;
}