#include "stdio.h"
int main(){
	int volumeJ3, volumeJ4;
	volumeJ3 = 0;
	volumeJ4 = 0;
	//p1
	volumeJ4 = 4;
	//p2
	volumeJ4 = volumeJ4 - 3;
	volumeJ3 = volumeJ3 + 3;
	//p3
	volumeJ3 = 0;
	//p4
	volumeJ4 = volumeJ4 - 1;
	volumeJ3 = volumeJ3 + 1;
	//p5
	volumeJ4 = 4;
	//p6
	volumeJ4 = volumeJ4 - 2;
	volumeJ3 = volumeJ3 + 2;
	printf("\nJarro3l: %d", volumeJ3);
	printf("\nJarro4l: %d", volumeJ4);

	return 0;
}
