#ifndef _{{cookiecutter.project_name|upper}}_H_
#define _{{cookiecutter.project_name|upper}}_H_

#include <stdlib.h>

#if !defined(MODELICA_EXPORT)
#if defined(__cplusplus)
#define MODELICA_EXPORT extern "C"
#else
#define MODELICA_EXPORT
#endif
#endif

/* Make sure to define NDEBUG when doing a release */
#ifdef NDEBUG
    #define HAS_MODELICA_UTILITIES
#endif

#ifdef HAS_MODELICA_UTILITIES
    #include "ModelicaUtilities.h"
    #define LOG_FORMAT_INFO(format, ...)   do { ModelicaFormatMessage(format, __VA_ARGS__); } while(0)
    #define LOG_FORMAT_ERROR(format, ...)  do { ModelicaFormatError("[%s, L%d] ERROR: " format, __FILE__, __LINE__, __VA_ARGS__); } while(0) 
#else
    #include <stdio.h>
    #define LOG_FORMAT_INFO(format, ...)   do { fprintf(stdout, "[%s, L%d] INFO: " format, __FUNCTION__, __LINE__, __VA_ARGS__); } while(0)
    #define LOG_FORMAT_ERROR(format, ...)  do { fprintf(stderr, "[%s, L%d] ERROR: " format, __FUNCTION__, __LINE__, __VA_ARGS__); } while(0)
    #define LOG_INFO(format)               do { fprintf(stdout, "[%s, L%d] INFO: " format, __FUNCTION__, __LINE__); } while(0)
    #define LOG_ERROR(format)              do { fprintf(stdout, "[%s, L%d] ERROR: " format, __FUNCTION__, __LINE__); } while(0)
#endif

/**
 * @brief {{cookiecutter.project_name}} constructor
 * 
 */
typedef struct {{cookiecutter.project_name}}
{
    /***********************************
     * Define object variables here
     ************************************/
    int dummy;
}{{cookiecutter.project_name}}_s;

MODELICA_EXPORT void* {{cookiecutter.project_name}}_init(void) {
    /*
        Init variables here
    */

    {{cookiecutter.project_name}}_s *obj_ID = ({{cookiecutter.project_name}}_s*)calloc(1, sizeof({{cookiecutter.project_name}}_s));
    if(NULL == obj_ID) {
        LOG_ERROR("Memeory allocation failed");
        return NULL;
    }

    return (void*)obj_ID;
}

/**
 * @brief {{cookiecutter.project_name}} destructor
 * 
 */
MODELICA_EXPORT void {{cookiecutter.project_name}}_close(void* _obj_ID) {
    {{cookiecutter.project_name}}_s *obj_ID = ({{cookiecutter.project_name}}_s*)_obj_ID;
    if (NULL == obj_ID) {
        return;
    }
    
    /* free allocated memory within obj_ID */
    free(obj_ID);
}
#endif /*_{{cookiecutter.project_name|upper}}_H_*/