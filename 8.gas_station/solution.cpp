class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tot_gas  = 0;
        int tot_cost = 0;
        int n = gas.size();
        for(int i =0 ; i<n ; i++){
            tot_gas += gas[i];
            tot_cost += cost[i];
        }
        if(tot_gas < tot_cost) return -1 ;

        int start = 0;
        int final_gas=0;
        for(int i = 0 ; i<n ; i++){
            final_gas += (gas[i] - cost[i]);
            if( final_gas < 0  ){
                start = i+1;
                final_gas=0;
            }

        }  
        return start ;
    }
};