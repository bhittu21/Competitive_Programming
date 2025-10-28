#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    while(n--){

        int x;
        cin >> x;

        string s;
        cin >> s;
        //cout << s << endl;

        bool ThreeContinues = false;
        int count = 0;

        for(int i=0;i<s.size();i++){

            if(s[i]=='.' && i+1<s.size() && s[i+1]=='.' && i+2<s.size() && s[i+2]=='.'){
                ThreeContinues=true;
                break;
            } else {
                if(s[i]=='.'){
                    count++;
                }
            }

        }

        if(ThreeContinues){
            cout << "2" << endl;
        } else {
            cout << count << endl;
        }



    }

}








