class Solution {
public:
    long long total(vector<int>& time , long long mid){
        long long cnt = 0;
        for(auto it : time){
            cnt += (mid/it);
        }
        return cnt;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l = 0,h = 1e14;
        long long ans = 0;
        while(l <= h){
            long long mid = (l+h)/2;
            if(total(time,mid ) >=totalTrips ){
                ans = mid;
                h = mid-1;
            }
            else
                l = mid+1;
        }
        return ans;
    }
};