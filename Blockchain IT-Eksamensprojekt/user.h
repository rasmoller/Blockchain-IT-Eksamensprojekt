#pragma once
#include "data.h"
#include "node.h"

class user {
private:
	static int nUsers;
	const int userID;


	user();
	void connectToNode(node n);
	bool checkData(data d1, data d2);
};