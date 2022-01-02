#include <iostream>
#include "jokeMgr.h"

int main() {

    bool exit = false;

    jokeMgr Manager;

    joke joke1;
    joke1.setJoke("Interupting cow Moooooooo");
    joke1.setCategory("Knock Knock");

    std::string joke2text = "seamen semen makes more seamen";
    std::string joke2cat = "Sea";

    Manager.addJokeObject(joke1);

    Manager.addJoke(joke2text, joke2cat);

    size_t numjk = Manager.getNumJokes();
    size_t numcat = Manager.getNumCategories();

    std::cout << numjk;
    std::cout << "\n";
    std::cout << numcat;

    std::string caps = Manager.getCategories();
    std::cout << caps;

    joke joke3;

    joke3.setCategory("Sea");
    joke3.setJoke("Rum: A sailors best friend");

    Manager.addJokeObject(joke3);

    std::string seaJokes = Manager.printCategory(joke2cat);

    std::cout << seaJokes;

    numcat = Manager.getNumCategories();
    std::cout << numcat;

    size_t maxnumcat = Manager.getMaxCatSize();
    std::cout << "\n Max Cat:";
    std::cout << maxnumcat;

    joke joke4;
    joke4.setJoke("Blah");
    joke4.setCategory("new");
    Manager.addJokeObject(joke4);

    joke jok5;
    jok5.setCategory("newnew");
    jok5.setJoke("yurrrrp");
    Manager.addJokeObject(jok5);

    joke joke6;
    joke6.setCategory("yessir");
    joke6.setJoke("newnewnew");
    Manager.addJokeObject(joke6);

    joke joke7;
    joke7.setJoke("lizard");
    joke7.setCategory("xmas");
    Manager.addJokeObject(joke7);

    joke joke8;
    joke8.setJoke("apple");
    joke8.setCategory("cranberry");
    Manager.addJokeObject(joke8);

    numcat = Manager.getNumCategories();
    maxnumcat = Manager.getMaxCatSize();


    std::cout << "\n";
    std::cout << maxnumcat;
    std::cout << "\n";
    std::cout << numcat;

    std::string getJokesTest = Manager.getJokes();

    std::cout << "\n";
    std::cout << getJokesTest;
    std::cout << "\n";

    joke randomjk = Manager.getRandomJoke();

    std::cout << randomjk.toString();

    randomjk = Manager.getRandomJoke();
    std::cout << "\n";
    std::cout << randomjk.toString();
    randomjk = Manager.getRandomJoke();
    std::cout << "\n";
    std::cout << randomjk.toString();
    randomjk = Manager.getRandomJoke();
    std::cout << "\n";
    std::cout << randomjk.toString();
    randomjk = Manager.getRandomJoke();
    std::cout << "\n";
    std::cout << randomjk.toString();
    randomjk = Manager.getRandomJoke();
    std::cout << "\n";
    std::cout << randomjk.toString();

    joke joke18;
    joke18.setJoke("bloobs");
    joke18.setCategory("xmas");

    joke joke19;
    joke19.setJoke("scoobydoo");
    joke19.setCategory("xmas");

    joke joke20;
    joke20.setJoke("ssssssssss");
    joke20.setCategory("xmas");

    joke joke21;
    joke21.setJoke("sauce");
    joke21.setCategory("xmas");
    Manager.addJokeObject(joke21);


    std::string xmas = "xmas";

    randomjk = Manager.getRandomJokeInCat(xmas);
    std::cout << "\n";
    std::cout << randomjk.toString();
    randomjk = Manager.getRandomJokeInCat(xmas);
    std::cout << "\n";
    std::cout << randomjk.toString();
    randomjk = Manager.getRandomJokeInCat(xmas);
    std::cout << "\n";
    std::cout << randomjk.toString();
    randomjk = Manager.getRandomJokeInCat(xmas);
    std::cout << "\n";
    std::cout << randomjk.toString();

    std::cout << "\nTESTESTESt\n";
    getJokesTest = Manager.getJokes();
    std::cout << getJokesTest;
    std::cout << "\n";
    Manager.deleteJoke(joke21);
    getJokesTest = Manager.getJokes();
    std::cout << getJokesTest;
    std::cout << "\n";
    Manager.deleteJokes();
    numjk = Manager.getNumJokes();
    numcat = Manager.getNumCategories();
    std::cout << numjk;
    std::cout << numcat;





}
