// Libraries and headers needed for program functionality:
#include <iostream> // standard stream input/output
#include <limits> // flushing the buffer
#include <vector> // vector data structure
#include <algorithm> // structs and .h usage
#include <SFML/Graphics.hpp> // Spirtes, textures, positions, etc...
#include <SFML/Network.hpp> // tcpsockets, packets, server utlization, etc...
using namespace std; // removes the need of "std::"
using namespace sf; // removes the need of "sf::"

// Function for chess piece locations (takes pointers of x and y coordinate and pointer of string location)
void locate(int *x_coordinate, int *y_coordinate, string *location)
{
	if (*location == "a1") // a
	{
		*x_coordinate = 219;
		*y_coordinate = 366;
	}
	else if (*location == "a2")
	{
		*x_coordinate = 219;
		*y_coordinate = 330;
	}
	else if (*location == "a3")
	{
		*x_coordinate = 219;
		*y_coordinate = 295;
	}
	else if (*location == "a4")
	{
		*x_coordinate = 219;
		*y_coordinate = 260;
	}
	else if (*location == "a5")
	{
		*x_coordinate = 219;
		*y_coordinate = 226;
	}
	else if (*location == "a6")
	{
		*x_coordinate = 219;
		*y_coordinate = 187;
	}
	else if (*location == "a7")
	{
		*x_coordinate = 219;
		*y_coordinate = 154;
	}
	else if (*location == "a8")
	{
		*x_coordinate = 219;
		*y_coordinate = 117;
	}
	else if (*location == "b1") // b
	{
		*x_coordinate = 254;
		*y_coordinate = 366;
	}
	else if (*location == "b2")
	{
		*x_coordinate = 254;
		*y_coordinate = 330;
	}
	else if (*location == "b3")
	{
		*x_coordinate = 254;
		*y_coordinate = 295;
	}
	else if (*location == "b4")
	{
		*x_coordinate = 254;
		*y_coordinate = 260;
	}
	else if (*location == "b5")
	{
		*x_coordinate = 254;
		*y_coordinate = 220;
	}
	else if (*location == "b6")
	{
		*x_coordinate = 254;
		*y_coordinate = 187;
	}
	else if (*location == "b7")
	{
		*x_coordinate = 254;
		*y_coordinate = 154;
	}
	else if (*location == "b8")
	{
		*x_coordinate = 254;
		*y_coordinate = 117;
	}
	else if (*location == "c1") // c
	{
		*x_coordinate = 290;
		*y_coordinate = 366;
	}
	else if (*location == "c2")
	{
		*x_coordinate = 290;
		*y_coordinate = 330;
	}
	else if (*location == "c3")
	{
		*x_coordinate = 290;
		*y_coordinate = 295;
	}
	else if (*location == "c4")
	{
		*x_coordinate = 290;
		*y_coordinate = 260;
	}
	else if (*location == "c5")
	{
		*x_coordinate = 290;
		*y_coordinate = 220;
	}
	else if (*location == "c6")
	{
		*x_coordinate = 290;
		*y_coordinate = 187;
	}
	else if (*location == "c7")
	{
		*x_coordinate = 290;
		*y_coordinate = 154;
	}
	else if (*location == "c8")
	{
		*x_coordinate = 290;
		*y_coordinate = 117;
	}
	else if (*location == "d1") // d
	{
		*x_coordinate = 325;
		*y_coordinate = 366;
	}
	else if (*location == "d2")
	{
		*x_coordinate = 325;
		*y_coordinate = 330;
	}
	else if (*location == "d3")
	{
		*x_coordinate = 325;
		*y_coordinate = 295;
	}
	else if (*location == "d4")
	{
		*x_coordinate = 325;
		*y_coordinate = 260;
	}
	else if (*location == "d5")
	{
		*x_coordinate = 325;
		*y_coordinate = 226;
	}
	else if (*location == "d6")
	{
		*x_coordinate = 325;
		*y_coordinate = 187;
	}
	else if (*location == "d7")
	{
		*x_coordinate = 325;
		*y_coordinate = 154;
	}
	else if (*location == "d8")
	{
		*x_coordinate = 325;
		*y_coordinate = 117;
	}
	else if (*location == "e1") // e
	{
		*x_coordinate = 361;
		*y_coordinate = 366;
	}
	else if (*location == "e2")
	{
		*x_coordinate = 361;
		*y_coordinate = 330;
	}
	else if (*location == "e3")
	{
		*x_coordinate = 361;
		*y_coordinate = 295;
	}
	else if (*location == "e4")
	{
		*x_coordinate = 361;
		*y_coordinate = 260;
	}
	else if (*location == "e5")
	{
		*x_coordinate = 361;
		*y_coordinate = 226;
	}
	else if (*location == "e6")
	{
		*x_coordinate = 361;
		*y_coordinate = 187;
	}
	else if (*location == "e7")
	{
		*x_coordinate = 361;
		*y_coordinate = 154;
	}
	else if (*location == "e8")
	{
		*x_coordinate = 361;
		*y_coordinate = 117;
	}
	else if (*location == "f1") // f
	{
		*x_coordinate = 397;
		*y_coordinate = 366;
	}
	else if (*location == "f2")
	{
		*x_coordinate = 397;
		*y_coordinate = 330;
	}
	else if (*location == "f3")
	{
		*x_coordinate = 397;
		*y_coordinate = 295;
	}
	else if (*location == "f4")
	{
		*x_coordinate = 397;
		*y_coordinate = 260;
	}
	else if (*location == "f5")
	{
		*x_coordinate = 397;
		*y_coordinate = 226;
	}
	else if (*location == "f6")
	{
		*x_coordinate = 397;
		*y_coordinate = 187;
	}
	else if (*location == "f7")
	{
		*x_coordinate = 397;
		*y_coordinate = 154;
	}
	else if (*location == "f8")
	{
		*x_coordinate = 397;
		*y_coordinate = 117;
	}
	else if (*location == "g1") // g
	{
		*x_coordinate = 434;
		*y_coordinate = 366;
	}
	else if (*location == "g2")
	{
		*x_coordinate = 434;
		*y_coordinate = 330;
	}
	else if (*location == "g3")
	{
		*x_coordinate = 434;
		*y_coordinate = 295;
	}
	else if (*location == "g4")
	{
		*x_coordinate = 434;
		*y_coordinate = 260;
	}
	else if (*location == "g5")
	{
		*x_coordinate = 434;
		*y_coordinate = 226;
	}
	else if (*location == "g6")
	{
		*x_coordinate = 434;
		*y_coordinate = 187;
	}
	else if (*location == "g7")
	{
		*x_coordinate = 434;
		*y_coordinate = 154;
	}
	else if (*location == "g8")
	{
		*x_coordinate = 434;
		*y_coordinate = 117;
	}
	else if (*location == "h1") // h
	{
		*x_coordinate = 470;
		*y_coordinate = 366;
	}
	else if (*location == "h2")
	{
		*x_coordinate = 470;
		*y_coordinate = 330;
	}
	else if (*location == "h3")
	{
		*x_coordinate = 470;
		*y_coordinate = 295;
	}
	else if (*location == "h4")
	{
		*x_coordinate = 470;
		*y_coordinate = 260;
	}
	else if (*location == "h5")
	{
		*x_coordinate = 470;
		*y_coordinate = 226;
	}
	else if (*location == "h6")
	{
		*x_coordinate = 470;
		*y_coordinate = 187;
	}
	else if (*location == "h7")
	{
		*x_coordinate = 470;
		*y_coordinate = 154;
	}
	else if (*location == "h8")
	{
		*x_coordinate = 470;
		*y_coordinate = 117;
	}

	// Sending actual coordinate outputs back to main:
	*x_coordinate = *x_coordinate + 6; // adjusting value due to error
	*y_coordinate = *y_coordinate + 6; // adjusting value due to error
}

// Function for chess rules (takes pointer to chess piece, decided decision, old piece position and new piece position)
void rules(int *piece, int *decision, Vector2f *oldPos, Vector2f *newPos)
{
	// Creating integers to store int position of old and new:
	int oldx = oldPos->x; // old x pos
	int oldy = oldPos->y; // old y pos
	int newx = newPos->x; // new x pos
	int newy = newPos->y; // new y pos

	// Creating integers to hold the value of difference from old to new positions:
	int xdiff = newx - oldx;  // x coordinate difference
	int ydiff = newy - oldy; // y coordinate difference

	// If distances are negative, turning them to positive (easier evaluation):
	if (xdiff < 0)
	{
		xdiff = xdiff * -1;
	}
	if (ydiff < 0)
	{
		ydiff = ydiff * -1;
	}

	// Rooks:
	if (*piece == 0 || *piece == 7)
	{
		if ((ydiff < 256) && (xdiff < 16)) // vertical movement
		{
			*decision = 1; // movement approved
		}
		else if ((ydiff < 16) && (xdiff < 261)) // horizontal movement
		{
			*decision = 1; // movement approved
		}
		else
		{
			*decision = 0; // movement denied
		}
	}
	// Knights:
	else if (*piece == 1 || *piece == 6)
	{
		if ((ydiff < 39 && ydiff > 31) && (xdiff < 78)) // horizontal movement
		{
			*decision = 1; // approved
		}
		else if((ydiff < 78) && (xdiff < 39 && xdiff > 31)) // vertical movement
		{
			*decision = 1; // approved
		}
		else
		{
			*decision = 0; // denied
		}
	}
	// Bishops:
	else if (*piece == 2 || *piece == 5) // diagonal all across the board
	{
		if 
		(
			((ydiff > 32 && ydiff < 40) && (xdiff > 32 && xdiff < 40)) || // moving one square
			((ydiff > 68 && ydiff < 76) && (xdiff > 68 && xdiff < 76)) || // moving two square
			((ydiff > 104 && ydiff < 112) && (xdiff > 104 && xdiff < 112)) || // moving three square
			((ydiff > 140 && ydiff < 148) && (xdiff > 140 && xdiff < 148)) || // moving four square
			((ydiff > 176 && ydiff < 184) && (xdiff > 176 && xdiff < 184)) || // moving five squre
			((ydiff > 212 && ydiff < 220) && (xdiff > 212 && xdiff < 220)) || // moving six square
			((ydiff > 248 && ydiff < 256) && (xdiff > 248 && xdiff < 256))    // moving seven square
		) 
		{
			*decision = 1; // approved movement
		}
		else
		{
			*decision = 0; // denied movement
		}

	}
	// Queen:
	else if (*piece == 3)
	{
		// Diagonal:
		if
			(
			((ydiff > 32 && ydiff < 40) && (xdiff > 32 && xdiff < 40)) || // moving one square
			((ydiff > 68 && ydiff < 76) && (xdiff > 68 && xdiff < 76)) || // moving two square
			((ydiff > 104 && ydiff < 112) && (xdiff > 104 && xdiff < 112)) || // moving three square
			((ydiff > 140 && ydiff < 148) && (xdiff > 140 && xdiff < 148)) || // moving four square
			((ydiff > 176 && ydiff < 184) && (xdiff > 176 && xdiff < 184)) || // moving five squre
			((ydiff > 212 && ydiff < 220) && (xdiff > 212 && xdiff < 220)) || // moving six square
			((ydiff > 248 && ydiff < 256) && (xdiff > 248 && xdiff < 256))    // moving seven square
			)
		{
			*decision = 1; // approved
		}
		else if ((ydiff < 256) && (xdiff < 16)) // vertical
		{
			*decision = 1; // approved
		}
		else if ((ydiff < 16) && (xdiff < 261)) // horizontal
		{
			*decision = 1; // approved
		}
		else
		{
			*decision = 0; // denied
		}
	}
	// King:
	else if (*piece == 4)
	{
		if (((ydiff > 32 && ydiff < 40) && (xdiff > 32 && xdiff < 40))) // diagonal
		{
			*decision = 1;
		}
		else if (((ydiff > 32 && ydiff < 40) && (xdiff < 16))) // vertical
		{
			*decision = 1; // approved
		}
		else if (((ydiff < 16) && (xdiff > 32 && xdiff < 40))) // horizontal
		{
			*decision = 1; // approved
		}
		else
		{
			*decision = 0; // denied
		}
	}
	// Pawns:
	else if (*piece > 7 && *piece < 16)
	{
		if ((ydiff < 76) && ((xdiff < 18) || (xdiff < 48 && xdiff > 18))) // horizontal up one
		{																  // or two squares
			*decision = 1; // approved
		}
		else
		{
			*decision = 0; // denied
		}
	}
}

int main()
{
	// Network setup:
	IpAddress ip = IpAddress::getLocalAddress(); // creating ip address to store personal ip
	TcpSocket socket; // creating a tcp socket
	char connectionType; // char to store a specific connection type
	cout << "(s) for server. (c) for client." << endl; // user prompt to determine server and client
	cin >> connectionType; // getting char from user
	if (connectionType == 's') // if the connection type is a server
	{
		TcpListener listener; // creating a listener to "listen" to a specific port
		listener.listen(2000); // identify which comm port to listen to 
		listener.accept(socket); // accepting the tcp socket
	}
	else if(connectionType == 'c') // the connection type is client
	{
		socket.connect(ip, 2000); // client is connected to comm/port 2000 using local ip
	}
	else
	{
		cout << "Connection failed" << endl;
		system("pause");
		exit(0);
	}

	// Image textures:
	// Gui screens:
	Texture t_game;

	// White pieces:
	Texture w_t_pawn; 
	Texture w_t_knight;
	Texture w_t_bishop;
	Texture w_t_rook;
	Texture w_t_queen; 
	Texture w_t_king; 

	// Black Textures:
	Texture b_t_pawn;
	Texture b_t_knight;
	Texture b_t_bishop;
	Texture b_t_rook;
	Texture b_t_queen;
	Texture b_t_king; 

	// Image imports:
	// Gui screens:
	t_game.loadFromFile("game_ui.png");

	// White pieces:
	w_t_pawn.loadFromFile("white-pawn.png"); // pawns
	w_t_knight.loadFromFile("white-horse.png"); // knights
	w_t_bishop.loadFromFile("white-bishop.png"); // bishops
	w_t_rook.loadFromFile("white-rook.png"); // rooks
	w_t_queen.loadFromFile("white-queen.png"); // queen
	w_t_king.loadFromFile("white-king.png"); // king

	// Black pieces:
	b_t_pawn.loadFromFile("black-pawn.png"); // pawns
	b_t_knight.loadFromFile("black-horse.png"); // knights
	b_t_bishop.loadFromFile("black-bishop.png"); // bishops
	b_t_rook.loadFromFile("black-rook.png"); // rooks
	b_t_queen.loadFromFile("black-queen.png"); // queen
	b_t_king.loadFromFile("black-king.png"); // king

	// Image sprites:
	// Gui screens:
	Sprite s_game(t_game);
	s_game.setScale(Vector2f(.985f, .985f)); // resizing the game screen for later use

	// Actual Chess pieces:
	vector<Sprite> pieces(32);
	pieces[0].setTexture(w_t_rook);
	pieces[1].setTexture(w_t_knight);
	pieces[2].setTexture(w_t_bishop);
	pieces[3].setTexture(w_t_queen);
	pieces[4].setTexture(w_t_king);
	pieces[5].setTexture(w_t_bishop);
	pieces[6].setTexture(w_t_knight);
	pieces[7].setTexture(w_t_rook);
	for (int i = 8; i < 16; i++)
	{
		pieces[i].setTexture(w_t_pawn);
	}
	for (int i = 16; i < 24; i++) // black pieces
	{	// Setting the textures in reverse order
		pieces[i].setTexture(b_t_pawn); // to make printing of black pieces easier
	}
	pieces[24].setTexture(b_t_rook);
	pieces[25].setTexture(b_t_knight);
	pieces[26].setTexture(b_t_bishop);
	pieces[27].setTexture(b_t_queen);
	pieces[28].setTexture(b_t_king);
	pieces[29].setTexture(b_t_bishop);
	pieces[30].setTexture(b_t_knight);
	pieces[31].setTexture(b_t_rook);

	// Declarations for coordinate creation:
	string coordinates_x[8] = { "a", "b", "c", "d", "e", "f", "g", "h" }; // defining the x coordinates
	string coordinates_y[8] = { "1", "2", "3", "4", "5", "6", "7", "8" }; // defining the y coordinates

	// Array to store general coordinates of the chess board:
	string chessboard[8][8]; // creating a chessboard array
	for (int i = 0; i < 8; i++) // traversing horizontally across the board
	{
		for (int p = 0; p < 8; p++)
		{
			chessboard[i][p] = coordinates_x[p] + coordinates_y[i]; // storing coordinates in array
		}
	}

	// Outputting the actual window
	RenderWindow window(VideoMode(541, 628), "Chess Game", Style::Titlebar | Style::Close); // window specifics

	// Placing white pieces:
	int track = 0; // creating a counter to iterate through chess piece array
	for (int i = 0; i < 2; i++)
	{
		for (int p = 0; p < 8; p++)
		{
			// Creating location:
			int x_coordinate, y_coordinate; // x and y coordinate
			string location = chessboard[i][p]; // creating a temporary location
			locate(&x_coordinate, &y_coordinate, &location); // sending to locate function to return actual coordinates

			// Placing piece in specfic location:
			pieces[track].setPosition(x_coordinate, y_coordinate); // placing chess piece
			pieces[track].setScale(Vector2f(.1f, .1f)); // setting the scale of chess piece
			track++; // incrementing tracker to move onto next piece
		}
	}
	// Placing black pieces:
	track = 16; // setting track to 16 to iterate through black pieces
	for (int i = 6; i < 8; i++)
	{
		for (int p = 0; p < 8; p++)
		{
			// Creating location:
			int x_coordinate, y_coordinate; // x and y coordinate
			string location = chessboard[i][p]; // creating a temporary location
			locate(&x_coordinate, &y_coordinate, &location); // sending to locate function to return actual coordinates

			// Placing piece in specfic location:
			pieces[track].setPosition(x_coordinate, y_coordinate); // placing chess piece
			pieces[track].setScale(Vector2f(.1f, .1f)); // setting the scale of chess piece
			track++; // incrementing tracker to move onto next piece
		}
	}

	// Declarations for game logic:
	bool w_click = false; // boolean to determine if a white piece is clicked on
	Vector2f oldPosition, newPosition; // old and new position of a chess piece
	int w_track = 0; // integer to track specifc chess piece being evaluated

	// Initializing connection logic:
	vector<Vector2f> prevPosition(16); // vector to hold position of white pieces
	vector<Vector2f> p2Position(16); // vector to hold the position of black pieces
	socket.setBlocking(false); // if no data to receive, incoming socket information is blocked
	
	// Running game logic:
	while (window.isOpen()) // white the gui window is open
	{
		Vector2i position = Mouse::getPosition(window); // Vector2i to track the location of the mouse
		Event event; // instance of event window

		// Creating a copy of white pieces location:
		for (int i = 0; i < 16; i++)
		{
			prevPosition[i] = pieces[i].getPosition();
		}

		// Movement
		while (window.pollEvent(event)) // while specific game events are occuring
		{
			// Closing the window:
			if (event.type == Event::Closed)
			{
				window.close();
			}

			// Selecting a white piece: 
			if (event.type == Event::MouseButtonPressed)
			{
				if (event.key.code == Mouse::Left) // if the mouse is pressed using a left click
				{
					for (int i = 0; i < 16; i++) // going through each white piece and determining
					{                            // which white piece was clicked on (if any)
						if (pieces[i].getGlobalBounds().contains(position.x, position.y))
						{
							oldPosition = pieces[i].getPosition(); // setting oldposition to current piece position
							w_click = true; // telling boolean function that piece movement is now allowed
							w_track = i; // tracking the specifc piece for evaluation
						}
					}
				}
			}

			// Dropping white piece:
			if (event.type == Event::MouseButtonReleased) 
			{
				if (event.key.code == Mouse::Left) // if the left mouse button is released
				{
					w_click = false; // boolean function told to drop piece and stop moving it
					newPosition = pieces[w_track].getPosition(); // setting newPos to new position of the chess piece

					// Decision function:
					int legal; // integer to hold the decision of piece movement being legal or not
					rules(&w_track, &legal, &oldPosition, &newPosition); // sending pointer of chess piece, decision, old and newPos to rules func

					// Deciding if piece should be moved or not:
					if (legal == 1) // if the piece is legal
					{
						for (int i = 16; i < 32; i++) // determing if it has captured a black piece
						{
							if (pieces[w_track].getGlobalBounds().intersects(pieces[i].getGlobalBounds()))
							{
								if (i == 28) // if the captured piece is a king
								{
									window.close(); // closing the window and ending the game
								}
								pieces[i].setPosition(1000, 1000); // sending black piece off the board (capturing it)
							}
						}
					}		
					else if (legal == 0) // if the piece is not legal
					{
						pieces[w_track].setPosition(oldPosition.x, oldPosition.y); // sending chess piece back to original location
					}
				}
			}
		}
		// Re-positioning:
		if (w_click == true) // if chess piece is currently being clicked on
		{
			pieces[w_track].setPosition(position.x, position.y); // changing chess piece position (dragging it)
		}
	
		// Sending packet:
		vector<Packet> packet(16); // creating 16 packets (for each chess piece)
		for (int i = 0; i < 16; i++)
		{
			if (prevPosition[i] != pieces[i].getPosition()) // if previous chess piece location 
			{                                               // is not equal to updated location
				packet[i] << pieces[i].getPosition().x << pieces[i].getPosition().y; // inserting x and y coordinate into packet
				socket.send(packet[i]); // sending packet
			}
		}
		// Recieving packet
		int distributor = 0; // tracking the specific packet and p2Position
		for (int i = 31; i > 15; i--)
		{
			socket.receive(packet[distributor]); // receiving each packet
			if (packet[distributor] >> p2Position[distributor].x >> p2Position[distributor].y) // sending packet into new chess position
			{
				pieces[i].setPosition(p2Position[distributor]); // setting position of black chess pieces
			}
			distributor++; // incremeting distribution tracker
		}

		// Drawing:
		window.clear(); // clearing the gui
		window.draw(s_game); // drawing game background
		for (int i = 0; i < 32; i++) // drawing each chess piece
		{
			window.draw(pieces[i]);
		}
		window.display(); // displaying/refreshing the screen
	} // running game events end here
	return 0; // returning zero to end the program
}