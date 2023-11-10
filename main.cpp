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
                if (length % 2 == 0){               // PARZYSTA DLUGOSC
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
                else {                          //NIEPARZYSTA DLUGOSC
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
            
            else if (Operation == 'M'){
                std::cout << "M";
            }
            else if (Operation == 'C'){
                std::cout << "C";
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



