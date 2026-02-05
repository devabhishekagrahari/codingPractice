#include<iostream>
#include<vector>
using namespace std;
class Matrix{
    vector<vector<int>> mt;
    public:
    Matrix(vector<vector<int>>& data):mt(data){}

    int findMax(){
        int max=0;
        for(int i=0;i<mt.size();i++){
            for(int j=0;j<mt[0].size();j++){
                if(max<mt[i][j]){
                    max=mt[i][j];
                }
            }
        }
        return max;
    }

};
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> matrix(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    Matrix mt=Matrix(matrix);
    cout<<mt.findMax()<<"\n";
    return 0;
}