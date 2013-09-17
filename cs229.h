/*
 * cs229.h
 *
 *  Created on: Sep 16, 2013
 *      Author: E
 */

#ifndef CS229_H_
#define CS229_H_


typedef struct CS229_header
{
	char file_name[];		/*File name*/
	int file_type;			/*CS229*/
	int sample_rate;		/* samples/snd_length */
	int bit_depth;			/*8, 16, 32 bits allowed*/
	int num_channels;		/* <= 32 channels allowed */
	int num_samples;		/* Number of samples */
	int snd_length;			/* In seconds */
} CS229_head;

#endif /* CS229_H_ */


