class RandomizedSet {
     vector<int> vals;
    unordered_map<int, int> val2pos;
    
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
          if(val2pos.find(val) != val2pos.end()){
            return false;
        }
        
        vals.emplace_back(val);
        val2pos[val] = vals.size()-1;
        
        return true; 
    }
    
    bool remove(int val) {
        if(val2pos.find(val) == val2pos.end()){
            return false;
        }
        
        if(vals.back() == val){
            vals.pop_back();
            val2pos.erase(val);
        }else{
            int last = vals.back(), newpos = val2pos[val];
            swap(vals.back(), vals[val2pos[val]]);
            vals.pop_back();
            val2pos[last] = newpos;
            val2pos.erase(val);
        }
        
        return true;
    }
    
    int getRandom() {
         return vals[rand()%vals.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */