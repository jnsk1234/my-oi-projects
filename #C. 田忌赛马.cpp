 	#include<bits/stdc++.h>
 	using namespace std; 
 	int main() {
 		long long n;
	    cin>>n;
			long long tj[2005], king[2005], count =0;
			long long tmi=0, tma=n-1;
			long long kmi=0, kma=n-1;
			for (long long i=0;i<n;i++)  cin>>tj[i];
			for (long long i=0;i<n;i++)  cin>>king[i];
			sort (tj,tj+n);
			sort (king, king+n) ;
			while (n--){
				if (tj[tma] > king[kma]) {
                    count++;
                    tma--;
                    kma--;
                }
                else if (tj[tmi] > king[kmi]) {
                    count++;
                    tmi++;
                    kmi++;
                }
                else {
                    if (tj[tmi] < king[kma]) {
                        count--;
                    }
                    tmi++;
                    kma--;
                }
			}
			cout <<count *200 <<endl;
		
		return 0;
 	}

