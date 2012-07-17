/*************************************************
   Author: Annamalai Lakshmanan
   Added Color formats for Samsung OMX Decode
*************************************************/
enum {
  HAL_PIXEL_FORMAT_YCbCr_422_P         = 0x100,
  HAL_PIXEL_FORMAT_YCbCr_420_P         = 0x101,
  HAL_PIXEL_FORMAT_YCbCr_420_I         = 0x102,
  HAL_PIXEL_FORMAT_CbYCrY_422_I        = 0x103,
  HAL_PIXEL_FORMAT_CbYCrY_420_I        = 0x104,
  HAL_PIXEL_FORMAT_YCbCr_420_SP        = 0x105,
  HAL_PIXEL_FORMAT_YCrCb_422_SP        = 0x106,
  // support custom format for zero copy
  HAL_PIXEL_FORMAT_CUSTOM_YCbCr_420_SP = 0x110,
  HAL_PIXEL_FORMAT_CUSTOM_YCrCb_420_SP = 0x111,
  HAL_PIXEL_FORMAT_CUSTOM_YCbCr_420_SP_TILED = 0x112,
  HAL_PIXEL_FORMAT_CUSTOM_YCbCr_422_SP = 0x113,
  HAL_PIXEL_FORMAT_CUSTOM_YCrCb_422_SP = 0x114,
  HAL_PIXEL_FORMAT_CUSTOM_YCbCr_422_I = 0x115,
  HAL_PIXEL_FORMAT_CUSTOM_YCrCb_422_I = 0x116,
  HAL_PIXEL_FORMAT_CUSTOM_CbYCrY_422_I = 0x117,
  HAL_PIXEL_FORMAT_CUSTOM_CrYCbY_422_I = 0x118,
  HAL_PIXEL_FORMAT_CUSTOM_CbYCr_422_I  = 0x11B,
  HAL_PIXEL_FORMAT_CUSTOM_YCbCr_420_P_SBS_LR = 0x11C,
  HAL_PIXEL_FORMAT_CUSTOM_YCbCr_420_P_SBS_RL = 0x11D,
  HAL_PIXEL_FORMAT_CUSTOM_YCbCr_420_P_TB_LR = 0x11E,
  HAL_PIXEL_FORMAT_CUSTOM_YCbCr_420_P_TB_RL = 0x11F,
  HAL_PIXEL_FORMAT_CUSTOM_MAX
};