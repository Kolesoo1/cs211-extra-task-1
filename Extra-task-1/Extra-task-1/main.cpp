#include <iostream>
#include <assert.h>
#include <cmath>
#include "extra-task-1.h"

int main() {
	setlocale(LC_ALL, "Russian");

	assert(fabs(seconds_difference(1800.0, 3600.0) - 1800.0) < DBL_EPSILON);
	assert(fabs(seconds_difference(3600.0, 1800.0) + 1800.0) < DBL_EPSILON);
	assert(fabs(seconds_difference(1800.0, 1800.0) - 0.0) < DBL_EPSILON);
	assert(fabs(seconds_difference(1800.0, 2160.0) - 360.0) < DBL_EPSILON);
	std::cout << "Проверка задания 1 пройдена" << std::endl;

	assert(fabs(hours_difference(1800, 3600) - 0.5) < DBL_EPSILON);
	assert(fabs(hours_difference(3600, 1800) + 0.5) < DBL_EPSILON);
	assert(fabs(hours_difference(1800, 2160) - 0.1) < DBL_EPSILON);
	assert(fabs(hours_difference(1800, 1800) - 0.0) < DBL_EPSILON);
	std::cout << "Проверка задания 2 пройдена" << std::endl;
}