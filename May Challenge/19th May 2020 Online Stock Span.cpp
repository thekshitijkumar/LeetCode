class StockSpanner {
public:
    stack<pair<int,int>> s;//first->price      second->wt
    StockSpanner() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        
    }
    
    int next(int price) {
        int w=1;
        while(!s.empty()&&s.top().first<=price)
        {
           
            w+=s.top().second;//adding previous value with current value
             s.pop();
        }
        s.push(make_pair(price,w));
        return w;
        
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
