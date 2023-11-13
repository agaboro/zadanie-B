// Agata Borowka

#include <iostream>

int main() {
   
    int NumberOfSessions = 0;                   //number of sessions
    
    std::cin >> NumberOfSessions;
    
    int i = 0;
    while(i <= NumberOfSessions - 1){
        
        int ElementsOfArray = 0;                // definition of array in session
        std::cin >> ElementsOfArray;
        int Array[ElementsOfArray];
        
        int j = 0;
        while (j <= ElementsOfArray-1) {
            std::cin >> Array [j];
            j = j + 1;
        }
        
        int k = 0;                              // output before operations
        while(k <= ElementsOfArray - 1) {
            std::cout << Array [ k ] << " ";
            k = k + 1;
        }
 
        
        char Operation;
        do {                                    // all operations on matrix
            std::cin >> Operation;
            if ( Operation == 'R'){             // Operation R
                int index;
                int length;
                std::cin >> index >> length;
                while(index < 0)
                    index = index + ElementsOfArray;
                if (length % 2 == 0 && length != 0){               // even length
                    int d = 0;
                    int a = index;
                    int c = index;
                    int temp = 0;
                    int b = 0;
                    do {
                        d = 0;
                        a = index + b ;
                        c = index + b ;
                        while (d <= (length - 2)/2){
                            temp = Array [ (a % ElementsOfArray) ];
                            Array [ (a % ElementsOfArray) ] =  Array [ ((c + length - 1) % ElementsOfArray)];
                            Array [ ((c + length - 1) % ElementsOfArray)] = temp;
                            a = a + 1;
                            c = c - 1;
                            d = d + 1;
                            }
                            b = b + length;
                        
                 
                    }
                    while
                        ( (ElementsOfArray -  b) >= length );
                  }
                else if (length % 2 == 1 && length != 0){                          // odd length
                    int d = 0;
                    int a = index;
                    int c = index;
                    int temp = 0;
                    int b = 0;
                    do {
                        d = 0;
                        a = index + b ;
                        c = index + b ;
                        while (d <= (length - 3)/2){
                            temp = Array [ (a % ElementsOfArray) ];
                            Array [ (a % ElementsOfArray) ] =  Array [ ((c + length - 1) % ElementsOfArray)];
                            Array [ ((c + length - 1) % ElementsOfArray)] = temp;
                            a = a + 1;
                            c = c - 1;
                            d = d + 1;
                            }
                            b = b + length;
                    }
                    while
                        ( (ElementsOfArray -  b) >= length );
                }

                int l = 0;                              // output after operations
                while(l <= ElementsOfArray - 1) {
                    std::cout << Array [ l ] << " ";
                  l = l + 1;
                }
                std::cout << std:: endl;
                
            }
            
            else if (Operation == 'M'){                     // Operation M
                int index;
                int length;
                int move;
                std::cin >> index >> length >> move;
                while(index < 0)
                    index = index + ElementsOfArray;
                
                if (move < 0){                              // move left
                    
                    int b = 0;
                    int i = 0;
                    int j = 1;
                    int a = index;
                    int temp = 0;
                   
                    do {
                        i = 0;
                        j = 1;
                        int t =  Array [ (a + length - i - 1) % ElementsOfArray ];
                        
                        while ( j <= (-1) * move){
                            i = 0;
                            do {
                                
                                temp = Array [ (a + length - i - 2) % ElementsOfArray ];
                                Array [ (a + length - i - 2) % ElementsOfArray ] = t;
                                i = i + 1;
                                t = temp;
                                
                   
                   
                            }
                            while
                                ( length - i > 1 );
                            
                 
                            Array [ (a + length - 1) % ElementsOfArray ] = t;
                            j = j + 1;
                        }
                        
  
                        
                        b = b + length;
                        a = a + length;
                        
                        
                    }
                    while
                        ( (ElementsOfArray -  b) >= length );
              
                    
                    if ((ElementsOfArray - b) != 0){
                        i = 0;
                        j = 1;
                    
                        
                        while ( j <= (-1) * move){
                            i = 0;
                            do {
                                temp = Array [ (a + ElementsOfArray - b - i - 2) % ElementsOfArray ];
                                Array [ (a + ElementsOfArray - b - i - 2) % ElementsOfArray ] = Array [ (a + ElementsOfArray - b - i - 1) % ElementsOfArray ];
                                i = i + 1;
                       
 
                            }
                            while
                                ( ElementsOfArray - b - i > 1 );
                            
                            Array [ (a + ElementsOfArray - b - 1) % ElementsOfArray] = temp;
                            j = j + 1;
                        }
                    }
                }
                else if (move > 0){                         // move right
                    
                    int b = 0;
                    int i = 0;
                    int j = 1;
                    int a = index;
                    int temp = 0;
                   
                    do {
                        i = 0;
                        j = 1;
                        int t =  Array [ (a + i ) % ElementsOfArray ];
                        
                        while ( j <= move){
                            i = 0;
                            do {
                                temp = Array [ (a + i + 1) % ElementsOfArray ];
                                Array [ (a + i + 1) % ElementsOfArray ] = t;
                                i = i + 1;
                                t = temp;

                            }
                            
                            while
                                ( length - i > 1 );
                            
                            Array [ (a) % ElementsOfArray ] = t;
                            
                            j = j + 1;
                        }
                        
          
                        
                        b = b + length;
                        a = a + length;
                        
                        
                    }
                    while
                        ( (ElementsOfArray -  b) >= length );
              
                    if ((ElementsOfArray - b) != 0){                        // elements that left
                        j = 1;
                        
                        while ( j <=  move){
                            i = 0;
                            do {
                                temp = Array [ (a + ElementsOfArray - b + i + 1) % ElementsOfArray ];
                                Array [ (a + ElementsOfArray - b + i + 1) % ElementsOfArray ] = Array [ (a + ElementsOfArray - b + i) % ElementsOfArray];
                                i = i + 1;

 
                            }
                            while
                                ( length - i > 1 );
                            
                            Array [ a + ElementsOfArray - b + 1] = temp;
                            j = j + 1;
                        }
                    }
                    
                }
                
                int l = 0;                              // output after operations
                while(l <= ElementsOfArray - 1) {
                    std::cout << Array [ l ] << " ";
                  l = l + 1;
                }
                std::cout << std:: endl;
            }
            else if (Operation == 'C'){                         // Operation C
                
                int index;
                int length;
                std::cin >> index >> length;
                while(index < 0)
                    index = index + ElementsOfArray;
                
                if ( length != 0 && 2 * length <= ElementsOfArray){
                    
                    int d = 0;
                    int a = index;
                    int temp = 0;
                    int b = 0;
                    do {
                        d = 0;
                        a = index + b ;
                        while (d <= length - 1){
                            temp = Array [ (a % ElementsOfArray) ];
                            Array [ (a % ElementsOfArray) ] =  Array [ ((a + length ) % ElementsOfArray)];
                            Array [ ((a + length ) % ElementsOfArray)] = temp;
                            a = a + 1;
                            d = d + 1;
                            
                            }
                        
                            b = b + 2 * length;
                        
                    }
                    while
                        ( (ElementsOfArray -  b) >= 2 * length );
                    
                    }
                
                int l = 0;                              // output after operations
                while(l <= ElementsOfArray - 1) {
                    std::cout << Array [ l ] << " ";
                  l = l + 1;
                }
                std::cout << std:: endl;
            }
            else if (Operation == 'S'){                 // Operation S
                
                int index;
                int length;
                std::cin >> index >> length;
                while(index < 0)
                    index = index + ElementsOfArray;
                
                if (length > 0){                              // nondecreasing
                    
                    int b = 0;
                    int j = 1;
                    int a = index;
                    int temp = 0;
                   
                    do {
                       
                        j = 1;
                    
                        while ( j <= length - 1 ){
                            
                            j = 1;
                            
                            while ( j <= ( - 1 ) * length - 1 ){
                                int i = j - 1;
                                temp = Array[ (a + j) % ElementsOfArray ];
                                
                                while (i >= 0 && Array [ (a + i) % ElementsOfArray ] > temp){
                                    Array [ (a + i + 1) % ElementsOfArray ] = Array [ (a + i) % ElementsOfArray ];
                                    i = i - 1;
                                    
                                }
                                Array [ (a + i + 1) % ElementsOfArray ] = temp;
                                j = j + 1;
                            }
                        }
                      
                        b = b + length;
                        a = a + length;
                        
                    }
                    while
                        ( (ElementsOfArray -  b) >= length );
              
                    
                    if ((ElementsOfArray - b) != 0){
                        
                        
                        j = 1;
                        
                        while ( j <= ElementsOfArray - b - 1 ){
                            
                            if ((ElementsOfArray - b) != 0){
                                
                                j = 1;
                                
                                while ( j <= ElementsOfArray - b - 1 ){
                                    int i = j - 1;
                                    temp = Array[ (a + j) % ElementsOfArray ];
                                    
                                    while (i >= 0 && Array [ (a + i) % ElementsOfArray ] > temp){
                                        Array [ (a + i + 1) % ElementsOfArray ] = Array [ (a + i) % ElementsOfArray ];
                                        i = i - 1;
                                        
                                    }
                                    Array [ (a + i + 1) % ElementsOfArray ] = temp;
                                    j = j + 1;
                                }
                            }
                        }
                    }
                }
                else if (length < 0){                         // nonincreasing
                    
                    int b = 0;
                    int j = 1;
                    int a = index;
                    int temp = 0;
                   
                    do {
                        
                        j = 1;
                        
                        while ( j <= ( - 1 ) * length - 1 ){
                            int i = j - 1;
                            temp = Array[ (a + j) % ElementsOfArray ];
                            
                            while (i >= 0 && Array [ (a + i) % ElementsOfArray ] < temp){
                                Array [ (a + i + 1) % ElementsOfArray ] = Array [ (a + i) % ElementsOfArray ];
                                i = i - 1;
                            
                            }
                            Array [ (a + i + 1) % ElementsOfArray ] = temp;
                            j = j + 1;
                        }
                      
                        b = b + ( - 1 ) * length;
                        a = a + ( - 1 ) * length;
                 
                  
                    }
                    while
                        ( (ElementsOfArray -  b) >= ( - 1 ) * length );
                    
                    if ((ElementsOfArray - b) != 0){
                        
                        j = 1;
                        
                        while ( j <= ElementsOfArray - b - 1 ){
                            int i = j - 1;
                            temp = Array[ (a + j) % ElementsOfArray ];
                            
                            while (i >= 0 && Array [ (a + i) % ElementsOfArray ] < temp){
                                Array [ (a + i + 1) % ElementsOfArray ] = Array [ (a + i) % ElementsOfArray ];
                                i = i - 1;
                            
                            }
                            Array [ (a + i + 1) % ElementsOfArray ] = temp;
                            j = j + 1;
                        }
                      
                    }
               
                }
                
                int l = 0;                              // output after operations
                while(l <= ElementsOfArray - 1) {
                    std::cout << Array [ l ] << " ";
                  l = l + 1;
                }
                std::cout << std:: endl;
            }
            
        }
        while
            (Operation != 'F');
    
        int l = 0;                              // output after operations
        while(l <= ElementsOfArray - 1) {
            std::cout << Array [ l ] << " ";
          l = l + 1;
        }
        i = i + 1;
     }
    
   
  return 0;
}



/*
int l = 0;                              // output after operations
while(l <= ElementsOfArray - 1) {
    std::cout << Array [ l ] << " ";
  l = l + 1;
}
std::cout << std:: endl; */
