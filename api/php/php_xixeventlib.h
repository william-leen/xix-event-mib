/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_XIXEVENTLIB_H
#define PHP_XIXEVENTLIB_H

extern zend_module_entry xixeventlib_module_entry;
#define phpext_xixeventlib_ptr &xixeventlib_module_entry

#ifdef PHP_WIN32
# define PHP_XIXEVENTLIB_API __declspec(dllexport)
#else
# define PHP_XIXEVENTLIB_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(xixeventlib);
PHP_MSHUTDOWN_FUNCTION(xixeventlib);
PHP_RINIT_FUNCTION(xixeventlib);
PHP_RSHUTDOWN_FUNCTION(xixeventlib);
PHP_MINFO_FUNCTION(xixeventlib);

ZEND_NAMED_FUNCTION(_wrap_xix_event_set_notification_2);
ZEND_NAMED_FUNCTION(_wrap_xix_event_set_inform_2);
ZEND_NAMED_FUNCTION(_wrap_xix_event_clear_notification_2);
ZEND_NAMED_FUNCTION(_wrap_xix_event_clear_inform_2);
#endif /* PHP_XIXEVENTLIB_H */
