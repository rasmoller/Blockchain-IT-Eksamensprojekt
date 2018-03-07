#pragma once
#include "data.h"
#include "node.h"

class user {
private:
	const int userID;


	user(int nUsers);
	void connectToNode(node n);
	bool checkData(data d1, data d2);
};