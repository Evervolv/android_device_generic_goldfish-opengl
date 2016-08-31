// Generated Code - DO NOT EDIT !!
// generated by 'emugen'
#ifndef __renderControl_client_ftable_t_h
#define __renderControl_client_ftable_t_h


static const struct _renderControl_funcs_by_name {
	const char *name;
	void *proc;
} renderControl_funcs_by_name[] = {
	{"rcGetRendererVersion", (void*)rcGetRendererVersion},
	{"rcGetEGLVersion", (void*)rcGetEGLVersion},
	{"rcQueryEGLString", (void*)rcQueryEGLString},
	{"rcGetGLString", (void*)rcGetGLString},
	{"rcGetNumConfigs", (void*)rcGetNumConfigs},
	{"rcGetConfigs", (void*)rcGetConfigs},
	{"rcChooseConfig", (void*)rcChooseConfig},
	{"rcGetFBParam", (void*)rcGetFBParam},
	{"rcCreateContext", (void*)rcCreateContext},
	{"rcDestroyContext", (void*)rcDestroyContext},
	{"rcCreateWindowSurface", (void*)rcCreateWindowSurface},
	{"rcDestroyWindowSurface", (void*)rcDestroyWindowSurface},
	{"rcCreateColorBuffer", (void*)rcCreateColorBuffer},
	{"rcOpenColorBuffer", (void*)rcOpenColorBuffer},
	{"rcCloseColorBuffer", (void*)rcCloseColorBuffer},
	{"rcSetWindowColorBuffer", (void*)rcSetWindowColorBuffer},
	{"rcFlushWindowColorBuffer", (void*)rcFlushWindowColorBuffer},
	{"rcMakeCurrent", (void*)rcMakeCurrent},
	{"rcFBPost", (void*)rcFBPost},
	{"rcFBSetSwapInterval", (void*)rcFBSetSwapInterval},
	{"rcBindTexture", (void*)rcBindTexture},
	{"rcBindRenderbuffer", (void*)rcBindRenderbuffer},
	{"rcColorBufferCacheFlush", (void*)rcColorBufferCacheFlush},
	{"rcReadColorBuffer", (void*)rcReadColorBuffer},
	{"rcUpdateColorBuffer", (void*)rcUpdateColorBuffer},
	{"rcOpenColorBuffer2", (void*)rcOpenColorBuffer2},
	{"rcCreateClientImage", (void*)rcCreateClientImage},
	{"rcDestroyClientImage", (void*)rcDestroyClientImage},
	{"rcSelectChecksumHelper", (void*)rcSelectChecksumHelper},
	{"rcCreateColorBufferPuid", (void*)rcCreateColorBufferPuid},
	{"rcOpenColorBuffer2Puid", (void*)rcOpenColorBuffer2Puid},
	{"rcCloseColorBufferPuid", (void*)rcCloseColorBufferPuid},
	{"rcCreateSyncKHR", (void*)rcCreateSyncKHR},
	{"rcClientWaitSyncKHR", (void*)rcClientWaitSyncKHR},
	{"rcFlushWindowColorBufferAsync", (void*)rcFlushWindowColorBufferAsync},
	{"rcCreateClientImagePuid", (void*)rcCreateClientImagePuid},
	{"rcDestroyClientImagePuid", (void*)rcDestroyClientImagePuid},
	{"rcDestroySyncKHR", (void*)rcDestroySyncKHR},
};
static const int renderControl_num_funcs = sizeof(renderControl_funcs_by_name) / sizeof(struct _renderControl_funcs_by_name);


#endif
