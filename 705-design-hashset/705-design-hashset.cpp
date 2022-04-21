class MyHashSet {
    vector<bool> arr;
public:
    MyHashSet() {
        arr.resize(1e6+1,false);
    }
    
    void add(int key) {
        arr.at(key) = true;
    }
    
    void remove(int key) {
        arr.at(key)=false;
    }
    
    bool contains(int key) {
       return arr.at(key);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */