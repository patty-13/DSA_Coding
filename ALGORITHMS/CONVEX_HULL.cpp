#include "iostream"
#include "vector"
#include "map"
#include "algorithm"
#include "math.h"
using namespace std;
/**
 *  How to determine if three points 
 *       y3 - y2
 *  m1 = -------
 *       x3 - x2
 * 
 *       y2 - y1
 *  m2 = -------
 *       x2 - x1
 *  
 *  if m2 > m1 clockwise
 *  if m1 > m2 anticlockwise
 *  if m1 = m2 colinear
 *  or
 *  m1 - m2 > 0 counterclockwise
 *  m1 - m2 < 0 clockwise
 *  m2 - m1 = 0 collinear
 *  similarly -
 *  (y3 - y2)*(x2 - x1) - (y2 - y1)*(x3 - x2)
 * ->
*/
int main()
{
    int x1, x2, x3, y1, y2, y3;
    float d;
    d = (y3 - y2)*(x2 - x1) - (y2 - y1)*(x3 - x2);
    if( d > 0)
    {
        return 1;
    }
    else if(d < 0 )
    {
        return -1;
    }
    else
    {
        return 0;
    }

}