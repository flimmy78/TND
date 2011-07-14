/*
 * main-frontend.cpp
 *
 *  Created on: 13/gen/2011
 *      Author: Mario Giustiniani
 */

#include <glib.h>
#include <gst/gst.h>
#include <gst/interfaces/xoverlay.h>
#include <QApplication>
#define DEFAULT_VIDESINK
#include "gui/Frontend.h"
#include <iostream>
#include <exception>

/* slightly convoluted way to find a working video sink that's not a bin,
 * one could use autovideosink from gst-plugins-good instead
 */

#define APP_NAME  "VideoRegia"
#define ORG_NAME  "CRR"

#define VIDEO_MAIN_ROWS  2
#define VIDEO_MAIN_COLS  2
#define VIDEO_SUB_ROWS   2
#define VIDEO_SUB_COLS   2


int main(int argc, char *argv[]) {
	try {
	QApplication app(argc, argv);
	  app.setOrganizationName(ORG_NAME);
	  app.setApplicationName(APP_NAME);
	  int mainRows, mainCols, subRows, subCols;
	  {
	    // qui non è necessario usare i settings: servono per modificare/ripristinare il numero di video a runtime!
	    QSettings settings(app.organizationName(), app.applicationName());
	    settings.beginGroup("grid");
	    mainRows = settings.value("mainRows", VIDEO_MAIN_ROWS).toInt();
	    mainCols = settings.value("mainCols", VIDEO_MAIN_COLS).toInt();
	    subRows  = settings.value( "subRows", VIDEO_SUB_ROWS ).toInt();
	    subCols  = settings.value( "subCols", VIDEO_SUB_ROWS ).toInt();
	    settings.endGroup();
	  }
	     Frontend* win = new Frontend(mainRows, mainCols, subRows, subCols);

	    // calculator.Run();
	     win->start();
	      app.exec();
	      delete  win;
	}
	 catch (std::exception& e){
	    std::cout << e.what() << std::endl;

	    }

	     std::cout<<"EXIT"<<std::endl;

	return 0;
}