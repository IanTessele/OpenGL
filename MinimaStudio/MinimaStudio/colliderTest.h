#pragma once
#ifndef COLIDER_TEST
#define COLIDER_TEST
#include "plane.h"

int CollisionTest(plane A, plane B) {

	DeltaTime();

	float distanceX = glm::distance(A.Transform.Position.x, B.Transform.Position.x) - A.Transform.Scale.x - B.Transform.Scale.x;
	float distanceY = glm::distance(A.Transform.Position.y, B.Transform.Position.y) - A.Transform.Scale.y - B.Transform.Scale.y;

	if (distanceY > 0.0f || distanceX > 0.0f)
		return 1;
	else
		return 0;

};

#endif // !COLIDER_TEST

