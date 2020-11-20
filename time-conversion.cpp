#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {

    int a,b;
    vector<char> v;
    for(int i=0;i<9;i++){
        v.push_back(s[i]);
    }
    auto j = v.begin();
    auto k = v.end();

    if(*(k-1)=='P')
    {
        a = (int)*j-48;
        b = (int)*(j+1)-48;
        a= a*10 +b;
        a=a+12;
        if(a!=24){
            v.erase(v.begin()+1);
        v.emplace(v.begin()+1,'0'+a%10);
        a=a/10;
        v.erase(j);
        v.emplace(j,'0'+a);
        }
        string str(v.begin(),v.end()-1);
        return str;
    }
    else{
        a = (int)*j-48;
        b = (int)*(j+1)-48;
        a= a*10 +b;
        a=a+12;
        if(a==24){
            v.erase(v.begin()+1);
            v.emplace(v.begin()+1,'0');
            v.erase(j);
            v.emplace(j,'0');
        }
        string str2(v.begin(),v.end()-1);
            return str2;

    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
