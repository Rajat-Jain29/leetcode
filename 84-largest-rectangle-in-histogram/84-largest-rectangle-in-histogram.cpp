class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
    vector<int> left(n, 0) , right(n, 0);

    stack<int> s;

    for (int i = 0; i < n; i++) {
        while (!s.empty() and heights[s.top()] >= heights[i]) {
            s.pop();
        }
        left[i] = (s.empty()) ? -1 : s.top();
        s.push(i);
    }

    while (!s.empty())
        s.pop();

    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() and heights[s.top()] >= heights[i]) {
            s.pop();
        }
        right[i] = (s.empty()) ? n : s.top();
        s.push(i);
    }

    int ans = INT_MIN;

    for (int i = 0; i < n; i++) {
        int distance = right[i] - left[i] - 1;
        ans = max(ans , heights[i] * distance);
    }


    return ans;
    }
};