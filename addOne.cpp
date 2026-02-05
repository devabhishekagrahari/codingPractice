#include<iostream>
#include<string.h>
using namespace std;
class Solution{
    public:
    void greet(string name,int age){
        cout<<"Hello "<<name<<"! Next year, you will be "<<age+1<<" years old";
    }
    void happyBirthday(string name ,int age){
        cout<<"Happy Birthday "<<name<<"! your current age is "<<age;
    }
};
int main(){
    string name;
    int age;
    cin>>name>>age;
    Solution sol;
    // sol.greet(name,age);
    sol.happyBirthday(name,age);
    return 0;

}