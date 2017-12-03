#ifndef NODE_H
#define NODE_H

//****************************************************************************************************

#include<vector>
#include<string>

//****************************************************************************************************

using namespace std;

struct Ballot
{
	vector<string> votes;

	void add(string s)
	{
		votes.push_back(s);
	}

	void remove()
	{
		votes.erase(votes.begin());
	}
};

#endif
