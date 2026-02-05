#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Maximum{
    vector<int> arr;
    public:
    Maximum(vector<int> &arrNo):arr(arrNo){}
    
    int findMax(){
        //return  the max output 
        int max=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        return max;
    }

};

class Solution:public Maximum{
     public:
       Solution(vector<int> &arrNum):Maximum(arrNum){}

       void winOrLoose(){
         if(findMax()%2==0){
            cout<<"WON";
         }else{
            cout<<"LOST";
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
    sol.winOrLoose();
    return 0;
}