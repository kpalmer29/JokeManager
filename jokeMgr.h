//Author: Kavi Palmer
//Email: kavi.m.palmer@vanderbilt.edu
//Last Updated: 1/2/2022
//Category: jokeMgr uses two dynamic arrays to store and retrieve joke objects
//          and to keep track of the different categories

#ifndef UNTITLED_JOKEMGR_H
#define UNTITLED_JOKEMGR_H

#include "joke.h"
#include "Category.h"

const size_t DEFAULT_SIZE_Joke = 20; //Default size of joke manager array
const size_t DEFAULT_SIZE_CATEGORY = 5;

class jokeMgr {
private:

    size_t maxSizeJoke; //max size of array
    size_t currSizeJoke; //current number of jokes in array
    joke* jokeArray; //dynamic array of jokes

    size_t maxSizeCat;
    size_t currSizeCat;
    Category* categoryArray; //dynamic array of categories

public:

    jokeMgr(); //default ctor

    jokeMgr(size_t initSizeJoke, size_t initSizeCat); //alt ctor

    jokeMgr(const jokeMgr &rhs); //copy ctor

    const jokeMgr &operator=(const jokeMgr &rhs);

    ~jokeMgr(); //Destructor

    size_t getNumJokes() const;

    size_t getMaxJokeSize() const;

    void addJokeObject(const joke &j);

    void addJoke(std::string &j, std::string &cat);

    void deleteJoke(const joke &j); //deletes joke if it exists, error if doesn't
                                    //if last joke in category, deletes category
    void deleteJokes(); //deletes all jokes

    void deleteCategory(const Category &cat);

    std::string getJokes(); //print out all jokes

    std::string getCategories();

    joke getRandomJoke(); //gets random joke

    joke getRandomJokeInCat(std::string &cat); //get random joke in category

    size_t getNumCategories() const;

    size_t getMaxCatSize() const; //get max number of categories

    bool addCategory(const Category &cat); //true if done, false if cat exists

    bool categoryObjectExists(const Category &cat);

    bool categoryExists(std::string &cat);

    bool jokeExists(const joke &jk);

    std::string printCategory(std::string &cat); //prints all jokes of certain category
                                                //throws error if cat does not exist
    void growJokeArray(size_t newSize);

    void growCatArray(size_t newSize);

    void shiftJokeArray(size_t index); //helper function for deleted joke.

    void shiftCategoryArray(size_t index);
};


#endif //UNTITLED_JOKEMGR_H
