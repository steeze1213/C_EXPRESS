#include <stdio.h>
void getSensorData(double* p) {
	return;
}
int main(void) {
	double sensorData[3];
	getSensorData(sensorData);

	printf("왼쪽 센서와 장애물과의 거리: %lf \n", sensorData[0]);
	printf("중간 센서와 장애물과의 거리: %lf \n", sensorData[1]);
	printf("오른쪽 센서와 장애물과의 거리: %lf \n", sensorData[2]);
	return 0;
}