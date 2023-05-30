#pragma once
#ifndef TRANSFORM_H
#define TRANSFORM_H

#include "position.h"
#include "rotation.h"
#include "scale.h"

class transform
{
public:
	transform();
	~transform();

	position position;
	rotation rotation;
	scale scale;
};

#endif // !TRANSFORM_H
