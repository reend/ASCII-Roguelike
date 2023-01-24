class Actor;
class Map;

class Engine {
public :
    enum GameStatus {
        STARTUP,
        IDLE,
        NEW_TURN,
        VICTORY,
        DEFEAT
    } gameStatus;
    
public :
    int fovRadius;
public :
    TCODList<Actor *> actors;
    Actor *player;
    Map *map;

    Engine();
    ~Engine();
    void update();
    void render();

};

extern Engine engine;
