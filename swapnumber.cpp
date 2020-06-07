#include <iostream.h> 
class Swap
 { 
    int temp, a, b; 
  
	public:Swap(int a, int b) 
       {  
       	 this->a = a; 
         this->b = b; 
       } 
    friend void swap(Swap&); 
}; 
void swap(Swap& s1) 
{ 
    cout << "\nBefore Swapping: " << s1.a << " " << s1.b;  
    s1.temp = s1.a; 
    s1.a = s1.b; 
    s1.b = s1.temp; 
    cout << "\nAfter Swapping: " << s1.a << " " << s1.b; 
} 
int main() 
{ 
    int x,y;
    cout<<"Enter the value of x and y";
    cin>>x>>y;
    Swap s(x, y); 
    swap(s); 
    return 0; 
} 
