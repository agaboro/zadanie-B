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
            j = j+1;
        }
        
        int k = 0;                              // output before operations
        while(k <= ElementsOfArray - 1) {
            std::cout << Array [ k ] << " ";
            k = k + 1;
        }
        
        char Operation;
        do {                                    // all operations on matrix
            std::cin >> Operation;
            //if ()
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



