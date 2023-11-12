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
                            do {
                                temp = Array [ a + ElementsOfArray - b - i - 1 ];
                                Array [ a + ElementsOfArray - b - i - 1 ] = Array [ a + ElementsOfArray - b - i ];
                                i = i + 1;
 
                            }
                            while
                                ( length - i > 1 );
                            
                            Array [ a + ElementsOfArray - b - 1] = temp;
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
                        i = 0;
                        j = 1;
                        
                        while ( j <=  move){
                            do {
                                temp = Array [ a + ElementsOfArray - b + i + 1 ];
                                Array [ a + ElementsOfArray - b + i + 1 ] = Array [ a + ElementsOfArray - b + i ];
                                i = i + 1;

 
                            }
                            while
                                ( length - i > 1 );
                            
                            Array [ a + ElementsOfArray - b + 1] = temp;
                            j = j + 1;
                        }
                    }
                    
                }
            }
            else if (Operation == 'C'){
                
                int index;
                int length;
                std::cin >> index >> length;
                while(index < 0)
                    index = index + ElementsOfArray;
                
                if ( length != 0){
                    
                    int d = 0;
                    int a = index;
                    int c = index;
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
                            c = c - 1;
                            d = d + 1;
                            }
                        
                            b = b + 2 * length;
                        
                    }
                    while
                        ( (ElementsOfArray -  b) >= length );
                    
                    
                    
                }
            }
            else if (Operation == 'S'){
                std::cout << "S";
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



