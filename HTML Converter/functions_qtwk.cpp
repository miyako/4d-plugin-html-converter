/*
 *  functions_qtwk.cpp
 *  4D Plugin
 *
 *  Created by miyako on 2012/08/27.
 *  Copyright 2012 株式会社フォーディー・ジャパン. All rights reserved.
 *
 */

#include "functions_qtwk.h"

void __wkhtmltopdf_init(functionParams *params){
	
	params->intValue = wkhtmltopdf_init(params->boolValue);
	
}

int _wkhtmltopdf_init(bool graphics){
	
	functionParams params;
	params.boolValue = graphics;
	
	PA_RunInMainProcess((PA_RunInMainProcessProcPtr)__wkhtmltopdf_init, (void *)&params);
	return params.intValue;

}

void __wkhtmltopdf_deinit(functionParams *params){
	
	params->intValue = wkhtmltopdf_deinit();
	
}

int _wkhtmltopdf_deinit(){
	
	functionParams params;
	
	PA_RunInMainProcess((PA_RunInMainProcessProcPtr)__wkhtmltopdf_deinit, (void *)&params);
	return params.intValue;
	
}

void __wkhtmltopdf_convert(functionParams *params){
	
	params->intValue = wkhtmltopdf_convert(params->c);
	
}

int _wkhtmltopdf_convert(wkhtmltopdf_converter *c){
	
	functionParams params;
	params.c = c;
	
	PA_RunInMainProcess((PA_RunInMainProcessProcPtr)__wkhtmltopdf_convert, (void *)&params);
	return params.intValue;
	
}

void __wkhtmltopdf_create_global_settings(functionParams *params){
	
	params->gs = wkhtmltopdf_create_global_settings();
	
}

wkhtmltopdf_global_settings *_wkhtmltopdf_create_global_settings(){
	
	functionParams params;
	PA_RunInMainProcess((PA_RunInMainProcessProcPtr)__wkhtmltopdf_create_global_settings, (void *)&params);
	return params.gs;
	
}

void __wkhtmltopdf_create_object_settings(functionParams *params){
	
	params->os = wkhtmltopdf_create_object_settings();
	
}

wkhtmltopdf_object_settings *_wkhtmltopdf_create_object_settings(){
	
	functionParams params;
	PA_RunInMainProcess((PA_RunInMainProcessProcPtr)__wkhtmltopdf_create_object_settings, (void *)&params);
	return params.os;
	
}

void __wkhtmltopdf_create_converter(functionParams *params){
	
	params->c = wkhtmltopdf_create_converter(params->gs);
	
}

wkhtmltopdf_converter *_wkhtmltopdf_create_converter(wkhtmltopdf_global_settings *gs){
	
	functionParams params;
	params.gs = gs;
	
	PA_RunInMainProcess((PA_RunInMainProcessProcPtr)__wkhtmltopdf_create_converter, (void *)&params);
	return params.c;	
	
}

void __wkhtmltopdf_destroy_converter(functionParams *params){
	
	 wkhtmltopdf_destroy_converter(params->c);

}
void _wkhtmltopdf_destroy_converter(wkhtmltopdf_converter *c){
	
	functionParams params;
	params.c = c;
	
	PA_RunInMainProcess((PA_RunInMainProcessProcPtr)__wkhtmltopdf_destroy_converter, (void *)&params);
	
}

void __wkhtmltopdf_add_object(functionParams *params){
	
	wkhtmltopdf_add_object(params->c, params->os, params->data);
}

void _wkhtmltopdf_add_object(wkhtmltopdf_converter * c, wkhtmltopdf_object_settings * os, const char * data){

	functionParams params;
	params.c = c;
	params.os = os;
	params.data = data;
	
	PA_RunInMainProcess((PA_RunInMainProcessProcPtr)__wkhtmltopdf_add_object, (void *)&params);
	
}

void __wkhtmltopdf_get_output(functionParams *params){

	 params->longValue = wkhtmltopdf_get_output(params->c, params->bytes);
	
}

long _wkhtmltopdf_get_output(wkhtmltopdf_converter * c, const unsigned char **bytes){

	functionParams params;
	params.c = c;
	params.bytes = bytes;
	
	PA_RunInMainProcess((PA_RunInMainProcessProcPtr)__wkhtmltopdf_get_output, (void *)&params);
	return params.longValue;
	
}

void __wkhtmltopdf_set_object_setting(functionParams *params){

	params->intValue = wkhtmltopdf_set_object_setting(params->os, params->name, params->value);
	
}
int _wkhtmltopdf_set_object_setting(wkhtmltopdf_object_settings * os, const char * name, const char * value){

	functionParams params;
	params.os = os;
	params.name = name;
	params.value = value;	
	
	PA_RunInMainProcess((PA_RunInMainProcessProcPtr)__wkhtmltopdf_set_object_setting, (void *)&params);
	return params.intValue;

}

void __wkhtmltopdf_set_global_setting(functionParams *params){

	params->intValue = wkhtmltopdf_set_global_setting(params->gs, params->name, params->value);
	
}

int _wkhtmltopdf_set_global_setting(wkhtmltopdf_global_settings * gs, const char * name, const char * value){

	functionParams params;
	params.gs = gs;
	params.name = name;
	params.value = value;	
	
	PA_RunInMainProcess((PA_RunInMainProcessProcPtr)__wkhtmltopdf_set_object_setting, (void *)&params);
	return params.intValue;
	
}

void __wkhtmltoimage_deinit(functionParams *params){

	params->intValue = wkhtmltoimage_deinit();
	
}

int _wkhtmltoimage_deinit(){

	functionParams params;
	
	PA_RunInMainProcess((PA_RunInMainProcessProcPtr)__wkhtmltoimage_deinit, (void *)&params);
	return params.intValue;	
	
}

void __wkhtmltoimage_init(functionParams *params){

	params->intValue = wkhtmltoimage_init(params->boolValue);
	
}

int _wkhtmltoimage_init(bool graphics){

	functionParams params;
	params.boolValue = graphics;
	
	PA_RunInMainProcess((PA_RunInMainProcessProcPtr)__wkhtmltoimage_init, (void *)&params);
	return params.intValue;	
	
}

void __wkhtmltoimage_create_global_settings(functionParams *params){

	params->igs = wkhtmltoimage_create_global_settings();
	
}

wkhtmltoimage_global_settings *_wkhtmltoimage_create_global_settings(){

	functionParams params;
	
	PA_RunInMainProcess((PA_RunInMainProcessProcPtr)__wkhtmltoimage_create_global_settings, (void *)&params);
	return params.igs;	

}

void __wkhtmltoimage_set_global_setting(functionParams *params){

	params->intValue = wkhtmltoimage_set_global_setting(params->igs, params->name, params->value);	
	
}

int _wkhtmltoimage_set_global_setting(wkhtmltoimage_global_settings * igs, const char * name, const char * value){

	functionParams params;
	params.igs = igs;
	params.name = name;
	params.value = value;
	
	PA_RunInMainProcess((PA_RunInMainProcessProcPtr)__wkhtmltoimage_set_global_setting, (void *)&params);
	return params.intValue;

}

void __wkhtmltoimage_create_converter(functionParams *params){

	params->ic = wkhtmltoimage_create_converter(params->igs, params->data);
	
}

wkhtmltoimage_converter *_wkhtmltoimage_create_converter(wkhtmltoimage_global_settings * igs, const char * data){

	functionParams params;
	params.igs = igs;
	params.data = data;
	
	PA_RunInMainProcess((PA_RunInMainProcessProcPtr)__wkhtmltoimage_create_converter, (void *)&params);
	return params.ic;
	
}

void __wkhtmltoimage_destroy_converter(functionParams *params){

	wkhtmltoimage_destroy_converter(params->ic);
	
}

void _wkhtmltoimage_destroy_converter(wkhtmltoimage_converter * ic){

	functionParams params;
	params.ic = ic;
	
	PA_RunInMainProcess((PA_RunInMainProcessProcPtr)__wkhtmltoimage_destroy_converter, (void *)&params);
	
}

void __wkhtmltoimage_convert(functionParams *params){

	params->intValue = wkhtmltoimage_convert(params->ic);
	
}
int _wkhtmltoimage_convert(wkhtmltoimage_converter * ic){

	functionParams params;
	params.ic = ic;
	
	PA_RunInMainProcess((PA_RunInMainProcessProcPtr)__wkhtmltoimage_convert, (void *)&params);	
	return params.intValue;
	
}

void __wkhtmltoimage_get_output(functionParams *params){

	params->longValue = wkhtmltoimage_get_output(params->ic, params->bytes);
	
}

long _wkhtmltoimage_get_output(wkhtmltoimage_converter * ic, const unsigned char **bytes){

	functionParams params;
	params.ic = ic;
	params.bytes = bytes;
	
	PA_RunInMainProcess((PA_RunInMainProcessProcPtr)__wkhtmltoimage_get_output, (void *)&params);	
	return params.longValue;	
	
}
