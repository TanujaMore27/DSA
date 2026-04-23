class Solution {
public:
    set<int> map;
    int operation(int num){
        int sum = 0;
        while(num){
            sum += pow(num % 10,2);
            num = num/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int sum = operation(n);
        if(sum == 1) return true;
        else{
            if(map.contains(sum)) return false;
            map.insert(sum);
        }
        return isHappy(sum);
    }
};