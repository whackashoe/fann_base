#include <thread>
#include "fann.h"
#include "parallel_fann.h"
#include "settings.h"

int main()
{
    struct fann *ann = fann_create_from_file(network_file.c_str());
    struct fann_train_data *data = fann_read_train_from_file(testing_file.c_str());

    fann_reset_MSE(ann);

    fann_test_data(ann, data);

    printf("Mean Square Error: %f\n", fann_get_MSE(ann));
    
    fann_destroy_train(data);
    fann_destroy(ann);

    return 0;
}
