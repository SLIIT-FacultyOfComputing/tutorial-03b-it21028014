#include <iostream>

using namespace std;

struct(box1)
{
  int Width;
  int Length;
  int Height;
};

struct(box2)
{
  int Height;
  int Length;
  int Width;
};



int volume(int height, int width, int length);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length

// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    struct box1 ; 
    struct box2 ;
    int totalVolume;
   
    
    cout << "Enter Box 1 Height : ";
    cin >>box1.Height;
    cout << "Enter Box 1 Width : ";
    cin >> box1.Width;
    cout << "Enter Box 1 Length : ";
    cin >> box1.Length;
    

    
    
    cout << "Enter Box 2 Height : ";
    cin >> box2.Height;
    cout << "Enter Box 2 Width : ";
    cin >> box2.Width;
    cout << "Enter Box 2 Length : ";
    cin >>box2.Length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume( box1.Height,box1.Length ,box1.Width )
             + volume( box2.Height,box2.Length ,box2.Width );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
int volume(int height, int width, int length)
{
  int volume;

  volume = height * width * length;

  return volume;
}
