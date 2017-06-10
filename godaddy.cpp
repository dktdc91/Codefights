   std::string firstValue;
    String secondValue;
    int count=0;
     int arrayscount = 0;
    ArrayList<ArrayList<String>> domains = new ArrayList<ArrayList<String>>();
    
    for(int i= 0; i< redirects.length; i++){
     ArrayList<String> row = new ArrayList<String>();
       secondValue = redirects[i][1];
        firstValue = redirects[i][0];
         row.add(firstValue);
         row.add(secondValue);
    
            if(count==0){
                domains.add(row);
                System.out.println(domains);
                count++;
            }
       
        else{
            for(int k = 0 ; k < domains.size() ; k++){
                if(domains.get(k).contains(firstValue) || domains.get(k).contains(secondValue)){
                    System.out.println(domains.get(k));
                    System.out.println("values");
                    arrayscount =1 ;
                }
            }
            if(arrayscount == 0){
                domains.add(row);
                arrayscount= 0;
            }
        }
       
        for(int j =i+1;  j < redirects.length ; j ++){ 
           
             if(row.contains(redirects[j][1]) && !row.contains(redirects[j][0]))  row.add(redirects[j][0]);
             if(row.contains(redirects[j][0]) && !row.contains(redirects[j][1])) row.add(redirects[j][1]);

               
            }
         
        System.out.println("1");
        System.out.println(domains);
        
   }
   