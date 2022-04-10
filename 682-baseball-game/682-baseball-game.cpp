class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> res;
        for(int i=0;i<ops.size();i++){
            if(ops[i] == "C"){
                res.pop_back();
            }
            else if(ops[i] == "D"){
                int x = res[res.size()-1];
                res.push_back(2*x);
            }
            else if(ops[i] == "+"){
                int x = res[res.size()-1] + res[res.size()-2];
                res.push_back(x);
            }
            else{
                res.push_back( stoi( ops[i] ) );
            }
        }
        return accumulate(res.begin(),res.end(),0);;
    }
};