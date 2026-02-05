#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>

using namespace std;
class Tax{
    vector<float> data;
    float taxChart(float grossSalary){
        float tax=0.0f;
        float remaining=grossSalary;
        
        int slab=min(remaining,300000.0f);
        tax+=0.0f;
        remaining-=slab;

        slab=min(remaining,200000.0f);
        tax+=0.05*slab;
        remaining-=slab;

        slab=min(remaining,500000.0f);
        tax+=0.20*slab;
        remaining-=slab;
        
        tax+=0.30*remaining;

        return tax;
    }
    public:
    Tax(vector<float>& arr):data(arr){}

    void showNetSalary(){
        for(int i=0;i<data.size();i++){
            cout<<fixed<<setprecision(2)<<data[i]-taxChart(data[i])<<"\n";
        }
    }
};
int main(){
    int t;
    cin>>t;
    vector<float> arr(t);
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    Tax tx(arr);
    tx.showNetSalary();
    return 0;
}