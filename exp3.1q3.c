#include <stdio.h> 
int main(){
    int x1,y1,x2,y2,x3,y3,area;
printf("Enter cordinates of first point:");
scanf("%d %d",&x1,&y1);
printf("Enter cordinate of second point:");
scanf("%d %d",&x2,&y2);
printf("Enter cordinates of third point:");
scanf("%d %d",&x3,&y3);
 area = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);
 if (area==0)
{
    printf("Points are colinear");

}
else 
{
printf("The points are not colinear");
}
}