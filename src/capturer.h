#ifndef __CAPTURER_H__
#define __CAPTURER_H__

struct capturer_t;
typedef struct capturer_t capturer_t;
typedef struct capturer_t capturer_p;

typedef enum capturer_frame_pixel_format_t {
	CAPTURER_FRAME_PIXEL_FORMAT_YUYV_422_8BIT_PACKED = 1
} capturer_frame_pixel_format_t;

typedef struct capturer_frame_t {
	int32_t with;
	int32_t height;
	capturer_frame_pixel_format_t pixel_format;
} capturer_frame_t, *capturer_frame_p;

typedef struct capturer_observer_t {
	void (*on_frame)(capturer_frame_p frame);
} capture_observer_t, *capture_observer_p;

status_t capturer_init(capturer_p *catpurer, capture_observer_p capture_observer);

status_t capturer_deinit(capturer_p *capturer);

status_t capturer_start();

status_t capturer_stop();

#endif //__CAPTURER_H__