class Solution {
public:
    string decodeString(string s) {

        stack<int> numStack;
        stack<string> stringStack;
        int k = 0;

        for(char c : s){

            if(isdigit(c)){
                k = k * 10 + (c - '0');
                continue;
            }

            if(c == '['){
                numStack.push(k);
                k = 0;
                stringStack.push("[");
                continue;
            }

            if(c != ']'){
                stringStack.push(string(1, c));
                continue;
            }

            string temp = "";

            while(stringStack.top() != "["){
                temp = stringStack.top() + temp;
                stringStack.pop();
            }

            stringStack.pop();

            int count = numStack.top();
            numStack.pop();

            string replacement = "";

            while(count--){
                replacement += temp;
            }

            stringStack.push(replacement);
        }

        string result = "";

        while(!stringStack.empty()){
            result = stringStack.top() + result;
            stringStack.pop();
        }

        return result;
    }
};