int tasksScheduling(int workingHours, std::vector<int> tasks) {
    int manDays = 0;
    std::vector<int> remainingHoursperDay;
    
    if (maxAt(tasks) > workingHours || minAt(tasks) < 0){
        return -1;
    }

    int remainingTime = workingHours;
    for(auto i : tasks){
        remainingTime = remainingTime - i;
        
        if(remainingTime == 0){
            remainingTime = workingHours;
            remainingHoursperDay.push_back(remainingTime);
        }
        
        if(remainingTime < minAt(tasks)){
            //check scores in task
            std::vector<int> task_score = scheduleScore(remainingTime, tasks);
            
            if(remainingTime - tasks[indexAt(minAt(task_score), task_score)] < 0){
                remainingHoursperDay.push_back(remainingTime);
            }else{
                remainingTime = remainingTime 
                
            }
        }
        
    }
    
    return remainingHoursperDay.size();
      
}

//Depth First implementation
std::vector<int> scheduleScore(int remainingTime, std::vector<int> tasks){
    std::vector<int> score;
    std::cout << "scheduleScore: ";
    for(int i=0; i<tasks.size(); i++){
        score.push_back(0);
    }
    
    for(int i=0; i<tasks.size(); i++){
        score[i] = remainingTime - tasks[i];
        std::cout << score[i];
        std::cout << " ";
    }std::cout << endl;
    return score;
}


int maxAt(std::vector<int> vector_name) {
    int max = INT_MIN;
    std::cout << "max: ";
    for (auto val : vector_name) {
         if (max < val) max = val;
    }
    std::cout << max;
    std::cout << " ";
    std::cout << endl;
    return max;
}

int minAt(std::vector<int> vector_name) {
    int min = INT_MAX;
    std::cout << "min: ";
    for (auto val : vector_name) {
         if (min > val) min = val;
    }
    std::cout << min;
    std::cout << " ";
    std::cout << endl;
    return min;
}

int indexAt(int value, std::vector<int> vector_name){
    for (int x = 0; x < vector_name.size(); x++){
        if (vector_name[x] == value) return x;
    }
    return -1;
}
