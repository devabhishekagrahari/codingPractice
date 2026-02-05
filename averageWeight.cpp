#include<iostream>
#include<vector>
using namespace std;
class Student{
    vector<float> arrW;
    public:
    Student(vector<float> &arrWeight):arrW(arrWeight){}

    float averageWeight(){
        float totalWeight=0;
        for(int i=0;i<arrW.size();i++){
            totalWeight+=arrW[i];
        }
        return totalWeight/arrW.size();
    }
};
int main(){
    vector<float> arr(10);
    for (int i=0;i<10;i++){
        cin>>arr[i];
    }
    Student st=Student(arr);
    cout<<st.averageWeight();
    return 0;
}