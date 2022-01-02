//Author: Kavi Palmer
//Email: kavi.m.palmer@vanderbilt.edu
//Last Updated: 1/1/2022
//Category: Creates a joke object containing the text of a joke and the
//          joke's category. Offers a set of public functions to be used by
//          jokeMgr class

#include "joke.h"
#include <iostream>

//Default Constructor
joke::joke() : category(""), jokeText(""){}

//Alt Ctor
joke::joke(const std::string &cat, const std::string &text) : category(cat), jokeText(text){}

//Returns the category of the joke as a string object
const std::string& joke::getCategory() const {
    return category;
}

//returns the joke as a string object
const std::string& joke::getJoke() const {
    return jokeText;
}

//sets the category of this joke object
void joke::setCategory(const std::string &newCat) {
    category = newCat;
}

//sets teh joke of this joke object
void joke::setJoke(const std::string &newJoke) {
    jokeText = newJoke;
}

//checks if joke object rhs is equal to this object
bool joke::equals(const joke &rhs) const {
    return jokeText == rhs.jokeText && category == rhs.category;
}

//toString() function for this object
//returns a string which contains the category
//and the joke
std::string joke::toString() const {
    return category + ": " + jokeText;
}

//sets the category and joke to empty strings
void joke::deleteJoke() {
    category = "";
    jokeText = "";
}