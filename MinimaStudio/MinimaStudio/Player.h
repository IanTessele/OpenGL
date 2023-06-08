#pragma once
#ifndef PLAYER
#define PLAYER
#include "sprite.h"
#include "time.h"
#include "colliderTest.h"
class player: public Sprite
{
public:
	player();
	~player();

	void movePlayer(window window);
	void testColliders(Sprite player, Sprite obj);
	int InputH(window window);
	int InputV(window window);

private:
	float gravity = 1.0f;
	float aceleracao = gravity;
	float speed = 0.5f;
};

player::player()
{
	Transform.Position = glm::vec3(0.0f,50.0f,0.0f);
}

player::~player()
{
}


inline void player::movePlayer(window window)
{
	DeltaTime();//delta time locked to 60 fps

	float H = speed * InputH(window);
	float V = speed * InputV(window);


	DeltaTime();

		Transform.Position = glm::vec3(
		Transform.Position.x + H,
		Transform.Position.y - aceleracao,
		Transform.Position.z
	);
}

inline void player::testColliders(Sprite player, Sprite obj)
{
	DeltaTime();
	aceleracao = gravity * CollisionTest(player, obj);
}

inline int player::InputH(window window)
{
	if (glfwGetKey(window.GetWindow(), GLFW_KEY_A) == GLFW_PRESS) {
		return -1;
	}

	if (glfwGetKey(window.GetWindow(), GLFW_KEY_D) == GLFW_PRESS) {
		return 1;
	}

	return 0;

}
inline int player::InputV(window window)
{
	if (glfwGetKey(window.GetWindow(), GLFW_KEY_W) == GLFW_PRESS) {
		return 1;
	}

	if (glfwGetKey(window.GetWindow(), GLFW_KEY_S) == GLFW_PRESS) {
		return -1;
	}
	
	return 0;
}
#endif // !PLAYER
