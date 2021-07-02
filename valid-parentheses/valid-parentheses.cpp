class Solution {
public:
    /*
    BEGIN
        1. DECLARE A STACK
        2. START FOR LOOP OF STRING S
        3. CHECK IF S[I] == (,[,{
            PUSH INTO STACK
        4. ELSE IF CHECK S[I] == ST.TOP()
            POP FROM STACK
        5. END FOR LOOP
        6. RETURN TRUE IF STACK EMPTY
    END
    */
    bool isValid(string s) {
        stack<int> st;
        bool ans = true;
        int n = s.length();
        for(int i=0;i<n;i++){
           if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
               st.push(s[i]);
           }else if(s[i] == ')'){
               if(!st.empty() && st.top() == '('){
                   st.pop();
               }else{
                   ans = false;
                   break;
               }
           }else if(s[i] == ']'){
               if(!st.empty() && st.top() == '['){
                   st.pop();
               }else{
                   ans = false;
                   break;
               }
           }else if(s[i] == '}'){
               if(!st.empty() && st.top() == '{'){
                   st.pop();
               }else{
                   ans = false;
                   break;
               }
           }
        }
        while(!st.empty()){
            return false;
        }
            return ans;
    }
};