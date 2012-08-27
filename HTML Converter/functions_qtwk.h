/*
 *  functions_qtwk.h
 *  4D Plugin
 *
 *  Created by miyako on 2012/08/27.
 *  Copyright 2012 株式会社フォーディー・ジャパン. All rights reserved.
 *
 */

#include <wkhtmltox/pdf.h>
#include <wkhtmltox/image.h>

#include "4DPluginAPI.h"
#include "4DPlugin.h"

//wrappers to call qt UI functions in the main thread

typedef struct functionParams
{
	bool boolValue;
	int intValue;
	long longValue;
	
	wkhtmltopdf_global_settings *gs;
	wkhtmltopdf_object_settings *os;
	wkhtmltopdf_converter *c;
	
	wkhtmltoimage_converter *ic;
	wkhtmltoimage_global_settings *igs;
	
	wkhtmltopdf_int_callback cb;
	const unsigned char **bytes;
	const char *data;
	const char *name;
	const char *value;
	
}functionParams;

void __wkhtmltopdf_init(functionParams *params);
int _wkhtmltopdf_init(bool graphics);

void __wkhtmltopdf_deinit(functionParams *params);
int _wkhtmltopdf_deinit();

void __wkhtmltopdf_convert(functionParams *params);
int _wkhtmltopdf_convert(wkhtmltopdf_converter *c);

void __wkhtmltopdf_create_global_settings(functionParams *params);
wkhtmltopdf_global_settings *_wkhtmltopdf_create_global_settings();

void __wkhtmltopdf_create_object_settings(functionParams *params);
wkhtmltopdf_object_settings *_wkhtmltopdf_create_object_settings();

void __wkhtmltopdf_create_converter(functionParams *params);
wkhtmltopdf_converter *_wkhtmltopdf_create_converter(wkhtmltopdf_global_settings *gs);

void __wkhtmltopdf_destroy_converter(functionParams *params);
void _wkhtmltopdf_destroy_converter(wkhtmltopdf_converter *c);

void __wkhtmltopdf_add_object(functionParams *params);
void _wkhtmltopdf_add_object(wkhtmltopdf_converter * c, wkhtmltopdf_object_settings * os, const char * data);

void __wkhtmltopdf_get_output(functionParams *params);
long _wkhtmltopdf_get_output(wkhtmltopdf_converter * c, const unsigned char **bytes);

void __wkhtmltopdf_set_object_setting(functionParams *params);
int _wkhtmltopdf_set_object_setting(wkhtmltopdf_object_settings * os, const char * name, const char * value);							 

void __wkhtmltopdf_set_global_setting(functionParams *params);
int _wkhtmltopdf_set_global_setting(wkhtmltopdf_global_settings * gs, const char * name, const char * value);

void __wkhtmltoimage_get_output(functionParams *params);
long _wkhtmltoimage_get_output(wkhtmltoimage_converter * ic, const unsigned char **bytes);

void __wkhtmltoimage_convert(functionParams *params);
int _wkhtmltoimage_convert(wkhtmltoimage_converter * ic);

void __wkhtmltoimage_destroy_converter(functionParams *params);
void _wkhtmltoimage_destroy_converter(wkhtmltoimage_converter * ic);

void __wkhtmltoimage_create_converter(functionParams *params);
wkhtmltoimage_converter *_wkhtmltoimage_create_converter(wkhtmltoimage_global_settings * igs, const char * data);

void __wkhtmltoimage_set_global_setting(functionParams *params);
int _wkhtmltoimage_set_global_setting(wkhtmltoimage_global_settings * settings, const char * name, const char * value);

void __wkhtmltoimage_create_global_settings(functionParams *params);
wkhtmltoimage_global_settings *_wkhtmltoimage_create_global_settings();

void __wkhtmltoimage_init(functionParams *params);
int _wkhtmltoimage_init(bool graphics);

void __wkhtmltoimage_deinit(functionParams *params);
int _wkhtmltoimage_deinit();
