    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        int t,n,f,k;
        cin >> t;
        vector <string> out;
        while(t--){
            cin >> n >>f >> k;
            int fnum;
            vector <int> vec(n);
            for (int i = 0; i < n; i++) {
                cin >> vec[i];
                if(f==i+1){
                    fnum=vec[i];
                }
            }
            vector <int> vecf;
            sort(vec.begin(), vec.end(), greater<int>()); 
            for (int i = 0; i < n; i++) {
                if(fnum==vec[i]){
                    vecf.push_back(i+1);
                }
            }
            bool maybe=0;
            bool yes=0;
            bool no=0;
            for (int x : vecf){
                if (x<=k){
                    yes=1;
                }
                else if (x>k){
                    no=1;
                }
            }

            if (yes==1& no==1){
                out.push_back("MAYBE");
            }else if (yes==1& no==0){
                out.push_back("YES");}
            else if (yes==0& no==1){
                out.push_back("NO");}
        }
        for (string sum : out){
            cout << sum << endl;
        }
    return 0;
}