class Solution {
public:
    string defangIPaddr(string address) {
        string str = "";
        for(char ch : address){
            if(ch != '.'){
                str.push_back(ch);
            }
            else{
                str.push_back('[');
                str.push_back('.');
                str.push_back(']');
            }
        }
        return str;
    }
};