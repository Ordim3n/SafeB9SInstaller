#include "qlzcomp.h"
#include "ui.h"
#include "qff.h"
#include "common.h"
#include "frame_0_qlz.h"
#include "frame_1_qlz.h"
#include "frame_2_qlz.h"
#include "frame_3_qlz.h"
#include "frame_4_qlz.h"
#include "frame_5_qlz.h"

void ShowFrame(u8 frame)
{
	if(frame == 0) QlzDecompress(TOP_SCREEN, frame_0_qlz, 0);
	if(frame == 1) QlzDecompress(TOP_SCREEN, frame_1_qlz, 0);
	if(frame == 2) QlzDecompress(TOP_SCREEN, frame_2_qlz, 0);
	if(frame == 3) QlzDecompress(TOP_SCREEN, frame_3_qlz, 0);
	if(frame == 4) QlzDecompress(TOP_SCREEN, frame_4_qlz, 0);
	if(frame == 5) QlzDecompress(TOP_SCREEN, frame_5_qlz, 0);
}