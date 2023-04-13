#ifndef _DISTANCE_H_
#define _DISTANCE_H_

#include <ostream>

using namespace std;

class Distance
{
public://private:

    int voet;
    int roede;

public:
    ~Distance();
	
    Distance& operator+=(const Distance&);
    Distance(int voet, int roede);

};

ostream& operator<<(ostream& os, const Distance);
Distance operator+(const Distance&, const Distance&);


#endif  // _DISTANCE_H_
