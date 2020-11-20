#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <iostream>
#include <string>
#include "location_eval.h"
using namespace std;
using namespace sf;
int main()
{
	IpAddress ip = IpAddress::getLocalAddress();
	TcpSocket socket;
	char connectionType;
	cout << "s for server, c for client" << endl;
	cin >> connectionType;
	if (connectionType == 's')
	{
		TcpListener listener;
		listener.listen(2000);
		listener.accept(socket);
	}
	else
	{
		socket.connect(ip, 2000);
	}
	RectangleShape rect1, rect2;
	rect1.setSize(Vector2f(20, 20));
	rect2.setSize(Vector2f(20, 20));
	rect1.setFillColor(Color::Red);
	rect2.setFillColor(Color::Blue);
	RenderWindow window(VideoMode(800, 600, 32), "");
	Vector2f prevPosition, p2Position;
	socket.setBlocking(false);
	bool update = false;

	while (window.isOpen())
	{
		Event Event;
		while (window.pollEvent(Event))
		{
		if (Event.type == Event::Closed || Event.key.code == Keyboard::Escape)
		{
			window.close();
		}
		else if (Event.type == Event::GainedFocus)
		{
			update = true;
		}
		else if (Event.type == Event::LostFocus)
		{
			update = false;
		}
	}

	prevPosition = rect1.getPosition();

	if (update == true)
	{
		if (Keyboard::isKeyPressed(Keyboard::Right))
		{
			rect1.move(1.f, 0.f);
		}
		else if (Keyboard::isKeyPressed(Keyboard::Left))
		{
			rect1.move(-1.f, 0.f);
		}
		else if (Keyboard::isKeyPressed(Keyboard::Up))
		{
			rect1.move(0.f, -1.f);
		}
		else if (Keyboard::isKeyPressed(Keyboard::Down))
		{
			rect1.move(0.f, 1.f);
		}
	}

	Packet packet;
	if (prevPosition != rect1.getPosition())

	{
		packet << rect1.getPosition().x << rect1.getPosition().y;
		socket.send(packet);
	}

	socket.receive(packet);
	if (packet >> p2Position.x >> p2Position.y)
	{
		rect2.setPosition(p2Position);
	}
	window.draw(rect1);
	window.draw(rect2);
	window.display();
	window.clear();
}
system("pause");
return 0;
}
