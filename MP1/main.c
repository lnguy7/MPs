#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calculate_distance(int velocity){
    double angle_radians = 0; //TODO
    double y_height_meters = 0; //TODO
    double time = angle_radians + y_height_meters; //Remember question 5
    double distance = time + y_height_meters; // Use your kinematics!
    return distance;
}

int main()
{
    int velocity;
    printf("Enter a velocity: ");
    scanf("%d",&velocity);
    float distance = calculate_distance(velocity);
    printf("The distance we must be away from the hoop is: %lf\n", distance);
    return 0;
}
