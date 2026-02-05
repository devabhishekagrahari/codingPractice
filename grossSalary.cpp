#include<iostream> 
#include<iomanip>
#include<vector>
using namespace std;
class Salary{
    float HRA,DA, Bonus;
    vector<float> data;
    float grossSalary(float base){
        return base+(HRA+DA+Bonus)*base/100.0f;
    }
    public:
    Salary(vector<float>& arr,float hra,float da,float bonus):
    data(arr),HRA(hra),DA(da),Bonus(bonus){}

    void showGrossSalary(){
        for(int i=0;i<data.size();i++){
            cout<<fixed<<setprecision(2)<<grossSalary(data[i])<<"\n";
        }
    }
};
int main(){
    int t;
    cin>>t;
    float HRA,DA, Bonus;
    cin>>HRA>>DA>>Bonus;
    vector<float> arr(t);
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    Salary sl(arr,HRA,DA,Bonus);
    sl.showGrossSalary();
    return 0;
}