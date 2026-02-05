#include<iostream>
using namespace std;
class Divisibility{
    vector<int> arr;
    bool isDivBy3(int num){
        return (num%3==0);
    }

    void printDivTillK(int k){
        for(int i=1;i<=k;i++){
            if(!isDivBy3(i)){
                cout<<i<<" ";
            }
        }
        cout<<"\n";
    }

    public:
    Divisibility(vector<int> &data):arr(data){}


    void showResult(){
        for(int i=0;i<arr.size();i++){
            printDivTillK(arr[i]);
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
    Divisibility div=Divisibility(arr);
    div.showResult();
    return 0;
}