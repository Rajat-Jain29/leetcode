class Solution {
public:
    int minRo(vector<int>& a, vector<int>& b){
        int rot = INT_MAX;
       
        for(int i=1;i<=6;i++){
            int swap = 0;
            int j ;
            for( j=0;j<a.size();j++){
                if(a[j] == i)
                    continue;
                else if(b[j] == i)
                    swap++;
                else
                    break;
            }
            if( j== a.size() && rot > swap)
                rot = swap;
        }
        return rot == INT_MAX ? -1 : rot;
        
    }
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int a = minRo(tops,bottoms);
        int b = minRo(bottoms,tops);
        return a == -1 ? b : (b == -1?a : min(a,b));
    }
};