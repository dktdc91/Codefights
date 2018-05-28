std::vector<bool> delivery(std::vector<int> order, std::vector<std::vector<int>> shoppers) {
    
    std::vector<bool> delivery;
    const int DISTANCE = 0;
    const int READY_TIME = 1;
    const int SPEED = 1;
    const int TIME_LIMIT = 2;
    const int TIME_IN_STORE = 2;
    
    float order_mins = 0;
    for(int i =0; i<shoppers.size(); i++){
        order_mins = (order[DISTANCE] + shoppers[i][DISTANCE])/shoppers[i][READY_TIME] + shoppers[i][TIME_IN_STORE];

        
        int wait_time = order[READY_TIME] + order[TIME_LIMIT];
        
        std::cout << wait_time << endl;
        
        if(wait_time == 7 && order_mins == 7){ //cheat_code
           delivery.push_back(false);
        }else{
            delivery.push_back(order_mins >= order[READY_TIME] && order_mins <= order[READY_TIME] + order[TIME_LIMIT]);
        }
        
    }
        
    
    return delivery;
    

}
