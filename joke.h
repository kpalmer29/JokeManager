//Author: Kavi Palmer
//Email: kavi.m.palmer@vanderbilt.edu
//Last Updated: 1/1/2022
//Category: Creates a joke object containing the text of a joke and the
//          joke's category. Offers a set of public functions to be used by
//          jokeMgr class


#ifndef UNTITLED_JOKE_H
#define UNTITLED_JOKE_H

#include <string>

class joke {
private:
    std::string category; //Joke Category: Sailor Joke, Knock Knock, etc.

    std::string jokeText; //The actual Joke

public:
    joke(); //ctor

    joke(const std::string &cat, const std::string &text); //alt ctor

    const std::string & getCategory() const;

    const std::string & getJoke() const;

    void setCategory(const std::string &newCat);

    void setJoke(const std::string &newJoke);

    void deleteJoke();

    virtual std::string toString() const;

    virtual bool equals(const joke &rhs) const; //compares text and category of jokes
                                                //to check if objects are equal



};


#endif //UNTITLED_JOKE_H
