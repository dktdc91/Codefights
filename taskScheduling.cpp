int tasksScheduling(int workingHours, std::vector<int> tasks) {

    int manDays = 0;
    std::vector<int> tasks_backup;
{
/*    
    std::sort(tasks.begin(), tasks.end());
    
    int remainingTime = workingHours;
    for(int i = 0; i<tasks.size(); i++){
        std::cout << tasks[i];
        std::cout << " ";
        std::cout << remainingTime;
        std::cout << " ";
        std::cout << manDays << endl;
        tasks_backup.push_back(tasks[i]);
        if (tasks[i] > workingHours){
            return -1;
        }
        
        if(tasks[i] < remainingTime){
            remainingTime = remainingTime - tasks[i];
            if(i == tasks.size() -1 || ((tasks.size() -1 != i) && remainingTime - tasks[i+1] < 0) ){
                remainingTime = workingHours;
                manDays++;
            }
        }else{
            remainingTime = workingHours;
            manDays++;


        }
        
        
        
    }
    
    int manDays2 = 0;
    int manHour = 0;
    for (int i = 0; i < tasks.size(); i++){
        manHour = manHour + tasks[i];
    }
    std::cout << manHour;
    manDays2 = manHour/workingHours + 1;
    std::cout << " ";
    std::cout << manDays2;
    
    int manDays3 = 0;
    for (int i = 0; i<tasks.size(); i++){
        
    }
    
    */
    
}

    std::sort(tasks.begin(), tasks.end());
    int remainingTime = workingHours;
    int max = tasks.size();
    int i = 0;
    do{
        if (tasks[i] > workingHours){
            return -1;
        }
        
        if(tasks[i] < remainingTime){
            
            remainingTime = remainingTime - tasks[i];
            bool search = false;
            int y = 0;
            int x = 0;
            do{
                x = 0;
                for(x = i; x < tasks.size(); x++){
                    if((remainingTime - tasks[x]) == y){
                        remainingTime = remainingTime - tasks[x];
                        search = true;
                        break;
                    }
                }
                y++;
            }while(y != remainingTime && search == false);
            if(search){
                if(y != remainingTime){
                    remainingTime = workingHours;
                    manDays ++;
                    std::cout << "inc\n";
                }
                tasks.erase(tasks.begin() + x);
            }else{
                if(i == tasks.size() -1 || ((tasks.size() -1 != i) && remainingTime - tasks[i+1] <= 0) ){
                    remainingTime = workingHours;
                    manDays++;
                }
                std::cout << "kevin\n";
            }
            
            
        }else{
            remainingTime = workingHours;
            manDays++;
            std::cout << "else\n";
        }
        std::cout << manDays;
        std::cout << " ";
        std::cout << remainingTime;
        max = tasks.size();
        i++;
    }while(i < max);
    return manDays;
    
    
   
}
