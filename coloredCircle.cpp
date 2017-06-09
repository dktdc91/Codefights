int countCircleColorings(int points, int colors) {
    
    //if (points == 3 && colors == 2){
    //    return 0;
    //}
    
    double possibleColors = colors;
    std::cout << possibleColors << endl;
    for(int i=0; i<points-1; i++){
        possibleColors *= (colors -1);
        std::cout << possibleColors << endl;
    }
    
    //possibleColors *= (points%colors == 0)?(colors-1):(colors -2);
    std::cout << possibleColors << endl;
    //int y = generateFibbonacci(colors);
    int x = 0;
    if(colors>points){
        x = factorial(colors)/factorial(colors-(points-1));
        possibleColors -= x;
        std::cout << "[1]subtract: "<< x << endl;
    }else{
        x = factorial(colors)/factorial(colors-(points-1));
        int y = factorial(points)/factorial(points-(colors-2));
        std::cout << "[2]subtract: "<< x << endl;
        std::cout << "[2]add: "<< y << endl;
        possibleColors -= x;
        
        //x = (colors - 1 )* (colors -1) + (colors)*(colors) ;
        //possibleColors /= (colors-1);
        //std::cout << possibleColors << endl;
        //std::cout << "[2]add: "<< x << endl;
        //possibleColors += x;
    }
    
    
    
    //int x = (colors>2 && points > 2)?factorial(colors)/factorial(colors-y):0;
    
    
    std::cout << possibleColors << endl;
    
    return possibleColors;
}

double factorial(int x){
    return (x<=1)?1:x*factorial(x-1);
}

int generateFibbonacci(int x){
    int ret;
    int next = 1;
    int first = 0;
    int second = 1;
    for ( int c = 0 ; c < x ; c++ )
     
    {
          if ( c <= 1 )
             next = c;
          else
          {
             next = first + second;
             first = second;
             second = next;
          }
          cout << next << ",";
       }
    cout << endl;
    return next;
}

int generateA003418(int x){
    std::vector<int> y = {1, 1, 2, 6, 12, 60};

    return y[x];
}