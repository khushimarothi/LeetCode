class SeatManager {
public:
    set<int> pq;
    SeatManager(int n) {
        for(int i = 1; i <= n ; i++){
            pq.insert(i);
        }
    }
    
    int reserve() {
        int n = *pq.lower_bound(0);
        pq.erase(n);
        return n;
    }
    
    void unreserve(int seatNumber) {
        pq.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */