// SynTHBloK-Kick: registers this plugin's modules.
#include "plugin.hpp"

Plugin* pluginInstance;

extern Model* modelSynTHBloKKick;

void init(Plugin* p) {
    pluginInstance = p;
    p->addModel(modelSynTHBloKKick);
}
