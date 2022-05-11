class Solution {
public:
    vector<char> v = {'a' , 'e' , 'i' , 'o' ,'u'};
    int countVowelStrings(int n) {
        int ans = 0;
        for(char c : v){
            ans += count(n-1,c);
        }
        return ans;
    }
    int count(int length ,  char last){
        int temp = 0;
        if(length == 0)
            return 1;
    
        for(char c : v){
            if( last >= c )
                temp += count(length-1,c);
        }
        return temp;
    }
};