#include <list> // library for list
#include <vector> // library for vector
#include <string> // library for string

using namespace std; // no need to use "std::"

class game { // game class

public:
	game(); //constructor without arguments
	game(list<int>, int, int, int); //constructor with arguments
	~game() {} //destructor

	list<int> numberslist; // game field
	int player; // player who takes turn "0" for player 1 and "1" for player 2
	int player_score1; // player 1 score
	int player_score2; // player 2 score

};

game::game() { // constructor without arguments
	numberslist = { 1, 0, 1, 1, 1 }; // default setting for field
	player = 0; // default player start (player 1)
	player_score1 = 15; // default player 1 score
	player_score2 = 15; // default player 2 score
}

game::game(list<int> plist, int pplayer, int pscore1, int pscore2) { // constructor with arguments
	numberslist = plist; // passing list from the arguments to numberslist variable
	player = pplayer; // passing starting player from the arguments to player variable
	player_score1 = pscore1; // passing starting player 1 score from the arguments to player 1 score variable
	player_score2 = pscore2; // passing starting player 2 score from the arguments to player 2 score variable
}


game makemove(const game& consttempgame, const pair<int, int>& move) { // making a move passing the game attributes and the actual move with a pair integer

	game tempgame; // creating temporary game object
	tempgame.numberslist = consttempgame.numberslist; // assing the field state
	tempgame.player = consttempgame.player; // passing the player who moves value
	tempgame.player_score1 = consttempgame.player_score1; // passing the player 1 score
	tempgame.player_score2 = consttempgame.player_score2; // passing the player 2 score

	int number1 = *(next(tempgame.numberslist.begin(), move.first)); // inserting the field value of first position 1 or 0
	int number2 = *(next(tempgame.numberslist.begin(), move.second)); // inserting the field value of second position 1 or 0

	if (number1 == 1 && number2 == 1) { // checking if both values are equal to 1

		*(next(tempgame.numberslist.begin(), move.second)) = 1; // setting the second value to 1 acording to game rules
		if (tempgame.player == 1) { // checking if it is player 2 move
			tempgame.player_score1 -= 1; // adjusting the score according to game rules
		}
		else {
			tempgame.player_score2 -= 1; // adjusting the score according to game rules
		}

	}
	else if ((number1 == 0)&&(number2 == 0)) { // checking if both values are equal to 0

		*(next(tempgame.numberslist.begin(), move.second)) = 0; // setting the second value to 0 acording to game rules
		if (tempgame.player == 1) { // checking if it is player 2 move
			tempgame.player_score1 -= 1; // adjusting the score according to game rules
		}
		else { // it is player 1 move since the player variable is not equal to 1
			tempgame.player_score2 -= 1; // adjusting the score according to game rules
		}

	}
	else if ((number1 == 1)&&(number2 == 0)) { // checking if first value is equal to 1 and second value is equal to 0

		*(next(tempgame.numberslist.begin(), move.second)) = 1; // setting the second value to 1 acording to game rules
		if (tempgame.player == 1) { // checking if it is player 2 move
			tempgame.player_score2 -= 2; // adjusting the score according to game rules
		}
		else { // it is player 1 move since the player variable is not equal to 1
			tempgame.player_score1 -= 2; // adjusting the score according to game rules
		}

	}
	else if ((number1 == 0)&&(number2 == 1)) { // checking if first value is equal to 0 and second value is equal to 1

		*(next(tempgame.numberslist.begin(), move.second)) = 0; // setting the second value to 0 acording to game rules
		if (tempgame.player == 1) { // checking if it is player 2 move
			tempgame.player_score2 -= 2; // adjusting the score according to game rules
		}
		else { // it is player 1 move since the player variable is not equal to 1
			tempgame.player_score1 -= 2; // adjusting the score according to game rules
		}

	}
	tempgame.numberslist.erase(next(tempgame.numberslist.begin(), move.first)); // removing the first number in order to update game field according to game rules
	tempgame.player = 1 - tempgame.player; // switching to oposite player move

	return tempgame; // returning the game state
}

vector<pair<int, int>> getmoves(const list<int>& numberslist) { // making a getter for available moves passing field state

	vector<pair<int, int>> moves; // defining a vector with two integer pair fields

	for (list<int>::const_iterator iterator = numberslist.begin(); iterator != prev(numberslist.end()); ++iterator) { // iterating the field values

		int i = distance(numberslist.begin(), iterator); // setting up distance according to iterator value
		int number1 = *iterator; // inserting the field value of first position 1 or 0
		int number2 = *(next(iterator)); // inserting the field value of second position 1 or 0

		if (number1 == 1 && number2 == 1) { // checking if both values are equal to 1
			moves.emplace_back(i, i + 1); // pushing the available move into vector
		}
		else if (number1 == 0 && number2 == 0) { // checking if both values are equal to 0
			moves.emplace_back(i, i + 1); // pushing the available move into vector
		}
		else if (number1 == 1 && number2 == 0) { // checking if first value is equal to 1 and second value is equal to 0
			moves.emplace_back(i, i + 1); // pushing the available move into vector
		}
		else if (number1 == 0 && number2 == 1) { // checking if first value is equal to 0 and second value is equal to 1
			moves.emplace_back(i, i + 1); // pushing the available move into vector
		}

	}
	return moves; // returning the available moves
}

int bestscore(const game& tempgame) { // a function for evaluating game state
	return tempgame.player_score1 - tempgame.player_score2; // evaluating game state the player 1 is maximizes and player 2 is minimizer
}

int minmax(const game& tempgame, int level) { // min max algorithm

	if (level < 1) { // checking if depth is lower than 0
		return bestscore(tempgame); // returning player 1 score minus player 2 score as best score
	}

	vector<pair<int, int>> moves = getmoves(tempgame.numberslist);

	if (moves.empty()) { // checking if there are any available moves
		return bestscore(tempgame); // returning player 1 score minus player 2 score as best score
	}

	if (tempgame.player == 0) { // checking if it is player 1 turn(maximizer)
		int bestscore = -999; // setting low value in order to make first value always be lower than this
		for (const pair<int, int>& move : moves) { // iterating through available moves
			game newtempgame = makemove(tempgame, move); // creating new temporary game object
			int score = minmax(newtempgame, level - 1); // using min max algorithm to find best score
			bestscore = max(bestscore, score); // taking max value into best score
		}
		return bestscore; // returning the best score
	}
	else { // this means it is player 2 turn(minimizer)
		int bestscore = 999; // setting high value in order to make first value always be higher than this
		for (const pair<int, int>& move : moves) { // iterating through available moves
			game newtempgame = makemove(tempgame, move);  // creating new temporary game object
			int score = minmax(newtempgame, level - 1); // using min max algorithm to find best score
			bestscore = min(bestscore, score); // taking min value into best score
		}
		return bestscore; // returning the best score
	}

}