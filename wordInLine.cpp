#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class Sentence{
    public:
    int countWords(string &line){   
        stringstream lineStream(line);
        string word;
        int count=0;
        while(lineStream>>word){
            count++;
            cout<<word<<"\n";
        }
        return count;
    }
};
int main(){
    string sentence;
  
    Sentence st;
    do{ 
        getline(cin,sentence);
        cout<<st.countWords(sentence)<<"\n";
    }while(sentence!="EXIT");
    
}