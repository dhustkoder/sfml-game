#ifndef PADDLE_H
#define PADDLE_H

#include <memory>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/System/Vector2.hpp>


constexpr float paddleVelocity = 5.0;
class Paddle
{
	friend class Player;
public:
	Paddle(const float x, const float y, const float sizeX, const float sizeY);
	const sf::Vector2f& getPosition() const;
	const sf::Vector2f& getVelocity() const;
	void setPosition(const float x, const float y);
	void setVelocity(const float x, const float y);
	virtual void update() = 0;
	operator sf::Drawable& ();
private:
	std::unique_ptr<sf::RectangleShape> m_shape;
	std::unique_ptr<sf::Vector2f> m_velocity;
	
};




#endif