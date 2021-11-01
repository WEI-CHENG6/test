#include <stdio.h>
#include <stdlib.h>
#include <ros/ros.h>
#include <string> 
#include <iostream>
using namespace std;

int main(int argc,char **argv)
{
	ros::init(argc,argv,"C_array");
	ros::NodeHandle nh;

	char array1[100] = "hello";
	char array2[10] = "world";

	strcat(array1,array2);
	printf("%s\n",array1);
	
	char b1[20] = "hello";
	char b2[20] = "world";
	
	strcpy(b1,b2);
	printf("%s\n",b1);
	
	char a1[2] = "h";
	char a2[2] = "d";
	int cmp = 0;

	cmp = strcmp(a1,a2);
	printf("%d\n",cmp);

	char b3[20] = "hello";
	int i =0;

	i = strlen(b1);
	printf("%d\n",i);
	
	return 0;
}
