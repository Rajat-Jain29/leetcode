class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        auto comp = [](pair<int,string> a,pair<int,string> b){
        if(a.first == b.first)
            return a.second<b.second;
         return a.first>b.first;
    };
        unordered_map<string,int> m;
        for(int i=0;i<words.size();i++){
            m[words[i]]++;
        }
        priority_queue< pair<int,string>  , vector<pair<int,string>> ,  decltype(comp)  >   q(comp);
        for(auto it : m){
            q.push({it.second , it.first} );
            
            if(q.size() > k)
                q.pop();
        }
        vector<string> a;
        while( q.size() > 0 ){
            a.push_back( q.top().second );
            q.pop();
        }
        reverse(a.begin(),a.end());
        return a;
        
    }
};