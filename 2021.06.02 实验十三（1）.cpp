#include <iostream>
class Music {
public:
    Music() {std::cout << "Music default constructor" << std::endl;}
    ~Music() {std::cout << "Music default destructor" << std::endl;}
    virtual void sing() {std::cout << "Singing music" << std::endl;}
    virtual void listen() = 0;
};

class RockMusic :public Music {
public:
    RockMusic() {std::cout << "Rock music default constructor" << std::endl;}
    ~RockMusic() {std::cout << "Rock music default destructor" << std::endl;}
    void sing() {std::cout << "Singing rock music" << std::endl;}
    void listen() {std::cout << "Listening rock music" << std::endl;}
};

int main()
{
    RockMusic rockMusic;
    Music* pMusic = &rockMusic;
    std::cout << "rockMusic.sing():\n\t";
    rockMusic.sing();
    std::cout << "rockMusic.listen():\n\t";
    rockMusic.listen();
    std::cout << "pMusic->sing():\n\t";
    pMusic->sing();
    std::cout << "pMusic->listen():\n\t";
    pMusic->listen();
    return 0;
}