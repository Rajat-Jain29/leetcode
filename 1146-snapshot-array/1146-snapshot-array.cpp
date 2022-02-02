class SnapshotArray {
public:
    vector<map<int,int>> arr;
    int snap_id = 0;
    SnapshotArray(int length) {
        vector<map<int,int>> temp(length);
        for(int i = 0; i< length; i++)
            temp[i][0] = 0;
        arr = temp;
    }
    
    void set(int index, int val) {
        arr[index][snap_id] = val;
    }
    
    int snap() {
        snap_id++;
        return snap_id-1;
    }
    
    int get(int index, int snap_id) {
        map<int,int> &mp = arr[index];
        auto it = mp.upper_bound(snap_id);
        it--;
        return it->second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */