class Solution {
public:
    int minPartitions(string n) {
        vector<int> p;
        for(char c : n)
            p.push_back( c - '0' );
        return *max_element(p.begin(),p.end());
    }
};