#ifndef _WINDOW_H_
#define _WINDOW_H_

#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include <string>

class window{
	public:
		window();
		WINDOW* create_newwin(int _h, int _w, int _y, int _x);
		void create_header();
		void create_output();
		void create_friends_list();
		void create_input();
		void put_str_to_win(WINDOW* _w, int _y, int _x, std::string& msg);
		void get_str_from_win(WINDOW* _w, std::string& out);
		void clear_win_line(WINDOW* _w, int begin, int lines);
		~window();
	public:
		WINDOW* header;
		WINDOW* output;
		WINDOW* friends_list;
		WINDOW* input;

};

#endif


