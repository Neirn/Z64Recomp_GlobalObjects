#ifndef __REPOINT_H__
#define __REPOINT_H__
#include "global.h"

void Repoint_setFieldOrDangeonKeep(ObjectId id);

void Repoint_unsetFieldOrDangeonKeep();

void ZGlobalObj_globalizeDL(void *obj, Gfx *segmentedPtr);

void ZGlobalObj_globalizeLodLimbSkeleton(void *obj, FlexSkeletonHeader *skel);

void ZGlobalObj_globalizeStandardLimbSkeleton(void *obj, FlexSkeletonHeader *skel);

#endif
