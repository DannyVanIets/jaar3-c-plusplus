#include <iostream>

using namespace std;

const unsigned char road_mask = 8;

bool has_road(unsigned char field)
{
	bool has_road = field & road_mask;
	return has_road;
}

void make_road(unsigned char &field)
{
	// Call by reference?
	field = field | road_mask;
}

bool mine_allowed(unsigned char field)
{
	return false;
}

int get_player(unsigned char unit)
{
	return 0;
}

int main()
{
	cout << has_road(4);
	
}