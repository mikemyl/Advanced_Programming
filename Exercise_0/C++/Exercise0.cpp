#include <iostream>
#include <vector>
#include <cstdlib>
#include <map>

int main() {
	std::vector<std::string> lines;
	std::map<int, std::map<int, int> > map;

	for (std::string line; std::getline(std::cin, line);) {
		int pipe_pos = line.find_first_of('|');
		int number = atoi((line.substr(0, pipe_pos).c_str()));
		int value = atoi((line.substr(pipe_pos + 1).c_str()));
		lines.push_back(line);
		if (!(map.find(number) == map.end())) {
			std::map<int, int> *map_ref = &map[number];
			if ((*map_ref).find(value) == (*map_ref).end()) {
				(*map_ref)[value] = (*map_ref).size();
			}
		} else {
			std::map<int, int> *new_map = new std::map<int, int>;
			(*new_map)[value] = 1;
			map[number] = *new_map;
		}
	}

	for (std::vector<std::string>::const_iterator line = lines.begin();
			line != lines.end(); ++line) {
		int pipe_pos = (*line).find_first_of('|');
		int number = atoi(((*line).substr(0, pipe_pos).c_str()));
		int value = atoi(((*line).substr(pipe_pos + 1).c_str()));
		if (map[number].size() == 1)
			continue;
		std::cout << *line << "[" << map[number][value] << " of "
				<< map[number].size() << "]\n";
	}
}
