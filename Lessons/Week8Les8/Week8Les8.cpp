#include <iostream>

/* 1|0|0|1|0|1|0|0
 * First and second are for the terrain.
 * Third is village
 * Fourth is resource.
 * Fifth is road
 * 6th is extraction
 * 7th is treasure
 * 8 is unit.
 */

bool has_road(unsigned char field) {
    //char road_mask = 8;
    bool result = field & road_mask;
    return result;
}

void make_road(unsigned char field) {
    // Call by reference.
    //char road_mask = 8;
    mask |= 1 << field;
}

bool mine_allowed(unsigned char field) {
    //char extraction_mask = 4;
    bool result = field & extraction_mask;
    return result;
}

int get_player(unsigned char unit) {

}

int main()
{
    std::cout << "Hello World!\n";
}