/* @author Adam Claassen, 2014 <claassenadam@gmail.com>
* 
*/

#include <Serial.h>


char[] start_sentance = "$";
char[] gps_fix_data = "GPGGA";
char[] lat_lon_time = "GPGLL";
char[] active_sats = "GPGSA";
char[] sats_in_view = "GPGSV";
char[] true_heading = "GPHDT";
char[] date_time = "GPZDA";

void Parser::Parser(SerialPort port){

}

void Parser::update(){

}

float Parser::time(){

}

float Parser::lat(){

}

float Parser::lon(){

}

int Parser::sats(){
	
}
