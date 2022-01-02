//Author: Kavi Palmer
//Email: kavi.m.palmer@vanderbilt.edu
//Last Updated: 1/1/2022
//Category: Creates a category object which are contained in an array used by jokeMgr
//          to keep track of the different joke categories which exist


#include "Category.h"

//ctor
Category::Category() : cat(""){}

//alt ctor
Category::Category(std::string &setCat) : cat(setCat){}


bool Category::checkCategory(std::string &newCat) {
    return newCat == cat;
}

//returns category
std::string Category::getCat() {
    return cat;
}

//set category for object
void Category::setCat(const std::string &newCat) {
    cat = newCat;
}

//returns string object of category
std::string Category::toString() {
    return cat;
}

//checks if rhs is equal to this category
bool Category::equals(const Category &rhs) const {
    return cat == rhs.cat;
}

bool Category::operator==(const Category &rhs) const {
    return cat == rhs.cat;
}