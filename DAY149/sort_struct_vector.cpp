#include <iostream>
#include <vector>
#include <algorithm>

struct Player {
    std::string name;
    int score;
};

int main() {
    std::vector<Player> leaderboard = {{"Dave", 85}, {"Alice", 99}, {"Bob", 92}};
    std::sort(leaderboard.begin(), leaderboard.end(), [](const Player &a, const Player &b) {
        return a.score > b.score; // high score first
    });
    for (const auto &p : leaderboard) std::cout << p.name << ": " << p.score << "\n";
    return 0;
}
