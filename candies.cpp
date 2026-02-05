#include<iostream>
using namespace std;
class Candies{
    public:
    void distribute(int candies,int noPerson){
        if(candies%noPerson==0){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
};
int main(){
    int a,b;
    cin>>a>>b;
    Candies cd;
    cd.distribute(a,b);
    return 0;
}