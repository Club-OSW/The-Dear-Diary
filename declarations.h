#include<gtk/gtk.h>
#include<stdio.h>

#ifndef _MAX_FILE_SIZE
#define _MAX_FILE_SIZE 2048000  //4 MB 
#endif 

typedef struct{
    char *label;
    int sub_items;
    char sub_menu[4][10];
}MuButton;

MuButton menulist[] = {
    {"File", 2, {"Save","Exit"}},
    {"Help", 1, {"About"}}
};
const int menLimit=2;

void diary_interface(void);

GtkWidget *window;
GtkWidget *vbox;
GtkWidget *menu_bar;
GtkWidget *item;
GtkWidget *item_menu;
GtkWidget *subitem;
GtkWidget *scrolled_window;
GtkWidget *text_view;
GtkWidget *save_dialog;
GtkWidget *open_dialog;

void text_save(void);
void button_click(GtkWidget *, gpointer);

gchar *filename;
char file[255];
struct tm *timenow;
time_t curr_time;