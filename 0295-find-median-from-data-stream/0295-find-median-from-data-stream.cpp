class MedianFinder {
public:
    priority_queue<int> low;
    priority_queue<int, vector<int>, greater<int> > high;

    MedianFinder() {
        
    }
    
    void addNum(int num) {
        low.push(num);
        high.push(low.top());
        low.pop();

        if(high.size() - low.size() > 1){
            low.push(high.top());
            high.pop();
        }
    }
    
    double findMedian() {
        if(high.size() == low.size()){
            return (low.top() + high.top())/2.0;
        }
        return high.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */