LOCAL_PATH:= $(call my-dir)

#
# libmediaplayerservice
#

include $(CLEAR_VARS)

ifeq ($(BOARD_USE_YAMAHAPLAYER),true)
    LOCAL_SHARED_LIBRARIES += libmediayamahaservice
endif

ifeq ($(BOARD_USE_SECTVOUT),true)
    LOCAL_SHARED_LIBRARIES += libTVOut
endif

LOCAL_SRC_FILES:=               \
    ActivityManager.cpp         \
    Crypto.cpp                  \
    MediaRecorderClient.cpp     \
    MediaPlayerService.cpp      \
    MetadataRetrieverClient.cpp \
    TestPlayerStub.cpp          \
    MidiMetadataRetriever.cpp   \
    MidiFile.cpp                \
    StagefrightPlayer.cpp       \
    StagefrightRecorder.cpp

LOCAL_SHARED_LIBRARIES :=     		\
	libcutils             			\
	libutils              			\
	libbinder             			\
	libvorbisidec         			\
	libsonivox            			\
	libmedia              			\
	libmedia_native       			\
	libcamera_client      			\
	libstagefright        			\
	libstagefright_omx    			\
	libstagefright_foundation       \
	libgui                          \
	libdl                           \
	libaah_rtp

LOCAL_STATIC_LIBRARIES := \
        libstagefright_nuplayer                 \
        libstagefright_rtsp                     \

LOCAL_C_INCLUDES :=                                               \
	$(call include-path-for, graphics corecg)                       \
	$(TOP)/frameworks/av/media/libstagefright/include               \
	$(TOP)/frameworks/av/media/libstagefright/rtsp                  \
	$(TOP)/frameworks/native/include/media/openmax                  \
	$(TOP)/external/tremolo/Tremolo                                 \

LOCAL_MODULE:= libmediaplayerservice

include $(BUILD_SHARED_LIBRARY)

include $(call all-makefiles-under,$(LOCAL_PATH))

