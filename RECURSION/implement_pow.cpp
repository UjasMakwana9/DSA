#include<bits/stdc++.h>


using namespace std;
// Time Complexity: O(logn)
// Space Complexity: O(logn)
    double power(double b, int e) {
        // code here
        if(e==0)
            return 1;
        
        if(e<0)
            return 1/power(b,-e);
        
        double temp = power(b,e/2);
        
        if(e%2==0){
            return temp*temp;
        }
        else{
            return b*temp*temp;
        }
        
    }

// Time Complexity: O(logn)
// Space Complexity: O(1)
    double power2(double b, int e) {
        // code here
        if(e==0)
            return 1;
        
        if(e<0)
            return 1/power(b,-e);
        
        double res = 1;
        
        while(e>0){
            if(e%2==1){
                res = res*b;
            }
            b = b*b;
            e = e/2;
        }
        
        return res;

        // return pow(b,e);
    }
// Time Complexity: O(n)
// Space Complexity: O(1)
double power3(double b, int e) {
  
    // Initialize result to 1
    double pow = 1;

    // Multiply x for n times
    for (int i = 0; i < abs(e); i++) 
        pow = pow * b;
      
      if (e < 0)
          return 1/pow;

    return pow;
}

// Time Complexity: O(n)
// Space Complexity: O(n)
double power4(double b, int e) {
  
    // Base Case: pow(b, 0) = 1
    if (e == 0)
        return 1;
  
    if (e < 0)
        return 1 / power(b, -e);
  
    // For all other cases
    return b * power(b, e - 1);
}
int main()
{

return 0;
}