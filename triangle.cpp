#include<iostream>
#include<vector>
using namespace std;
class Triangle{
    public:
         bool doesFormTriangle(int &l1,int&l2,int&l3) const {
        if(l1+l2<=l3){
            return false;
        }else if(l2+l3<=l1){
            return false;
        }else if(l1+l3<=l2){
            return false;
        }else{return true;}
     }
     int circumfrence(int &l1,int&l2,int&l3) const {
        return l1+l2+l3;
     }
};

int main(){
    int nRow;
    cin>>nRow;
    vector<vector<int>> arr(nRow,vector<int>(3));
    for(int i=0;i<nRow;i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    Triangle tl;
    for(int i=0;i<nRow;i++){
        if(tl.doesFormTriangle(arr[i][0],arr[i][1],arr[i][2])){
            cout<<tl.circumfrence(arr[i][0],arr[i][1],arr[i][2])<<"\n";
        }else{
            cout<<"-1"<<"\n";
        }
    }
    return 0;
}