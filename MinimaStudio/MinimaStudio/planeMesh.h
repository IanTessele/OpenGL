#ifndef PLANE_MESH_H
#define PLANE_MESH_H
#include "mesh_Base.h"

class planeMesh : public mesh_Base
{
public:
	planeMesh();
	~planeMesh();

	const void setMesh(
		GLfloat posX,
		GLfloat posY,
		GLfloat sizeX,
		GLfloat sizeY)override;
	const void Draw() override;
	const void Delete()override;
};

#endif // !PLANE_MESH_H
