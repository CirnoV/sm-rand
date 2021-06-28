#ifndef _INCLUDE_RAND_SOURCEMOD_EXTENSION_
#define _INCLUDE_RAND_SOURCEMOD_EXTENSION_

#include "smsdk_ext.h"

class RandExtension : public SDKExtension
{
public: // SDKExtension
    virtual bool SDK_OnLoad(char *error, size_t maxlen, bool late);
    virtual void SDK_OnUnload();
    virtual void SDK_OnAllLoaded();
};

#endif // _INCLUDE_RAND_SOURCEMOD_EXTENSION_
