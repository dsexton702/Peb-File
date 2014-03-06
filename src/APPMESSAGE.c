#include <pebble.h>
#include "APPMESSAGE.h"

 void out_sent_handler(DictionaryIterator *sent, void *context) {
 APP_LOG(APP_LOG_LEVEL_DEBUG, "App Message worked!");
 }


 void out_failed_handler(DictionaryIterator *failed, AppMessageResult reason, void *context) {
 APP_LOG(APP_LOG_LEVEL_DEBUG, "App Message Failed to Send!");
 }





 void in_dropped_handler(AppMessageResult reason, void *context) {
  APP_LOG(APP_LOG_LEVEL_DEBUG, "App Message Dropped!");
 }
