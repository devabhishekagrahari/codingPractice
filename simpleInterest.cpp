#include<stdio.h>
#include<iostream>
using namespace std;
class Interest{
    public:
    float simpleInterest(float principal,float rate,float time){
        return (principal*rate*time)/100;
    }
};
int main(){
    float p,r,t;
    cin>>p>>r>>t;
    Interest intrst;
    float si=intrst.simpleInterest(p,r,t);
    cout<<si;
    return 0;

}