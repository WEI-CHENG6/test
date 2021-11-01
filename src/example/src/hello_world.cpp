#include <stdio.h> 
#include <stdlib.h>
#include <ros/ros.h>

int main(int argc,char **argv)
{
	ros::init(argc,argv,"hello_word");
	ros::NodeHandle nh;

	printf("Hello! world!\n");
	ROS_INFO("Hello! world!\n");
	return 0;
}
