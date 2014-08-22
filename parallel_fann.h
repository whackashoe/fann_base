/*
 * parallel_FANN.h
 *
 *     Author: Alessandro Pietro Bardelli
 */
#ifndef PARALLEL_FANN_H_
#define PARALLEL_FANN_H_

#include <fann.h>

FANN_EXTERNAL float FANN_API fann_train_epoch_batch_parallel(struct fann *ann, struct fann_train_data *data, const unsigned int threadnumb);

FANN_EXTERNAL float FANN_API fann_train_epoch_irpropm_parallel(struct fann *ann, struct fann_train_data *data, const unsigned int threadnumb);

FANN_EXTERNAL float FANN_API fann_train_epoch_quickprop_parallel(struct fann *ann, struct fann_train_data *data, const unsigned int threadnumb);

FANN_EXTERNAL float FANN_API fann_train_epoch_sarprop_parallel(struct fann *ann, struct fann_train_data *data, const unsigned int threadnumb);

FANN_EXTERNAL float FANN_API fann_train_epoch_incremental_mod(struct fann *ann, struct fann_train_data *data);

FANN_EXTERNAL float FANN_API fann_test_data_parallel(struct fann *ann, struct fann_train_data *data, const unsigned int threadnumb);

#endif /* __PARALLEL_FANN_H_ */
