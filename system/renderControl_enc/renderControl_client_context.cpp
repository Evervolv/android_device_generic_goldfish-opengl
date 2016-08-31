// Generated Code - DO NOT EDIT !!
// generated by 'emugen'


#include <string.h>
#include "renderControl_client_context.h"


#include <stdio.h>

int renderControl_client_context_t::initDispatchByName(void *(*getProc)(const char *, void *userData), void *userData)
{
	rcGetRendererVersion = (rcGetRendererVersion_client_proc_t) getProc("rcGetRendererVersion", userData);
	rcGetEGLVersion = (rcGetEGLVersion_client_proc_t) getProc("rcGetEGLVersion", userData);
	rcQueryEGLString = (rcQueryEGLString_client_proc_t) getProc("rcQueryEGLString", userData);
	rcGetGLString = (rcGetGLString_client_proc_t) getProc("rcGetGLString", userData);
	rcGetNumConfigs = (rcGetNumConfigs_client_proc_t) getProc("rcGetNumConfigs", userData);
	rcGetConfigs = (rcGetConfigs_client_proc_t) getProc("rcGetConfigs", userData);
	rcChooseConfig = (rcChooseConfig_client_proc_t) getProc("rcChooseConfig", userData);
	rcGetFBParam = (rcGetFBParam_client_proc_t) getProc("rcGetFBParam", userData);
	rcCreateContext = (rcCreateContext_client_proc_t) getProc("rcCreateContext", userData);
	rcDestroyContext = (rcDestroyContext_client_proc_t) getProc("rcDestroyContext", userData);
	rcCreateWindowSurface = (rcCreateWindowSurface_client_proc_t) getProc("rcCreateWindowSurface", userData);
	rcDestroyWindowSurface = (rcDestroyWindowSurface_client_proc_t) getProc("rcDestroyWindowSurface", userData);
	rcCreateColorBuffer = (rcCreateColorBuffer_client_proc_t) getProc("rcCreateColorBuffer", userData);
	rcOpenColorBuffer = (rcOpenColorBuffer_client_proc_t) getProc("rcOpenColorBuffer", userData);
	rcCloseColorBuffer = (rcCloseColorBuffer_client_proc_t) getProc("rcCloseColorBuffer", userData);
	rcSetWindowColorBuffer = (rcSetWindowColorBuffer_client_proc_t) getProc("rcSetWindowColorBuffer", userData);
	rcFlushWindowColorBuffer = (rcFlushWindowColorBuffer_client_proc_t) getProc("rcFlushWindowColorBuffer", userData);
	rcMakeCurrent = (rcMakeCurrent_client_proc_t) getProc("rcMakeCurrent", userData);
	rcFBPost = (rcFBPost_client_proc_t) getProc("rcFBPost", userData);
	rcFBSetSwapInterval = (rcFBSetSwapInterval_client_proc_t) getProc("rcFBSetSwapInterval", userData);
	rcBindTexture = (rcBindTexture_client_proc_t) getProc("rcBindTexture", userData);
	rcBindRenderbuffer = (rcBindRenderbuffer_client_proc_t) getProc("rcBindRenderbuffer", userData);
	rcColorBufferCacheFlush = (rcColorBufferCacheFlush_client_proc_t) getProc("rcColorBufferCacheFlush", userData);
	rcReadColorBuffer = (rcReadColorBuffer_client_proc_t) getProc("rcReadColorBuffer", userData);
	rcUpdateColorBuffer = (rcUpdateColorBuffer_client_proc_t) getProc("rcUpdateColorBuffer", userData);
	rcOpenColorBuffer2 = (rcOpenColorBuffer2_client_proc_t) getProc("rcOpenColorBuffer2", userData);
	rcCreateClientImage = (rcCreateClientImage_client_proc_t) getProc("rcCreateClientImage", userData);
	rcDestroyClientImage = (rcDestroyClientImage_client_proc_t) getProc("rcDestroyClientImage", userData);
	rcSelectChecksumHelper = (rcSelectChecksumHelper_client_proc_t) getProc("rcSelectChecksumHelper", userData);
	rcCreateColorBufferPuid = (rcCreateColorBufferPuid_client_proc_t) getProc("rcCreateColorBufferPuid", userData);
	rcOpenColorBuffer2Puid = (rcOpenColorBuffer2Puid_client_proc_t) getProc("rcOpenColorBuffer2Puid", userData);
	rcCloseColorBufferPuid = (rcCloseColorBufferPuid_client_proc_t) getProc("rcCloseColorBufferPuid", userData);
	rcCreateSyncKHR = (rcCreateSyncKHR_client_proc_t) getProc("rcCreateSyncKHR", userData);
	rcClientWaitSyncKHR = (rcClientWaitSyncKHR_client_proc_t) getProc("rcClientWaitSyncKHR", userData);
	rcFlushWindowColorBufferAsync = (rcFlushWindowColorBufferAsync_client_proc_t) getProc("rcFlushWindowColorBufferAsync", userData);
	rcCreateClientImagePuid = (rcCreateClientImagePuid_client_proc_t) getProc("rcCreateClientImagePuid", userData);
	rcDestroyClientImagePuid = (rcDestroyClientImagePuid_client_proc_t) getProc("rcDestroyClientImagePuid", userData);
	rcDestroySyncKHR = (rcDestroySyncKHR_client_proc_t) getProc("rcDestroySyncKHR", userData);
	return 0;
}

