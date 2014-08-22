#include <thread>
#include "fann.h"
#include "parallel_fann.h"
#include "settings.h"

int main()
{
    struct fann *ann = fann_create_standard_array(num_layers, &input_layers[0]);
    struct fann_train_data * data = fann_read_train_from_file(training_file.c_str());

    fann_set_activation_function_hidden(ann, FANN_SIGMOID_SYMMETRIC);
    fann_set_activation_function_output(ann, FANN_SIGMOID_SYMMETRIC);


    for(int i=0; i <= max_epochs; i++) {
        float error = fann_train_epoch_irpropm_parallel(ann, data, std::thread::hardware_concurrency());
        printf("Epochs     %8d. Current error: %.10f\n", i, error);
    }

    fann_save(ann, network_file.c_str());
    fann_destroy(ann);

    return 0;
}
