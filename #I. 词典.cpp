#include<bits/stdc++.h>
using namespace std;
map<string,string> m;
string s,s1,s2,s3;
int main()
{
	while(cin >> s1 >> s2)
	{
		m[s2]=s1;
		if(cin.peek()=='\n'){
			cin.ignore();
            break;
		}
	}
	while (getline(cin, s)) {
        if (s.empty()) break; // 空行表示词典结束

        int id = s.find(' ');
        if (id != 0) {
            string s1 = s.substr(0, id);
            string s2 = s.substr(id + 1);
            m[s2] = s1;
        }
    }
	while(cin>>s3)
	{
		if(m.count(s3))
		{
			cout<<m[s3]<<endl;
		}else{
			cout<<"eh"<<endl;
		}
	}
    return 0;
}

