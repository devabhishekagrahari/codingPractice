#include<iostream>
using namespace std;
class Digit{
    vector<int> data;
    int square(int num){
        int res=0;
        while(num>0){
            int n=num%10;
            res+=n*n;
            num/=10;
        }
        return res;
    }
    int power(int num,int k){
        int product=1;
        for(int i=0;i<k;i++){
            product*=num;
        }
        return product;
    }
    int arm_no(int num){
        int productSum=0;
        int n=num;
        int k=0;
        while(n>0){
            k++;
            n/=10;
        }
        while(num>0){
            productSum+=power(num%10,k);
            num/=10;
        }
        return productSum;
    }
    bool isArmstrong(int num){
        if(num==arm_no(num)){
            return true;
        }else{
            return false;
        }
    }
    public:
    Digit(vector<int>& arr):data(arr){}
    void showSquareSum(){
        for(int i=0;i<data.size();i++){
            cout<<square(data[i])<<"\n";
        }
        
    }
    void showArmstrong(){
        for(int i=0;i<data.size();i++){
            if(isArmstrong(data[i])){
                cout<<"Yes\n";
            }else{
                cout<<"No\n";
            }
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
    Digit dg=Digit(arr);
    // dg.showSquareSum();
    dg.showArmstrong();


    return 0;
}