#include<iostream>
#include<vector>
using namespace std;
class Logic{
    public:
    void updown(int num) const{
        if(num>7){
            cout<<"UP"<<"\n";
        }else if(num<7){
            cout<<"DOWN"<<"\n";
        }else{
            cout<<"EQUAL"<<"\n";
        }
    }
};
class SevenUpDown{
    vector<int> arrNum;
    Logic lg;
    public:
    SevenUpDown(const vector<int> &arr):arrNum(arr){}


    void print7upDown() const{
        for(int i=0;i<arrNum.size();i++){
            lg.updown(arrNum[i]);
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
    SevenUpDown supd=SevenUpDown(arr);
    supd.print7upDown();
    return 0;
}