#ifndef OBJECT_H
#define OBJECT_H
#include "transform.h"
#include <string>
class object
{
public:
	object();
	~object();

	std::string name = "";
	transform transform;
};

#endif // !OBJECT_H
