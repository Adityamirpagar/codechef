# include <iostream>

int main() {
    
    int t;
    std::cin >> t;
    
    while(t--){
        
        /*       Approach 1

        int a[10]; // declaring the array
        int n = 10; // size of the array
        
        
        // taking elements as an input form the user
        for(int i = 0; i<n; i++)
            std::cin >> a[i];
        
        int team_1 = a[0] + a[2] + a[4] + a[6] + a[8];
        int team_2 = a[1] + a[3] + a[5] + a[7] + a[9];
        
        for(auto i : a)
            std::cout << i << " ";
        std::cout << std::endl;
        
        
        if (team_1 > team_2)
            std::cout << 1 << std::endl;
        else if (team_2 > team_1)
            std::cout << 2 << std::endl;
        else
            std::cout << 0 << std::endl;
        
        */
        
        
        /*       Approach 2
        
        int n = 10; //size of the array
        int a[n+1]; // declaring the array
        
        a[0] = 10;
        n++;
        std::cout <<"Size of the array is: " << n << std::endl;
        
        // taking elements as an input form the user
        for(int i = 1; i<n; i++)
            std::cin >> a[i];
        
        int team_1 = a[1] + a[3] + a[5] + a[7] + a[9];
        int team_2 = a[2] + a[4] + a[6] + a[8] + a[10];
        
        for (int i =1; i<n; i++)
            std::cout << a[i] << " ";
        std::cout << "\n";
        
        
        if (team_1 > team_2)
            std::cout << 1 << std::endl;
        else if (team_2 > team_1)
            std::cout << 2 << std::endl;
        else
            std::cout << 0 << std::endl;
            
       */
        
    }
    
    
    
return 0;
}
