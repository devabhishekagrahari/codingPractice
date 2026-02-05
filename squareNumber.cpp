#include<iostream>
using namespace std;
class Math{
    public:
    int square(int num){
        return num*num;
    }
};
int main(){
    int t;
    cin>>t;
    vector<int> arr(t);
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    Math mt;
    for(int i=0;i<t;i++){
        cout<<mt.square(arr[i])<<"\n";
    }
    return 0;
}