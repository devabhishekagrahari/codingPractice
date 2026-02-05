#include<iostream>
using namespace std;
class PastryShop{
    int totalPastry;
    vector<int> Orders;
    public:
     PastryShop(vector<int> &orderList,int noPastry):Orders(orderList),totalPastry(noPastry){}

     void takeOrder(int order){
        if(totalPastry<=0){
            cout<<"Sorry, we are all out!"<<"\n";
        }else{
            totalPastry-=order;
            cout<<"Enjoy your dessert!"<<"\n";
        }
     }

     void showOrderStatus(){
        for(int i=0;i<Orders.size();i++){
            takeOrder(Orders[i]);
        }
     }
};
int main(){
    int noPastry ,noCustomer;
    cin>>noPastry>>noCustomer;
    vector<int> arr(noCustomer);
    for(int i=0;i<noCustomer;i++){
        cin>>arr[i];
    }
    PastryShop ps=PastryShop(arr,noPastry);
    ps.showOrderStatus();

    return 0;
}