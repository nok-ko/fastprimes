
#include "nuitka/prelude.h"
#include "structseq.h"

// Sentinel PyObject to be used for all our call iterator endings. It will
// become a PyCObject pointing to NULL. It's address is unique, and that's
// enough for us to use it as sentinel value.
PyObject *_sentinel_value = NULL;

PyObject *Nuitka_dunder_compiled_value = NULL;

PyObject *const_int_0;
PyObject *const_str_dot;
PyObject *const_float_0_0;
PyObject *const_int_pos_1;
PyObject *const_str_empty;
PyObject *const_dict_empty;
PyObject *const_bytes_empty;
PyObject *const_tuple_empty;
PyObject *const_str_plain_rb;
PyObject *const_str_plain_end;
PyObject *const_str_plain_int;
PyObject *const_str_plain_len;
PyObject *const_str_plain_sum;
PyObject *const_str_plain_file;
PyObject *const_str_plain_iter;
PyObject *const_str_plain_name;
PyObject *const_str_plain_open;
PyObject *const_str_plain_read;
PyObject *const_str_plain_repr;
PyObject *const_str_plain_send;
PyObject *const_str_plain_site;
PyObject *const_str_plain_type;
PyObject *const_float_minus_0_0;
PyObject *const_str_plain_bytes;
PyObject *const_str_plain_close;
PyObject *const_str_plain_level;
PyObject *const_str_plain_print;
PyObject *const_str_plain_range;
PyObject *const_str_plain_throw;
PyObject *const_str_plain_types;
PyObject *const_str_plain_format;
PyObject *const_str_plain_locals;
PyObject *const_str_plain___all__;
PyObject *const_str_plain___cmp__;
PyObject *const_str_plain___doc__;
PyObject *const_str_plain_compile;
PyObject *const_str_plain_globals;
PyObject *const_str_plain_inspect;
PyObject *const_str_plain___dict__;
PyObject *const_str_plain___exit__;
PyObject *const_str_plain___file__;
PyObject *const_str_plain___iter__;
PyObject *const_str_plain___main__;
PyObject *const_str_plain___name__;
PyObject *const_str_plain___path__;
PyObject *const_str_plain___spec__;
PyObject *const_str_plain_fromlist;
PyObject *const_str_plain___class__;
PyObject *const_str_plain___enter__;
PyObject *const_str_plain_bytearray;
PyObject *const_str_plain___cached__;
PyObject *const_str_plain___import__;
PyObject *const_str_plain___loader__;
PyObject *const_str_plain___module__;
PyObject *const_str_plain___package__;
PyObject *const_str_plain_classmethod;
PyObject *const_str_plain___builtins__;
PyObject *const_str_plain___compiled__;
PyObject *const_str_plain_staticmethod;
PyObject *const_str_plain___metaclass__;
PyObject *const_str_plain__initializing;
PyObject *const_str_plain___class_getitem__;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_digest_1a473368cfb3493f26a44df32432e45f;
PyObject *const_str_digest_c4bbcbecc02934185b489bae0f2463a4;

static void _createGlobalConstants( void )
{
    NUITKA_MAY_BE_UNUSED PyObject *exception_type, *exception_value;
    NUITKA_MAY_BE_UNUSED PyTracebackObject *exception_tb;

#ifdef _MSC_VER
    // Prevent unused warnings in case of simple programs, the attribute
    // NUITKA_MAY_BE_UNUSED doesn't work for MSVC.
    (void *)exception_type; (void *)exception_value; (void *)exception_tb;
#endif

    const_int_0 = PyLong_FromUnsignedLong( 0ul );
    const_str_dot = UNSTREAM_STRING_ASCII( &constant_bin[ 143 ], 1, 0 );
    const_float_0_0 = UNSTREAM_FLOAT( &constant_bin[ 146 ] );
    const_int_pos_1 = PyLong_FromUnsignedLong( 1ul );
    const_str_empty = UNSTREAM_STRING_ASCII( &constant_bin[ 0 ], 0, 0 );
    const_dict_empty = _PyDict_NewPresized( 0 );
    assert( PyDict_Size( const_dict_empty ) == 0 );
    const_bytes_empty = UNSTREAM_BYTES( &constant_bin[ 0 ], 0 );
    const_tuple_empty = PyTuple_New( 0 );
    const_str_plain_rb = UNSTREAM_STRING_ASCII( &constant_bin[ 154 ], 2, 1 );
    const_str_plain_end = UNSTREAM_STRING_ASCII( &constant_bin[ 156 ], 3, 1 );
    const_str_plain_int = UNSTREAM_STRING_ASCII( &constant_bin[ 159 ], 3, 1 );
    const_str_plain_len = UNSTREAM_STRING_ASCII( &constant_bin[ 162 ], 3, 1 );
    const_str_plain_sum = UNSTREAM_STRING_ASCII( &constant_bin[ 165 ], 3, 1 );
    const_str_plain_file = UNSTREAM_STRING_ASCII( &constant_bin[ 168 ], 4, 1 );
    const_str_plain_iter = UNSTREAM_STRING_ASCII( &constant_bin[ 172 ], 4, 1 );
    const_str_plain_name = UNSTREAM_STRING_ASCII( &constant_bin[ 176 ], 4, 1 );
    const_str_plain_open = UNSTREAM_STRING_ASCII( &constant_bin[ 180 ], 4, 1 );
    const_str_plain_read = UNSTREAM_STRING_ASCII( &constant_bin[ 184 ], 4, 1 );
    const_str_plain_repr = UNSTREAM_STRING_ASCII( &constant_bin[ 188 ], 4, 1 );
    const_str_plain_send = UNSTREAM_STRING_ASCII( &constant_bin[ 192 ], 4, 1 );
    const_str_plain_site = UNSTREAM_STRING_ASCII( &constant_bin[ 196 ], 4, 1 );
    const_str_plain_type = UNSTREAM_STRING_ASCII( &constant_bin[ 200 ], 4, 1 );
    const_float_minus_0_0 = UNSTREAM_FLOAT( &constant_bin[ 204 ] );
    const_str_plain_bytes = UNSTREAM_STRING_ASCII( &constant_bin[ 212 ], 5, 1 );
    const_str_plain_close = UNSTREAM_STRING_ASCII( &constant_bin[ 217 ], 5, 1 );
    const_str_plain_level = UNSTREAM_STRING_ASCII( &constant_bin[ 222 ], 5, 1 );
    const_str_plain_print = UNSTREAM_STRING_ASCII( &constant_bin[ 227 ], 5, 1 );
    const_str_plain_range = UNSTREAM_STRING_ASCII( &constant_bin[ 232 ], 5, 1 );
    const_str_plain_throw = UNSTREAM_STRING_ASCII( &constant_bin[ 237 ], 5, 1 );
    const_str_plain_types = UNSTREAM_STRING_ASCII( &constant_bin[ 242 ], 5, 1 );
    const_str_plain_format = UNSTREAM_STRING_ASCII( &constant_bin[ 247 ], 6, 1 );
    const_str_plain_locals = UNSTREAM_STRING_ASCII( &constant_bin[ 253 ], 6, 1 );
    const_str_plain___all__ = UNSTREAM_STRING_ASCII( &constant_bin[ 259 ], 7, 1 );
    const_str_plain___cmp__ = UNSTREAM_STRING_ASCII( &constant_bin[ 266 ], 7, 1 );
    const_str_plain___doc__ = UNSTREAM_STRING_ASCII( &constant_bin[ 273 ], 7, 1 );
    const_str_plain_compile = UNSTREAM_STRING_ASCII( &constant_bin[ 280 ], 7, 1 );
    const_str_plain_globals = UNSTREAM_STRING_ASCII( &constant_bin[ 287 ], 7, 1 );
    const_str_plain_inspect = UNSTREAM_STRING_ASCII( &constant_bin[ 294 ], 7, 1 );
    const_str_plain___dict__ = UNSTREAM_STRING_ASCII( &constant_bin[ 301 ], 8, 1 );
    const_str_plain___exit__ = UNSTREAM_STRING_ASCII( &constant_bin[ 309 ], 8, 1 );
    const_str_plain___file__ = UNSTREAM_STRING_ASCII( &constant_bin[ 317 ], 8, 1 );
    const_str_plain___iter__ = UNSTREAM_STRING_ASCII( &constant_bin[ 325 ], 8, 1 );
    const_str_plain___main__ = UNSTREAM_STRING_ASCII( &constant_bin[ 333 ], 8, 1 );
    const_str_plain___name__ = UNSTREAM_STRING_ASCII( &constant_bin[ 341 ], 8, 1 );
    const_str_plain___path__ = UNSTREAM_STRING_ASCII( &constant_bin[ 349 ], 8, 1 );
    const_str_plain___spec__ = UNSTREAM_STRING_ASCII( &constant_bin[ 357 ], 8, 1 );
    const_str_plain_fromlist = UNSTREAM_STRING_ASCII( &constant_bin[ 365 ], 8, 1 );
    const_str_plain___class__ = UNSTREAM_STRING_ASCII( &constant_bin[ 373 ], 9, 1 );
    const_str_plain___enter__ = UNSTREAM_STRING_ASCII( &constant_bin[ 382 ], 9, 1 );
    const_str_plain_bytearray = UNSTREAM_STRING_ASCII( &constant_bin[ 391 ], 9, 1 );
    const_str_plain___cached__ = UNSTREAM_STRING_ASCII( &constant_bin[ 400 ], 10, 1 );
    const_str_plain___import__ = UNSTREAM_STRING_ASCII( &constant_bin[ 410 ], 10, 1 );
    const_str_plain___loader__ = UNSTREAM_STRING_ASCII( &constant_bin[ 420 ], 10, 1 );
    const_str_plain___module__ = UNSTREAM_STRING_ASCII( &constant_bin[ 430 ], 10, 1 );
    const_str_plain___package__ = UNSTREAM_STRING_ASCII( &constant_bin[ 440 ], 11, 1 );
    const_str_plain_classmethod = UNSTREAM_STRING_ASCII( &constant_bin[ 451 ], 11, 1 );
    const_str_plain___builtins__ = UNSTREAM_STRING_ASCII( &constant_bin[ 462 ], 12, 1 );
    const_str_plain___compiled__ = UNSTREAM_STRING_ASCII( &constant_bin[ 474 ], 12, 1 );
    const_str_plain_staticmethod = UNSTREAM_STRING_ASCII( &constant_bin[ 486 ], 12, 1 );
    const_str_plain___metaclass__ = UNSTREAM_STRING_ASCII( &constant_bin[ 498 ], 13, 1 );
    const_str_plain__initializing = UNSTREAM_STRING_ASCII( &constant_bin[ 511 ], 13, 1 );
    const_str_plain___class_getitem__ = UNSTREAM_STRING_ASCII( &constant_bin[ 524 ], 17, 1 );
    const_str_plain_submodule_search_locations = UNSTREAM_STRING_ASCII( &constant_bin[ 541 ], 26, 1 );
    const_str_digest_1a473368cfb3493f26a44df32432e45f = UNSTREAM_STRING_ASCII( &constant_bin[ 567 ], 46, 0 );
    const_str_digest_c4bbcbecc02934185b489bae0f2463a4 = UNSTREAM_STRING_ASCII( &constant_bin[ 613 ], 73, 0 );

#if _NUITKA_EXE
    /* Set the "sys.executable" path to the original CPython executable. */
    PySys_SetObject(
        (char *)"executable",
        const_str_digest_1a473368cfb3493f26a44df32432e45f
    );

#ifndef _NUITKA_STANDALONE
    /* Set the "sys.prefix" path to the original one. */
    PySys_SetObject(
        (char *)"prefix",
        const_str_digest_c4bbcbecc02934185b489bae0f2463a4
    );

    /* Set the "sys.prefix" path to the original one. */
    PySys_SetObject(
        (char *)"exec_prefix",
        const_str_digest_c4bbcbecc02934185b489bae0f2463a4
    );


#if PYTHON_VERSION >= 300
    /* Set the "sys.base_prefix" path to the original one. */
    PySys_SetObject(
        (char *)"base_prefix",
        const_str_digest_c4bbcbecc02934185b489bae0f2463a4
    );

    /* Set the "sys.exec_base_prefix" path to the original one. */
    PySys_SetObject(
        (char *)"base_exec_prefix",
        const_str_digest_c4bbcbecc02934185b489bae0f2463a4
    );

#endif
#endif
#endif

    static PyTypeObject Nuitka_VersionInfoType;

    // Same fields as "sys.version_info" except no serial number.
    static PyStructSequence_Field Nuitka_VersionInfoFields[] = {
        {(char *)"major", (char *)"Major release number"},
        {(char *)"minor", (char *)"Minor release number"},
        {(char *)"micro", (char *)"Micro release number"},
        {(char *)"releaselevel", (char *)"'alpha', 'beta', 'candidate', or 'release'"},
        {0}
    };

    static PyStructSequence_Desc Nuitka_VersionInfoDesc = {
        (char *)"__nuitka_version__",                                    /* name */
        (char *)"__compiled__\n\nVersion information as a named tuple.", /* doc */
        Nuitka_VersionInfoFields,                                        /* fields */
        4
    };

    PyStructSequence_InitType(&Nuitka_VersionInfoType, &Nuitka_VersionInfoDesc);

    Nuitka_dunder_compiled_value = PyStructSequence_New(&Nuitka_VersionInfoType);
    assert(Nuitka_dunder_compiled_value != NULL);

    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 0, PyInt_FromLong(0));
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 1, PyInt_FromLong(6));
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 2, PyInt_FromLong(5));

#if PYTHON_VERSION < 300
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 3, PyString_FromString("release"));
#else
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 3, PyUnicode_FromString("release"));
#endif
    // Prevent users from creating the Nuitka version type object.
    Nuitka_VersionInfoType.tp_init = NULL;
    Nuitka_VersionInfoType.tp_new = NULL;


}

// In debug mode we can check that the constants were not tampered with in any
// given moment. We typically do it at program exit, but we can add extra calls
// for sanity.
#ifndef __NUITKA_NO_ASSERT__
void checkGlobalConstants( void )
{

}
#endif

void createGlobalConstants( void )
{
    if ( _sentinel_value == NULL )
    {
#if PYTHON_VERSION < 300
        _sentinel_value = PyCObject_FromVoidPtr( NULL, NULL );
#else
        // The NULL value is not allowed for a capsule, so use something else.
        _sentinel_value = PyCapsule_New( (void *)27, "sentinel", NULL );
#endif
        assert( _sentinel_value );

        _createGlobalConstants();
    }
}
