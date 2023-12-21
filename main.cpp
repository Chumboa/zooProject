#include <iostream>
#include "Zoo.h"
#include "Tiger.h"
#include "Shark.h"
#include "Date.h"
int main() {
    Zoo zoo;

    Tiger t1("Simba", Date(10, 9, 2015), 150, "Bengal");
    Tiger t3("Neyla", Date(10, 9, 2018), 150, "Bengal");
    Tiger t2("Asha", Date(10, 9, 2000), 150, "Bengal");
    Shark s1("Jari", Date(11, 10, 2020), 20, "Megadolon");
    Shark s2("Jere", Date(29, 2, 2001), 20, "White Shark");

    zoo.add(&t1);
    std::cout << "Added animal: Tiger Simba" << std::endl;
    zoo.add(&t2);
    std::cout << "Added animal: Tiger Neyla" << std::endl;
    zoo.add(&t3);
    std::cout << "Added animal: Tiger Asha" << std::endl;
    zoo.add(&s1);
    std::cout << "Added animal: Shark Jari" << std::endl;
    zoo.remove("Simba");
    std::cout << "Removed animal: Tiger Simba" << std::endl;
    zoo.add(&s2);

    zoo.printSortedByName();

    zoo.printSortedByAge();
    s2.move();
    t1.move();
    t1.utter();
    s2.utter();
    return 0;
}