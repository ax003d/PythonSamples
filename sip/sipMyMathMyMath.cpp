/*
 * Interface wrapper code.
 *
 * Generated by SIP 0.1-unknown on Mon Feb 25 17:26:27 2013
 */

#include "sipAPIMyMath.h"

#line 8 "mymath.sip"
#include "mymath.h"
#line 12 "./sipMyMathMyMath.cpp"



extern "C" {static PyObject *meth_MyMath_Add(PyObject *, PyObject *);}
static PyObject *meth_MyMath_Add(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
        MyMath *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_MyMath, &sipCpp, &a0, &a1))
        {
            int sipRes;

            sipRes = sipCpp->Add(a0,a1);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MyMath, sipName_Add, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MyMath_Minus(PyObject *, PyObject *);}
static PyObject *meth_MyMath_Minus(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
        MyMath *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_MyMath, &sipCpp, &a0, &a1))
        {
            int sipRes;

            sipRes = sipCpp->Minus(a0,a1);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MyMath, sipName_Minus, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_MyMath(void *, const sipTypeDef *);}
static void *cast_MyMath(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_MyMath)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_MyMath(void *, int);}
static void release_MyMath(void *sipCppV,int)
{
    delete reinterpret_cast<MyMath *>(sipCppV);
}


extern "C" {static void assign_MyMath(void *, SIP_SSIZE_T, const void *);}
static void assign_MyMath(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<MyMath *>(sipDst)[sipDstIdx] = *reinterpret_cast<const MyMath *>(sipSrc);
}


extern "C" {static void *array_MyMath(SIP_SSIZE_T);}
static void *array_MyMath(SIP_SSIZE_T sipNrElem)
{
    return new MyMath[sipNrElem];
}


extern "C" {static void *copy_MyMath(const void *, SIP_SSIZE_T);}
static void *copy_MyMath(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new MyMath(reinterpret_cast<const MyMath *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_MyMath(sipSimpleWrapper *);}
static void dealloc_MyMath(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_MyMath(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_MyMath(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_MyMath(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    MyMath *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new MyMath();

            return sipCpp;
        }
    }

    {
        const MyMath * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_MyMath, &a0))
        {
            sipCpp = new MyMath(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_MyMath[] = {
    {SIP_MLNAME_CAST(sipName_Add), meth_MyMath_Add, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_Minus), meth_MyMath_Minus, METH_VARARGS, NULL}
};


sipClassTypeDef sipTypeDef_MyMath_MyMath = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_MyMath,
        {0}
    },
    {
        sipNameNr_MyMath,
        {0, 0, 1},
        2, methods_MyMath,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    init_MyMath,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_MyMath,
    assign_MyMath,
    array_MyMath,
    copy_MyMath,
    release_MyMath,
    cast_MyMath,
    0,
    0,
    0
};
