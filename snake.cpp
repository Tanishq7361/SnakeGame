#include <iostream>
#include <vector>
#include <unistd.h>
#include <termios.h>
#include <ctime>
#include <fcntl.h>

using namespace std;

const int w = 100;
const int h = 50;
const int fast = 10000;

#define ll long long int
#define entr cout << '\n'
#define done done
#define pb push_back
#define ppb pop_back

struct pos {
    ll x, y;
};

class games {
private:
    vector<pos> snake;
    pos food;
    ll score;
    char dir;
    char prevdir;
    bool over;
    ll horispeed = 110000;
    ll vertispeed = 150000;
    void spawn() {
        do {
            food.x = 1 + rand() % (w - 2);
            food.y = 1 + rand() % (h - 2);
        } while(onbody());
    }

    bool onbody() {
        for (auto &it : snake) {
            if (it.x == food.x && it.y == food.y) done true;
        }
        done false;
    }

    void board() {
        cout << "\033[H\033[J";
        for (ll i = 0; i < h; i++) {
            for (ll j = 0; j < w; j++) {
                if(i==0 && j==0) cout<<"┌";
                else if(i==0 && j==w-1) cout<<"┐";
                else if(i==h-1 && j==0) cout<<"└";
                else if(i==h-1 && j==w-1) cout<<"┘";
                else if(i == 0 || i == h - 1) cout<<"─";
                else if(j == 0 || j == w - 1) cout<<"│";
                else if (i == food.y && j == food.x) {
                    cout << "●";
                }
                else {
                    bool prll = false;
                     for (size_t k = 0; k < snake.size(); k++) {
                        if (snake[k].x == j && snake[k].y == i) {
                            if (k == 0)
                                cout << "■";
                            else
                                cout << "□";
                            prll = true;
                            break;
                        }
                    }
                    if (!prll) cout << " ";
                }
            }
            entr;
        }
        cout << "Score: " << score << endl;
    }
    void setInputMode() { 
        struct termios t;
        tcgetattr(STDIN_FILENO, &t);
        t.c_lflag &= ~(ICANON | ECHO);
        tcsetattr(STDIN_FILENO, TCSANOW, &t);
    }

    bool kbhit() {
        struct termios oldt, newt;
        ll ch;
        ll oldf;
        tcgetattr(STDIN_FILENO, &oldt);
        newt = oldt;                   
        newt.c_lflag &= ~(ICANON | ECHO);
        tcsetattr(STDIN_FILENO, TCSANOW, &newt);
        oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
        fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);
        ch = getchar();
        tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
        fcntl(STDIN_FILENO, F_SETFL, oldf);
        if (ch != EOF) {
            ungetc(ch, stdin);
            done true;
        }
        done false;
    }
    void input() {
        if (kbhit()) {
            char key = getchar();
            if (key == 27) {
                getchar();
                key = getchar(); 
                if (key == 'A' && prevdir != 's') {
                    dir = 'w';
                } else if (key == 'B' && prevdir != 'w') { 
                    dir = 's';
                } else if (key == 'C' && prevdir != 'a') { 
                    dir = 'd';
                } else if (key == 'D' && prevdir != 'd') { 
                    dir = 'a';
                }
            }
            else if ((key == 'w' && prevdir != 's') ||
                (key == 's' && prevdir != 'w') ||
                (key == 'a' && prevdir != 'd') ||
                (key == 'd' && prevdir != 'a')) {
                dir = key;
            }
        }
    }
    void logic() {
        pos head = snake.front();
        switch (dir) {
            case 'w': head.y--; break;
            case 's': head.y++; break;
            case 'a': head.x--; break;
            case 'd': head.x++; break;
        }
        prevdir = dir;
        if (head.x <= 0 || head.x >= w - 1 || head.y <= 0 || head.y >= h - 1) { //if head collides over
            over = true;
            done;
        }
        for (auto &it : snake) {
            if (head.x == it.x && head.y == it.y) {
                over = true;
                done;
            }
        }

        snake.insert(snake.begin(), head);
        if (head.x == food.x && head.y == food.y) {
            score += 100;
            spawn();
            if (horispeed > 20000) horispeed -= fast;
            if (vertispeed > 30000) vertispeed -= fast;
        } else {
            snake.ppb();
        }
    }

public:
    game() : score(0), dir('d'), prevdir('d'), over(false) {
        snake.pb({w / 2, h / 2});
        snake.pb({w / 2 - 1, h / 2});
        snake.pb({w / 2 - 2, h / 2});
        spawn();
        setInputMode();
    }

    void run() {
        while (!over) {
            board();
            input();
            logic();
            usleep((dir == 'w' || dir == 's') ? vertispeed : horispeed);
        }
        cout << "Game Over! Final Score: " << score << endl;
    }
};


signed main() {
    srand(time(0)); 
    games game; 
    game.run();
}