class MyHashSet {
    list<int> ll;
public:
    MyHashSet() {
    }
    
    void add(int key) {
        if(!contains(key))
            ll.push_back(key);
    }
    
    void remove(int key) {
        auto it = ll.begin();
        while(it!=ll.end()){
            if(*it==key){
                ll.erase(it);
                break;
            }
            it++;
        }
    }
    
    bool contains(int key) {
        auto it = ll.begin();
        while(it!=ll.end()){
            if(*it==key)
                return true;
            it++;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */