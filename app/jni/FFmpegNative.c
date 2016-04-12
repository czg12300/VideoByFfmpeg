//
// Created by jakechen on 2016/4/12.
//

#include <math.h>
#include <libavutil/opt.h>
#include <libavcodec/avcodec.h>
#include <libavutil/channel_layout.h>
#include <libavutil/common.h>
#include <libavutil/imgutils.h>
#include <libavutil/mathematics.h>
#include <libavutil/samplefmt.h>

#include "cn_dennishucd_FFmpegNative.h"

#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cn_dennishucd_FFmpegNative
 * Method:    avcodec_find_decoder
 * Signature: (I)I
 */
Java_cn_jake_jnicore_JniVideo_getRotate(JNIEnv *env, jobject obj, jstring path)
{
	AVCodec *codec = NULL;

	/* register all formats and codecs */
	av_register_all();

	codec = avcodec_find_decoder(codecID);

	if (codec != NULL)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

#ifdef __cplusplus
}
#endif
