#include<iostream>
#include<vector>
using namespace std;
class Temperature{
    public:
    string status(int temp, int humd){
        if(temp>=30 && humd>=90){
            return "Hot and Humid";
        }else if(temp>=30 && humd<90){
            return "Hot";
        }else if(temp<30 && humd>=90){
            return "Cool and Humid";
        }else{
            return "Cool";
        }
    }
};
class Solution{
    vector<vector<int>> data;
    Temperature tmp;
    public:
    Solution(vector<vector<int>> &arr):data(arr){}

    void showStatus(){
        for(int i=0;i<data.size();i++){
          cout<<tmp.status(data[i][0],data[i][1])<<"\n";   
        }
    }
};

int main(){
    int t;
    cin>>t;
    vector<vector<int>> arr(t,vector<int>(2));
    for(int i=0;i<t;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    Solution sol=Solution(arr);
    sol.showStatus();
    return 0;

}