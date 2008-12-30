/*
 * $Id$
 *
 * Copyright (c) 1998-2008 John Morrison.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */


/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

GtkWidget*
create_dialogGameFinder (void)
{
  GtkWidget *dialogGameFinder;
  GtkWidget *vbox1;
  GtkWidget *hbox1;
  GtkWidget *list1;
  GtkWidget *vbox2;
  GtkWidget *frame1;
  GtkWidget *table2;
  GtkWidget *label4;
  GtkWidget *label3;
  GtkWidget *label2;
  GtkWidget *label5;
  GtkWidget *label6;
  GtkWidget *label7;
  GtkWidget *label8;
  GtkWidget *label9;
  GtkWidget *label11;
  GtkWidget *label10;
  GtkWidget *idc_address;
  GtkWidget *idc_gamefindport;
  GtkWidget *idc_gamefindversion;
  GtkWidget *idc_gamefindnumplayers;
  GtkWidget *idc_gamefindtype;
  GtkWidget *idc_gamefindbases;
  GtkWidget *idc_gamefindpills;
  GtkWidget *idc_gamefindmines;
  GtkWidget *idc_gamefindpass;
  GtkWidget *idc_gamefindbrains;
  GtkWidget *label25;
  GtkWidget *_;
  GtkWidget *idc_gamefindstatus;
  GtkWidget *table1;
  GtkWidget *button2;
  GtkWidget *button1;
  GtkWidget *button8;
  GtkWidget *button9;
  GtkWidget *button4;
  GtkWidget *button6;
  GtkWidget *idc_gamefindjoin;
  GtkWidget *idc_gamefindrejoin;
  GtkWidget *button7;
  GtkWidget *label13;
  GtkWidget *label14;
  GtkWidget *label12;

  dialogGameFinder = gtk_window_new (GTK_WINDOW_DIALOG);
  gtk_object_set_data (GTK_OBJECT (dialogGameFinder), "dialogGameFinder", dialogGameFinder);
  gtk_container_set_border_width (GTK_CONTAINER (dialogGameFinder), 15);
  gtk_window_set_title (GTK_WINDOW (dialogGameFinder), "Game Finder");
  gtk_window_set_modal (GTK_WINDOW (dialogGameFinder), TRUE);

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox1);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "vbox1", vbox1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (dialogGameFinder), vbox1);

  hbox1 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox1);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "hbox1", hbox1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox1);
  gtk_box_pack_start (GTK_BOX (vbox1), hbox1, TRUE, TRUE, 0);

  list1 = gtk_list_new ();
  gtk_widget_ref (list1);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "list1", list1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (list1);
  gtk_box_pack_start (GTK_BOX (hbox1), list1, TRUE, TRUE, 10);

  vbox2 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox2);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "vbox2", vbox2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox2);
  gtk_box_pack_start (GTK_BOX (hbox1), vbox2, TRUE, TRUE, 0);

  frame1 = gtk_frame_new ("Selected Game Information");
  gtk_widget_ref (frame1);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "frame1", frame1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (frame1);
  gtk_box_pack_start (GTK_BOX (vbox2), frame1, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (frame1), 7);

  table2 = gtk_table_new (11, 2, FALSE);
  gtk_widget_ref (table2);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "table2", table2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (table2);
  gtk_container_add (GTK_CONTAINER (frame1), table2);
  gtk_container_set_border_width (GTK_CONTAINER (table2), 7);

  label4 = gtk_label_new ("Version:");
  gtk_widget_ref (label4);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "label4", label4,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label4);
  gtk_table_attach (GTK_TABLE (table2), label4, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label4), GTK_JUSTIFY_RIGHT);
  gtk_misc_set_alignment (GTK_MISC (label4), 1, 0.5);

  label3 = gtk_label_new ("Server Port:");
  gtk_widget_ref (label3);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "label3", label3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label3);
  gtk_table_attach (GTK_TABLE (table2), label3, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label3), GTK_JUSTIFY_RIGHT);
  gtk_misc_set_alignment (GTK_MISC (label3), 1, 0.5);

  label2 = gtk_label_new ("Server Address:");
  gtk_widget_ref (label2);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "label2", label2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label2);
  gtk_table_attach (GTK_TABLE (table2), label2, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label2), GTK_JUSTIFY_RIGHT);
  gtk_misc_set_alignment (GTK_MISC (label2), 1, 0.5);

  label5 = gtk_label_new ("Number of Players:");
  gtk_widget_ref (label5);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "label5", label5,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label5);
  gtk_table_attach (GTK_TABLE (table2), label5, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label5), GTK_JUSTIFY_RIGHT);
  gtk_misc_set_alignment (GTK_MISC (label5), 0.5, 1);

  label6 = gtk_label_new ("Game Type:");
  gtk_widget_ref (label6);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "label6", label6,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label6);
  gtk_table_attach (GTK_TABLE (table2), label6, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label6), GTK_JUSTIFY_RIGHT);
  gtk_misc_set_alignment (GTK_MISC (label6), 1, 0.5);

  label7 = gtk_label_new ("No of free Bases:");
  gtk_widget_ref (label7);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "label7", label7,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label7);
  gtk_table_attach (GTK_TABLE (table2), label7, 0, 1, 6, 7,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label7), 1, 0.5);

  label8 = gtk_label_new ("No of free Pillboxes:");
  gtk_widget_ref (label8);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "label8", label8,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label8);
  gtk_table_attach (GTK_TABLE (table2), label8, 0, 1, 7, 8,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label8), 1, 0.5);

  label9 = gtk_label_new ("Hidden Mines: ");
  gtk_widget_ref (label9);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "label9", label9,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label9);
  gtk_table_attach (GTK_TABLE (table2), label9, 0, 1, 8, 9,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label9), 1, 0.5);

  label11 = gtk_label_new ("Brains:");
  gtk_widget_ref (label11);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "label11", label11,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label11);
  gtk_table_attach (GTK_TABLE (table2), label11, 0, 1, 10, 11,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label11), 1, 0.5);

  label10 = gtk_label_new ("Password: ");
  gtk_widget_ref (label10);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "label10", label10,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label10);
  gtk_table_attach (GTK_TABLE (table2), label10, 0, 1, 9, 10,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label10), GTK_JUSTIFY_RIGHT);
  gtk_misc_set_alignment (GTK_MISC (label10), 1, 0.5);

  idc_address = gtk_label_new ("");
  gtk_widget_ref (idc_address);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "idc_address", idc_address,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (idc_address);
  gtk_table_attach (GTK_TABLE (table2), idc_address, 1, 2, 0, 1,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (idc_address), GTK_JUSTIFY_LEFT);

  idc_gamefindport = gtk_label_new ("");
  gtk_widget_ref (idc_gamefindport);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "idc_gamefindport", idc_gamefindport,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (idc_gamefindport);
  gtk_table_attach (GTK_TABLE (table2), idc_gamefindport, 1, 2, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);

  idc_gamefindversion = gtk_label_new ("");
  gtk_widget_ref (idc_gamefindversion);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "idc_gamefindversion", idc_gamefindversion,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (idc_gamefindversion);
  gtk_table_attach (GTK_TABLE (table2), idc_gamefindversion, 1, 2, 3, 4,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);

  idc_gamefindnumplayers = gtk_label_new ("");
  gtk_widget_ref (idc_gamefindnumplayers);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "idc_gamefindnumplayers", idc_gamefindnumplayers,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (idc_gamefindnumplayers);
  gtk_table_attach (GTK_TABLE (table2), idc_gamefindnumplayers, 1, 2, 4, 5,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);

  idc_gamefindtype = gtk_label_new ("");
  gtk_widget_ref (idc_gamefindtype);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "idc_gamefindtype", idc_gamefindtype,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (idc_gamefindtype);
  gtk_table_attach (GTK_TABLE (table2), idc_gamefindtype, 1, 2, 5, 6,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);

  idc_gamefindbases = gtk_label_new ("");
  gtk_widget_ref (idc_gamefindbases);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "idc_gamefindbases", idc_gamefindbases,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (idc_gamefindbases);
  gtk_table_attach (GTK_TABLE (table2), idc_gamefindbases, 1, 2, 6, 7,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (idc_gamefindbases), GTK_JUSTIFY_LEFT);

  idc_gamefindpills = gtk_label_new ("");
  gtk_widget_ref (idc_gamefindpills);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "idc_gamefindpills", idc_gamefindpills,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (idc_gamefindpills);
  gtk_table_attach (GTK_TABLE (table2), idc_gamefindpills, 1, 2, 7, 8,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (idc_gamefindpills), GTK_JUSTIFY_LEFT);

  idc_gamefindmines = gtk_label_new ("");
  gtk_widget_ref (idc_gamefindmines);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "idc_gamefindmines", idc_gamefindmines,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (idc_gamefindmines);
  gtk_table_attach (GTK_TABLE (table2), idc_gamefindmines, 1, 2, 8, 9,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (idc_gamefindmines), GTK_JUSTIFY_LEFT);

  idc_gamefindpass = gtk_label_new ("");
  gtk_widget_ref (idc_gamefindpass);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "idc_gamefindpass", idc_gamefindpass,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (idc_gamefindpass);
  gtk_table_attach (GTK_TABLE (table2), idc_gamefindpass, 1, 2, 9, 10,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (idc_gamefindpass), GTK_JUSTIFY_LEFT);

  idc_gamefindbrains = gtk_label_new ("");
  gtk_widget_ref (idc_gamefindbrains);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "idc_gamefindbrains", idc_gamefindbrains,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (idc_gamefindbrains);
  gtk_table_attach (GTK_TABLE (table2), idc_gamefindbrains, 1, 2, 10, 11,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (idc_gamefindbrains), GTK_JUSTIFY_LEFT);

  label25 = gtk_label_new ("Map Name:");
  gtk_widget_ref (label25);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "label25", label25,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label25);
  gtk_table_attach (GTK_TABLE (table2), label25, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label25), GTK_JUSTIFY_RIGHT);
  gtk_misc_set_alignment (GTK_MISC (label25), 1, 0.5);

  _ = gtk_label_new ("");
  gtk_widget_ref (_);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "_", _,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (_);
  gtk_table_attach (GTK_TABLE (table2), _, 1, 2, 2, 3,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);

  idc_gamefindstatus = gtk_label_new ("Status: Idle");
  gtk_widget_ref (idc_gamefindstatus);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "idc_gamefindstatus", idc_gamefindstatus,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (idc_gamefindstatus);
  gtk_box_pack_start (GTK_BOX (vbox2), idc_gamefindstatus, FALSE, TRUE, 3);
  gtk_misc_set_alignment (GTK_MISC (idc_gamefindstatus), 0.04, 0.5);

  table1 = gtk_table_new (3, 4, FALSE);
  gtk_widget_ref (table1);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "table1", table1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (table1);
  gtk_box_pack_start (GTK_BOX (vbox1), table1, TRUE, TRUE, 15);

  button2 = gtk_button_new_with_label ("Join by Address");
  gtk_widget_ref (button2);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "button2", button2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (button2);
  gtk_table_attach (GTK_TABLE (table1), button2, 2, 3, 0, 1,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);

  button1 = gtk_button_new_with_label ("Tracker Setup");
  gtk_widget_ref (button1);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "button1", button1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (button1);
  gtk_table_attach (GTK_TABLE (table1), button1, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  button8 = gtk_button_new_with_label ("Set Player Name");
  gtk_widget_ref (button8);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "button8", button8,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (button8);
  gtk_table_attach (GTK_TABLE (table1), button8, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  button9 = gtk_button_new_with_label ("Message of the Day");
  gtk_widget_ref (button9);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "button9", button9,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (button9);
  gtk_table_attach (GTK_TABLE (table1), button9, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  button4 = gtk_button_new_with_label ("Refresh");
  gtk_widget_ref (button4);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "button4", button4,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (button4);
  gtk_table_attach (GTK_TABLE (table1), button4, 2, 3, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  button6 = gtk_button_new_with_label ("New");
  gtk_widget_ref (button6);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "button6", button6,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (button6);
  gtk_table_attach (GTK_TABLE (table1), button6, 2, 3, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  idc_gamefindjoin = gtk_button_new_with_label ("Join");
  gtk_widget_ref (idc_gamefindjoin);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "idc_gamefindjoin", idc_gamefindjoin,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (idc_gamefindjoin);
  gtk_table_attach (GTK_TABLE (table1), idc_gamefindjoin, 3, 4, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_widget_set_sensitive (idc_gamefindjoin, FALSE);

  idc_gamefindrejoin = gtk_button_new_with_label ("Rejoin");
  gtk_widget_ref (idc_gamefindrejoin);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "idc_gamefindrejoin", idc_gamefindrejoin,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (idc_gamefindrejoin);
  gtk_table_attach (GTK_TABLE (table1), idc_gamefindrejoin, 3, 4, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_widget_set_sensitive (idc_gamefindrejoin, FALSE);

  button7 = gtk_button_new_with_label ("Cancel");
  gtk_widget_ref (button7);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "button7", button7,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (button7);
  gtk_table_attach (GTK_TABLE (table1), button7, 3, 4, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  label13 = gtk_label_new ("");
  gtk_widget_ref (label13);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "label13", label13,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label13);
  gtk_table_attach (GTK_TABLE (table1), label13, 1, 2, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);

  label14 = gtk_label_new ("");
  gtk_widget_ref (label14);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "label14", label14,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label14);
  gtk_table_attach (GTK_TABLE (table1), label14, 1, 2, 2, 3,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);

  label12 = gtk_label_new ("                                                            ");
  gtk_widget_ref (label12);
  gtk_object_set_data_full (GTK_OBJECT (dialogGameFinder), "label12", label12,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label12);
  gtk_table_attach (GTK_TABLE (table1), label12, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  return dialogGameFinder;
}
