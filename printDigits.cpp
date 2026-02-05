#include<iostream>
#include<vector>
using namespace std;
class Solution{
    vector<int> arrNo;
    public:
       Solution(vector<int> &arr):arrNo(arr){}

       void printDigits(){
         for(int i=0;i<arrNo.size();i++){
            cout<<arrNo[i]/10<<" "<<arrNo[i]%10<<"\n";
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
    sol.printDigits();
    return 0;
}
