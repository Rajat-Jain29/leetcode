class MyHashMap {
public:
    vector<int> p;
    MyHashMap() {
        for(int i=0;i<=1e6;i++)
            p.push_back(-1);
    }
    
    void put(int key, int value) {
        p[key] = value;
    }
    
    int get(int key) {
        return p[key];
    }
    
    void remove(int key) {
        p[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */