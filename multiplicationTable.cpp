#include<iostream>
using namespace std;
class Solution{
    vector<int> arr;
    void printTable(int num) const {
        for(int i=1;i<=10;i++){
            cout<<num*i<<" ";
        }
        cout<<"\n";
    }
    public:
    Solution(const vector<int> &data):arr(data){}


    void showTable() const {
        for(int i=0;i<arr.size();i++){
            printTable(arr[i]);
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
    Solution sol=Solution(arr);
    sol.showTable();
    return 0;
}