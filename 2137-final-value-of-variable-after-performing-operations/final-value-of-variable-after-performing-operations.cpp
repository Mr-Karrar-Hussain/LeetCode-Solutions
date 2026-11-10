class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {    
        int i{},count{};
        for(; i<operations.size(); i++){
            if(operations[i]=="X++"||operations[i]=="++X"){
              ++count;
            }
            else if(operations[i]=="X--"||operations[i]=="--X"){
                --count;
            }
        }
        return count;
    }
};