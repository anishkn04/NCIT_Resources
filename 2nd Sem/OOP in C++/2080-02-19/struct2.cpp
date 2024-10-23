// Create a structure called volume that uses three variables of type distance to
// model the volume of a room. Initialize a variable of type volume of room.
// Initialize a variable of type volume to specify dimensions, then calculate the
// volume it represents and printout the results. To calculate the volume convert
// each dimension from a distance variable to a variable of type float representing
// feet and fraction of a foot and then multiply the resulting three number.


#include <iostream>
#include <conio.h>
using namespace std;

struct Distance{
    int feet;
    float fraction;
};

struct VolumeRoom{
    struct Distance length;
    struct Distance breadth;
    struct Distance height;
};

int main(){
    struct VolumeRoom room1;
    float l ,b, h, volume;

    room1.length.feet=10;
    room1.length.fraction=7;
    room1.breadth.feet=12;
    room1.breadth.fraction=0;
    room1.height.feet=15;
    room1.height.fraction=5;
    
    l = room1.length.feet+(room1.length.fraction/12);
    b = room1.breadth.feet+(room1.breadth.fraction/12);
    h = room1.height.feet+(room1.height.fraction/12);

    volume = l*b*h;

    cout<<"The Volume is: "<< volume;
}