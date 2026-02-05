#include<stdio.h>
#include<iostream>
using namespace std;
class Cube{
 public:
    int surfaceArea(int a){
        return 6*a*a;
    }
    int volume(int a){
        return a*a*a;
    }
};
int main(){
    Cube cb;
    int a;
    cin>>a;
    int srfA=cb.surfaceArea(a);
    int vol=cb.volume(a);
    cout<<srfA<<"  "<<vol;
    return 0; 
}