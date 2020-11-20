#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
using namespace std;
using namespace sf;

int main()
{
	IpAddress ip = IpAddress::getLocalAddress();
	TcpSocket socket;
	char connectionType, mode;
	char buffer[2000];
	size_t received;
	string text = "Connected to: ";

	// Getting the required server or client:
	cout << "server or client" << endl;
	cin >> connectionType;

	if (connectionType == 's')
	{
		TcpListener listener;
		listener.listen(2000);
		listener.accept(socket);
		text += "server";
		mode = 's';
	}
	else if (connectionType == 'c')
	{
		socket.connect(ip, 2000);
		text += "client";
		mode = 'r';
	}
	else
	{
		cout << "Wrong input. 's' for server, 'c' for client!" << endl;
		system("pause");
		exit(0);
	}
	socket.send(text.c_str(), text.length() + 1);
	socket.receive(buffer, sizeof(buffer), received);
	cout << buffer << endl;

	bool done = false;
	while (!done)
	{
		if (mode == 's')
		{
			getline(cin, text);
			socket.send(text.c_str(), text.length() + 1);
			mode = 'r';
		}
		else if (mode == 'r')
		{
			if (received > 0)
			{
				socket.receive(buffer, sizeof(buffer), received);
				cout << "recieved message: " << buffer << endl;
				mode = 's';
			}
		}
	}

	system("pause");
	return 0;
}