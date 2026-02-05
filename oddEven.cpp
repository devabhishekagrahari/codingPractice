#include<iostream>
#include<vector>
using namespace std;
class OddEven{
    vector<int> arr;
    public: 
    OddEven(vector<int> arrNo):arr(arrNo){}

    void printOddEven(){
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0){
                cout<<"EVEN"<<"\n";
            }else{
                cout<<"ODD"<<"\n";
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
    OddEven oe=OddEven(arr);
    oe.printOddEven();
    return 0;
}