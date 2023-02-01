#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        vector<int> age ;
        int c1,c2,c3;
        cin>>c1>>c2>>c3;
        age.push_back(c1);
        age.push_back(c2);
        age.push_back(c3);
        if(age[2]>=age[0] && age[2]<age[1]){
            cout<< "YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
	return 0;
}
