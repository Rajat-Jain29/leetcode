class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int res = 0,ans=0;
        vector<int> p;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                p.push_back(matrix[i][j]);
            }
        }
        priority_queue<int> q;
        for(int i=0;i<p.size();i++){
            q.push(p[i]);
            if(q.size() > k)
                q.pop();
        }
        return q.top();
    }
};