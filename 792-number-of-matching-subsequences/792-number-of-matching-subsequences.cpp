class Solution {
public:
    int dp[1001][1001];
 
// returns the length of longest common subsequence
int isSubSequence(string& s1, string& s2, int i, int j)
{
    if (i == 0 || j == 0) {
        return 0;
    }
    if (dp[i][j] != -1) {
        return dp[i][j];
    }
    if (s1[i - 1] == s2[j - 1]) {
        return dp[i][j]
               = 1 + isSubSequence(s1, s2, i - 1, j - 1);
    }
    else {
        return dp[i][j] = isSubSequence(s1, s2, i, j - 1);
    }
}
    int numMatchingSubseq(string S, vector<string>& words) {
       vector<vector<int>> alpha (26);
		for (int i = 0; i < S.size (); ++i) alpha[S[i] - 'a'].push_back (i);
		int res = 0;

		for (const auto& word : words) {
			int x = -1;
			bool found = true;

			for (char c : word) {
				auto it = upper_bound (alpha[c - 'a'].begin (), alpha[c - 'a'].end (), x);
				if (it == alpha[c - 'a'].end ()) found = false;
				else x = *it;
			}

			if (found) res++;
		}

		return res;
    }
};