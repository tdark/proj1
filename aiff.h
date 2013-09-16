/*
 * aiff.h
 *
 *  Created on: Sep 16, 2013
 *      Author: E
 */

#ifndef AIFF_H_
#define AIFF_H_
#endif /* AIFF_H_ */

typedef struct AIFF_header
{
	char file_name[];		/*File name*/
	int file_type;			/*AIFF*/
	int sample_rate;		/* samples/snd_length */
	int bit_depth;			/*8, 16, 32 bits allowed*/
	int num_channels;		/* <= 32 channels allowed */
	int num_samples;		/* Number of samples */
	int snd_length;			/* In seconds */
} AIFF_head;
