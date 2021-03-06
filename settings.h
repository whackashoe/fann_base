#ifndef SETTINGS_H

#include <vector>
#include <string>

const std::string training_file = "train.data";
const std::string testing_file = "test.data";
const std::string network_file  = "train.net";

constexpr int sets = 10; //how many sets of input / output pairs to generate

constexpr float desired_error = (const float) 0.01;
constexpr unsigned int max_epochs = 100; //how many times to train through entirety of training data
constexpr unsigned int epochs_between_reports = 1;

constexpr unsigned int num_input = 8;
constexpr unsigned int num_output = 2;

//input amount, 5, 3, output amount for layer sizes
std::vector<unsigned int> input_layers { num_input, 5, 3, num_output };
#endif
