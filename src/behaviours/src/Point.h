#ifndef POINT_H
#define POINT_H

#include <geometry_msgs/Pose2D.h>

struct Point {
  float x;
  float y;
  float theta;
  
  Point(const geometry_msgs::Pose2D& p2d){ //Contructor to make a Point from a Pose2D
    x = p2d.x;
    y = p2d.y;
    theta = p2d.theta;
  }
  
  operator geometry_msgs::Pose2D() const { //Conversion operator to make a Pose2D from a point
    geometry_msgs::Pose2D p2d;
    p2d.x = x;
    p2d.y = y;
    p2d.theta = theta;
    return p2d;
  }
  
  bool operator==(const Point& lhs, const Point& rhs){
    if (lhs.x == rhs.x && lhs.y == rhs.y && lhs.theta == rhs.theta)
     return true;
   else return false;
 } 
 bool operator!=(const Point& lhs, const Point& rhs){
   if (lhs.x != rhs.x || lhs.y != rhs.y || lhs.theta != rhs.theta)
     return true;
   else return false;
   
 }

};

#endif // POINT_H
