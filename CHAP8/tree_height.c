#include <math.h>
#include <stdio.h>

int main(void) {
	double height, distance, tree_height, degrees, radians;

	printf("나무와의 길이(단위는 미터): ");
	scanf_s("%lf", &distance);

	printf("측정자의 키(단위는 미터): ");
	scanf_s("%lf", &height);

	printf("각도(단위는 도): ");
	scanf_s("%lf", &degrees);

	radians = degrees * (3.141592 / 180.0);
	tree_height = tan(radians) * distance + height;
	printf("나무의 높이(단위는 미터): %lf \n", tree_height);

	return 0;
}