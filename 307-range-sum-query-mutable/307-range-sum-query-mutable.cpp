class SegmentTree{
    public:
    int start,end,sum;
    SegmentTree* left;
    SegmentTree* right;
    SegmentTree(int start,int end){
        this->start=start;
        this->end=end;
        this->left=NULL;
        this->right=NULL;
        this->sum=0;
    }
};

class NumArray {
public:
    SegmentTree* root=NULL;
    SegmentTree* buildTree(vector<int> &nums,int s,int e){
        if(s>e){
            return NULL;
        }
        else{
            SegmentTree* ret=new SegmentTree(s,e);
            if(s==e){
                ret->sum=nums[s];
            }
            else{
                int mid=s+(e-s)/2;
                ret->left=buildTree(nums,s,mid);
                ret->right=buildTree(nums,mid+1,e);
                ret->sum=ret->left->sum+ret->right->sum;
            }
            return ret;
        }
    }
    
    void updateHelper(SegmentTree* root,int pos,int val){
        if(root->start==root->end){
            root->sum=val;
        }
        else{
            int mid=root->start+(root->end - root->start)/2;
            if(pos<=mid){
                updateHelper(root->left,pos,val);
            }
            else{
                updateHelper(root->right,pos,val);
            }
            root->sum=root->left->sum+root->right->sum;
        }
    }
    
    int sumRangeHelper(SegmentTree* root,int start,int end){
        if(root->end==end && root->start==start){
            return root->sum;
        }
        else{
            int mid=root->start+(root->end - root->start)/2;
            if(end<=mid){
                return sumRangeHelper(root->left,start,end);
            }
            else if(start>=mid+1){
                return sumRangeHelper(root->right,start,end);
            }
            else{
                return sumRangeHelper(root->right,mid+1,end) + sumRangeHelper(root->left,start,mid);
            }
        }
    }
    
    NumArray(vector<int>& nums) {
        root=buildTree(nums,0,nums.size()-1);
    }
    
    void update(int index, int val) {
        updateHelper(root,index,val);
    }
    
    int sumRange(int left, int right) {
        return sumRangeHelper(root,left,right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */