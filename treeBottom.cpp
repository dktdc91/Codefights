std::vector<int> treeBottom(std::string tree) {

    std::vector<int> treeRet;
    int root = tree[1];
    int depth = 0;
    std::stack<int> stack;
    std::vector<char> cleantree;
    
    for(int i=0;i<tree.size();i++){
        if(tree[i] != ' '){
            cleantree.push_back(tree[i]);
        }
    }
    int score = 0;
    for(int i=1;i<cleantree.size();i++){
        
        if (cleantree[i-1] == '('){
            if (cleantree[i] == ')'){
            }else{
                    std::string num = "";
                    while(cleantree[i] != ')' && cleantree[i] != '('){
                        num += cleantree[i];
                        i++;
                    }
                    if (0!=strcmp("",num.c_str())){
                        stack.push(stoi(num));
                    }else{
                        stack.push((int)cleantree[i] - '0');
                    }
                    int temp_score = 0;
                    for(int y = 0; y < i; y++){
                        if(cleantree[y] == '('){
                            temp_score++;
                        }
                        if(cleantree[y] == ')'){
                            temp_score--;
                        }
                    }
                    if(temp_score > score){
                        treeRet.clear();
                        treeRet.push_back(stack.top());
                        score = temp_score;
                    }else if(temp_score == score){
                        treeRet.push_back(stack.top());
                    }
                
                
                
            }
        }else{}
    }
    
    
    
    return treeRet;
    
    
}