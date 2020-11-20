#include <iostream>
#include <string>
#include <map>
#include <conio.h>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
using namespace std;
using namespace sf;

int main()
{
	IpAddress ip = IpAddress::getLocalAddress();
	UdpSocket socket;
	char connectionType, mode;
	char buffer[2000];
	size_t received;
	map<unsigned short, IpAddress> computerID;
	string text = "Connected to: ";

	cout << "s for server, c for client" << endl; // getting the server or client
	cin >> connectionType; // s or c

	unsigned short port; // getting the port type
	cout << "set port #: " << endl;
	cin >> port;
	socket.bind(port);
	//socket.setBlocking(false);
	if (connectionType == 's')
	{
		char answer = 'b';
		do
		{
			IpAddress rIp;
			unsigned short port;
			socket.receive(buffer, sizeof(buffer), received, rIp, port);
			if (received > 0)
			{
				computerID[port] = rIp;
			}
			cin >> answer;

		} while (answer != 'a');
	}
	else
	{
		string sIP;
		cout << "enter the server ip (local or global): " << endl;
		char c;
		while (true)
		{
			c = (char)getch();
			if (c == 13)
			{
				break;
			}	
			sIP += c;
			cout << c;
		}
		IpAddress sendIP(sIP);
		socket.send(text.c_str(), text.length() + 1, sendIP, 2000);
	}

	bool done = false;
	while (!done)
	{
		if (connectionType == 's')
		{
			getline(cin, text);
			map<unsigned short, IpAddress>::iterator tempIterator;
			for (tempIterator = computerID.begin(); tempIterator != computerID.end(); tempIterator++)
			{
				socket.send(text.c_str(), text.length() + 1, tempIterator->second, tempIterator->first);
			}		
		}
		else
		{
			IpAddress tempIp;
			unsigned short tempPort;
			socket.receive(buffer, sizeof(buffer), received, tempIp, tempPort);
			if (received > 0)
			{
				cout << "recieved: " << buffer << endl;
			}
		}
	}

	system("pause");
	return 0;
}