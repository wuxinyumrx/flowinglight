#ifndef __STATUS_H__
#define __STATUS_H__

typedef enum status_t {
	STATUS_SUCCESS = 0,

	/* CAPTURE STATUS START */
	STATUS_CAPTURE_NULL_ARG = 100000,
	STATUS_CAPTURE_INVALID_ARG,
	/* CAPTURE STATUS END */
} status_t, *status_p;

#endif //__STATUS_H__