#include<iostream>
using namespace std;
class Divisbility{
    public:
    bool divsblBy6(int num){
        if(num%6==0){
            return true;
        }else{
            return false;
        }
    }
};
class Solution:public Divisbility{
   vector<int> arrNo;
    public:
    Solution(vector<int> &arr):arrNo(arr){}
    void printdivBy6(){
        for(int i=0;i<arrNo.size();i++){
            if(divsblBy6(arrNo[i])){
                cout<<"True"<<"\n";
            }else{
                cout<<"False"<<"\n";
            }
            
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
    Solution sol=Solution(arr);
    sol.printdivBy6();
    return 0;

}