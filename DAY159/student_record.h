#pragma once
#include <string>
#include <vector>

struct StudentRecord {
    std::string name;
    std::vector<int> grades;
    double average() const {
        if (grades.empty()) return 0.0;
        int sum = 0;
        for (int g : grades) sum += g;
        return (double)sum / grades.size();
    }
};
