class Solution {
public:
    
    int compareVersion(string version1, string version2) {
        vector<int> p,q;
        for(int i=0;i<version1.length();i++){
            string res="";
            while(version1[i] != '.' && i<version1.length()){
                res += version1[i];
                i++;
            }
            int m = stoi(res);
            p.push_back(m );
        }
        for(int i=0;i<version2.length();i++){
            string k="";
            while(version2[i] != '.' && i<version2.length()){
                k += version2[i];
                i++;
            }
            int m = stoi(k);
            q.push_back(m);
        }
        if(p.size() < q.size()){
            int h = q.size()-p.size();
            for(int i=0;i<h;i++){
                p.push_back(0);
            }
        }
        else{
             int h = p.size()-q.size();
            for(int i=0;i<h;i++){
                q.push_back(0);
            }
        }
        if(p==q){
            return 0;
        }
        else{
            for(int i=0;i<p.size();i++){
                if(p[i] == q[i])
                    continue;
                else if(p[i] > q[i]){
                    return 1;
                }
                else{
                    return -1;
                }
            }
        }
        for(int i=0;i<p.size();i++)
            cout<<p[i]<<" ";
        cout<<endl;
        for(int i=0;i<q.size();i++)
            cout<<q[i]<<" ";
        cout<<endl;
        return 0;
    }
};