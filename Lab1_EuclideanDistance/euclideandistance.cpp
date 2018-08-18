#include <iostream>
#include <cmath>
#include "euclideandistance.h"
using namespace std;

  ///////////////////////////////////////////////////////////////////////////
 //....................Maximum Distance 1-Dimension.......................//
///////////////////////////////////////////////////////////////////////////
/**
 *This function fills an array of double with random values
 */
void generate1D_Points(double *arrPoints, size_t n){
	//TODO: write funcitonality for this method here
	for(size_t i=0; i<n; i++){
		arrPoints[i] =rand()%20;
	}
}

/**
 *This function takes in array of type double, and length n and computes the 
 *Largest distance between all pairs of points in the list
 */
double MaxDistance1D(double *arrPoints, size_t n){
	//TODO: write funcitonality for this method here
}



  ///////////////////////////////////////////////////////////////////////////
 //....................Maximum Distance 2-Dimensions.......................//
///////////////////////////////////////////////////////////////////////////
/**
 *This function fills an array of point2D with random values, do not change this 
 * code!!!!
 */
void generate2D_Points(point2D *arrPoints, size_t n){
	double x,y;
	for(size_t i=0; i<n; i++){
		x=rand()%20;
		y=rand()%20;
		arrPoints[i]= {x,y};
	}	
}

/**
 *This function takes in array of type point2D, and length n and computes the 
 *maximum distance between all pairs of points in the list
 */
double MaxDistance2D(point2D *arrPoints, size_t n){
	//TODO: write funcitonality for this method here
}


/**
 *This function fills an array of point3D with random values
 *NOTE: you have to write the parameters yourself
 */
void generate3D_Points(point3D *arrPoints, size_t n){
	//TODO: write funcitonality for this method here
	double x,y,z;
	for(size_t i=0; i<n; i++){
		x=rand()%20;
		y=rand()%20;
		z=rand()%20;
		arrPoints[i]= {x,y,z};
	}
}


/**
 *This function takes in array of type point3D and length n and computes the 
 *maximum distance between all pairs of points in the list
 * NOTE: you have to write the parameters yourself
 */
double MaxDistance3D(point3D *arrPoints, size_t n){
	//TODO: write funcitonality for this method here
}

int main(void){
	/*TODO: 1.) create an appropriate array to store the euclidean points
	 *		2.) call the appropriate generate1D/2D/3D_Points function
	 *		3.) call the appropriate MaxDistance1D/2D/3D function to calculate the maximum distance
	 *		4.) output the maximum distance to the terminal 
	 */
	return 0;
}

