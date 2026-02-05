#include<iostream>
#include<iomanip>
using namespace std;
class PercentageCalculator{
    vector<float> data;
    float percentMarks(float num){
        return num/80.0f*100.0f;
    }

    float totalPercent(){
        float totalMarks=0.00f;
        for(int i=0;i<data.size();i++){
            totalMarks+=data[i];
        }
        return (totalMarks/(80.0f*data.size()))*100.0f;
    }

    public:
    
    PercentageCalculator(vector<float>& arr):data(arr){}

    void showPercentMarks(){
       cout<<fixed<<setprecision(2)<<totalPercent()<<"\n";
    }
};
int main(){
    int t;
    cin>>t;
    if(t==0){return 0;}
    vector<float> arr(t);
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    PercentageCalculator pl=PercentageCalculator(arr);
    pl.showPercentMarks();
    return 0;
}