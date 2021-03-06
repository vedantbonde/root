// Author: Danilo Piparo CERN  08/2018

/*************************************************************************
 * Copyright (C) 1995-2018, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

struct _object;
typedef _object PyObject;

class TClass;
namespace CPyCppyy {
   class CPPInstance;
}

PyObject *CallPyObjMethod(PyObject *obj, const char *meth);
TClass *GetTClass(const CPyCppyy::CPPInstance *pyobj);
