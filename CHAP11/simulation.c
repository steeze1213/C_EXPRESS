#include <stdio.h>
void getSensorData(double* p) {
	return;
}
int main(void) {
	double sensorData[3];
	getSensorData(sensorData);

	printf("���� ������ ��ֹ����� �Ÿ�: %lf \n", sensorData[0]);
	printf("�߰� ������ ��ֹ����� �Ÿ�: %lf \n", sensorData[1]);
	printf("������ ������ ��ֹ����� �Ÿ�: %lf \n", sensorData[2]);
	return 0;
}