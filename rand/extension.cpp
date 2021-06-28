#include "extension.h"
#include "bindings.h"

RandExtension extension;

SMEXT_LINK(&extension);

static cell_t GetRandomInt(IPluginContext *pCtx, const cell_t *params)
{
    cell_t nmin = params[1];
    cell_t nmax = params[2];

    return get_random_int(nmin, nmax);
}

static cell_t GetRandomFloat(IPluginContext *pCtx, const cell_t *params)
{
    float nmin = sp_ctof(params[1]);
    float nmax = sp_ctof(params[2]);

    return sp_ftoc(get_random_float(nmin, nmax));
}

const sp_nativeinfo_t MyNatives[] = {
    {"GetRandomInt", GetRandomInt},
    {"GetRandomFloat", GetRandomFloat},
    {NULL, NULL},
};

bool RandExtension::SDK_OnLoad(char *error, size_t maxlen, bool late)
{
    return true;
}

void RandExtension::SDK_OnUnload() {}

void RandExtension::SDK_OnAllLoaded()
{
    sharesys->AddNatives(myself, MyNatives);
}
