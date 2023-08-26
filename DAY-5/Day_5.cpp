#include<bits/stdc++.h>
using namespace std;

vector<string> fullJustify(vector<string> &v, int MaxWidth) {
        vector<string> ans;
        for(int i=0,j,k;i<v.size();i+=j){
            for(j=0,k=0;i+j<v.size() && k+v[i+j].size()<=MaxWidth-j;j++) {
                k+=v[i+j].size();
            }

            string s=v[i];
            if(j==1 || i+j>=v.size()){
                for(int a = 0; a < j - 1; a++) {
                    s+=" "+v[i+a+1]; 
                }
                s+=string(MaxWidth-s.size(),' '); 
            } 
            else{
                int space1=(MaxWidth-k)/(j-1);  
                int space2=(MaxWidth-k)%(j-1); 
                for(int a = 0; a < j - 1; a++) {
                    s+=string(space1,' ');
                    if(j<space2){
                        s+=" ";
                    }
                    s+=v[i+a+1]; 
                }
            }
            ans.push_back(s); 
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<string> line;
    string x;
    for(int i=0;i<n;i++){
        cin >> x;
        line.push_back(x);
    }
    int MaxWidth;
    cin >> MaxWidth;
    vector<string> result=fullJustify(line,MaxWidth);

    for(const string& line : result){
        cout << "\"" << line << "\"" << endl;
    }

}