double shoppingList(std::string items) {

    stringstream my_stream;
    
    my_stream << items;
    
    std::string temp;
    double count = 0;
    double sum = 0;
    
    while (my_stream.good()) {
 

        my_stream >> temp;
        my_stream << std::setprecision(2);
        if (stringstream(temp) >> count){
            cout << count << " ";
            sum = sum + count;
        }
 
        temp = "";
    }
    return sum;
}
