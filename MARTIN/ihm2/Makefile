#############################################################################
# Makefile for building: ihm
# Generated by qmake (2.01a) (Qt 4.8.2) on: jeu. janv. 30 15:35:33 2014
# Project:  ihm2.pro
# Template: app
# Command: /usr/local/Qt/bin/qmake -spec /usr/local/Qt/mkspecs/qws/linux-arm-g++ -o Makefile ihm2.pro
#############################################################################

####### Compiler, tools and options

CC            = /home/texierp/Documents/segment_SOL/crosstool-chain/gcc-linaro-arm-linux-gnueabihf-4.7-2013.01-20130125_linux/bin/arm-linux-gnueabihf-gcc
CXX           = /home/texierp/Documents/segment_SOL/crosstool-chain/gcc-linaro-arm-linux-gnueabihf-4.7-2013.01-20130125_linux/bin/arm-linux-gnueabihf-g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -mtune=cortex-a7 -mfpu=neon-vfpv4 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -std=c++11 -mtune=cortex-a7 -mfpu=neon-vfpv4 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/local/Qt/mkspecs/qws/linux-arm-g++ -I. -I/usr/local/Qt/include/QtCore -I/usr/local/Qt/include/QtNetwork -I/usr/local/Qt/include/QtGui -I/usr/local/Qt/include -I/usr/local/include/opencv -I/usr/local/include/opencv2 -I/usr/local/include/opencv2/core -I. -I. -I/usr/local/tslib/include
LINK          = /home/texierp/Documents/segment_SOL/crosstool-chain/gcc-linaro-arm-linux-gnueabihf-4.7-2013.01-20130125_linux/bin/arm-linux-gnueabihf-g++
LFLAGS        = -Wl,-rpath-link=/usr/local/tslib/lib -Wl,-O1 -Wl,-rpath,/usr/local/Qt/lib
LIBS          = $(SUBLIBS)  -L/usr/local/tslib/lib -L/usr/local/Qt/lib -L/opt/local/lib -lopencv_core -lopencv_highgui -lopencv_ml -lopencv_video -lopencv_imgproc -lQtGui -L/usr/local/lib/ -L/usr/local/Qt/lib -L/usr/local/tslib/lib -lQtNetwork -lQtCore -lpthread 
AR            = /home/texierp/Documents/segment_SOL/crosstool-chain/gcc-linaro-arm-linux-gnueabihf-4.7-2013.01-20130125_linux/bin/arm-linux-gnueabihf-ar cqs
RANLIB        = 
QMAKE         = /usr/local/Qt/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = /home/texierp/Documents/segment_SOL/crosstool-chain/gcc-linaro-arm-linux-gnueabihf-4.7-2013.01-20130125_linux/bin/arm-linux-gnueabihf-strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		mainwindow.cpp \
		camerawidget.cpp \
		nunchuck.cpp \
		qattitudeindicator.cpp \
		lightmaps.cpp \
		slippymap.cpp \
		mydisplay.cpp \
		battery.cpp \
		qbase.cpp \
		uart.cpp \
		zigbee.cpp moc_mainwindow.cpp \
		moc_qattitudeindicator.cpp \
		moc_lightmaps.cpp \
		moc_slippymap.cpp \
		moc_battery.cpp \
		moc_qbase.cpp
OBJECTS       = main.o \
		mainwindow.o \
		camerawidget.o \
		nunchuck.o \
		qattitudeindicator.o \
		lightmaps.o \
		slippymap.o \
		mydisplay.o \
		battery.o \
		qbase.o \
		uart.o \
		zigbee.o \
		moc_mainwindow.o \
		moc_qattitudeindicator.o \
		moc_lightmaps.o \
		moc_slippymap.o \
		moc_battery.o \
		moc_qbase.o
DIST          = /usr/local/Qt/mkspecs/common/unix.conf \
		/usr/local/Qt/mkspecs/common/linux.conf \
		/usr/local/Qt/mkspecs/common/gcc-base.conf \
		/usr/local/Qt/mkspecs/common/gcc-base-unix.conf \
		/usr/local/Qt/mkspecs/common/g++-base.conf \
		/usr/local/Qt/mkspecs/common/g++-unix.conf \
		/usr/local/Qt/mkspecs/common/qws.conf \
		/usr/local/Qt/mkspecs/qconfig.pri \
		/usr/local/Qt/mkspecs/features/qt_functions.prf \
		/usr/local/Qt/mkspecs/features/qt_config.prf \
		/usr/local/Qt/mkspecs/features/exclusive_builds.prf \
		/usr/local/Qt/mkspecs/features/default_pre.prf \
		/usr/local/Qt/mkspecs/features/release.prf \
		/usr/local/Qt/mkspecs/features/default_post.prf \
		/usr/local/Qt/mkspecs/features/warn_on.prf \
		/usr/local/Qt/mkspecs/features/qt.prf \
		/usr/local/Qt/mkspecs/features/unix/thread.prf \
		/usr/local/Qt/mkspecs/features/moc.prf \
		/usr/local/Qt/mkspecs/features/resources.prf \
		/usr/local/Qt/mkspecs/features/uic.prf \
		/usr/local/Qt/mkspecs/features/yacc.prf \
		/usr/local/Qt/mkspecs/features/lex.prf \
		/usr/local/Qt/mkspecs/features/include_source_dir.prf \
		ihm2.pro
QMAKE_TARGET  = ihm
DESTDIR       = 
TARGET        = ihm

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_mainwindow.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: ihm2.pro  /usr/local/Qt/mkspecs/qws/linux-arm-g++/qmake.conf /usr/local/Qt/mkspecs/common/unix.conf \
		/usr/local/Qt/mkspecs/common/linux.conf \
		/usr/local/Qt/mkspecs/common/gcc-base.conf \
		/usr/local/Qt/mkspecs/common/gcc-base-unix.conf \
		/usr/local/Qt/mkspecs/common/g++-base.conf \
		/usr/local/Qt/mkspecs/common/g++-unix.conf \
		/usr/local/Qt/mkspecs/common/qws.conf \
		/usr/local/Qt/mkspecs/qconfig.pri \
		/usr/local/Qt/mkspecs/features/qt_functions.prf \
		/usr/local/Qt/mkspecs/features/qt_config.prf \
		/usr/local/Qt/mkspecs/features/exclusive_builds.prf \
		/usr/local/Qt/mkspecs/features/default_pre.prf \
		/usr/local/Qt/mkspecs/features/release.prf \
		/usr/local/Qt/mkspecs/features/default_post.prf \
		/usr/local/Qt/mkspecs/features/warn_on.prf \
		/usr/local/Qt/mkspecs/features/qt.prf \
		/usr/local/Qt/mkspecs/features/unix/thread.prf \
		/usr/local/Qt/mkspecs/features/moc.prf \
		/usr/local/Qt/mkspecs/features/resources.prf \
		/usr/local/Qt/mkspecs/features/uic.prf \
		/usr/local/Qt/mkspecs/features/yacc.prf \
		/usr/local/Qt/mkspecs/features/lex.prf \
		/usr/local/Qt/mkspecs/features/include_source_dir.prf \
		/usr/local/Qt/lib/libQtGui.prl \
		/usr/local/Qt/lib/libQtNetwork.prl \
		/usr/local/Qt/lib/libQtCore.prl
	$(QMAKE) -spec /usr/local/Qt/mkspecs/qws/linux-arm-g++ -o Makefile ihm2.pro
/usr/local/Qt/mkspecs/common/unix.conf:
/usr/local/Qt/mkspecs/common/linux.conf:
/usr/local/Qt/mkspecs/common/gcc-base.conf:
/usr/local/Qt/mkspecs/common/gcc-base-unix.conf:
/usr/local/Qt/mkspecs/common/g++-base.conf:
/usr/local/Qt/mkspecs/common/g++-unix.conf:
/usr/local/Qt/mkspecs/common/qws.conf:
/usr/local/Qt/mkspecs/qconfig.pri:
/usr/local/Qt/mkspecs/features/qt_functions.prf:
/usr/local/Qt/mkspecs/features/qt_config.prf:
/usr/local/Qt/mkspecs/features/exclusive_builds.prf:
/usr/local/Qt/mkspecs/features/default_pre.prf:
/usr/local/Qt/mkspecs/features/release.prf:
/usr/local/Qt/mkspecs/features/default_post.prf:
/usr/local/Qt/mkspecs/features/warn_on.prf:
/usr/local/Qt/mkspecs/features/qt.prf:
/usr/local/Qt/mkspecs/features/unix/thread.prf:
/usr/local/Qt/mkspecs/features/moc.prf:
/usr/local/Qt/mkspecs/features/resources.prf:
/usr/local/Qt/mkspecs/features/uic.prf:
/usr/local/Qt/mkspecs/features/yacc.prf:
/usr/local/Qt/mkspecs/features/lex.prf:
/usr/local/Qt/mkspecs/features/include_source_dir.prf:
/usr/local/Qt/lib/libQtGui.prl:
/usr/local/Qt/lib/libQtNetwork.prl:
/usr/local/Qt/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/local/Qt/mkspecs/qws/linux-arm-g++ -o Makefile ihm2.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/ihm1.0.0 || $(MKDIR) .tmp/ihm1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/ihm1.0.0/ && $(COPY_FILE) --parents mainwindow.h camerawidget.h nunchuck.h qattitudeindicator.h lightmaps.h slippymap.h mydisplay.h librairie.h battery.h zigbee.h qbase.h typdefUart.h uart.h .tmp/ihm1.0.0/ && $(COPY_FILE) --parents main.cpp mainwindow.cpp camerawidget.cpp nunchuck.cpp qattitudeindicator.cpp lightmaps.cpp slippymap.cpp mydisplay.cpp battery.cpp qbase.cpp uart.cpp zigbee.cpp .tmp/ihm1.0.0/ && $(COPY_FILE) --parents mainwindow.ui .tmp/ihm1.0.0/ && (cd `dirname .tmp/ihm1.0.0` && $(TAR) ihm1.0.0.tar ihm1.0.0 && $(COMPRESS) ihm1.0.0.tar) && $(MOVE) `dirname .tmp/ihm1.0.0`/ihm1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/ihm1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp moc_qattitudeindicator.cpp moc_lightmaps.cpp moc_slippymap.cpp moc_battery.cpp moc_qbase.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_qattitudeindicator.cpp moc_lightmaps.cpp moc_slippymap.cpp moc_battery.cpp moc_qbase.cpp
moc_mainwindow.cpp: /usr/local/include/opencv2/highgui/highgui.hpp \
		/usr/local/include/opencv2/core/core.hpp \
		/usr/local/include/opencv2/core/types_c.h \
		/usr/local/include/opencv2/core/version.hpp \
		/usr/local/include/opencv2/core/operations.hpp \
		/usr/local/include/opencv2/core/mat.hpp \
		/usr/local/include/opencv2/highgui/highgui_c.h \
		/usr/local/include/opencv2/core/core_c.h \
		mydisplay.h \
		librairie.h \
		/usr/local/include/opencv2/features2d/features2d.hpp \
		/usr/local/include/opencv2/flann/miniflann.hpp \
		/usr/local/include/opencv2/flann/defines.h \
		/usr/local/include/opencv2/flann/config.h \
		/usr/local/include/opencv2/calib3d/calib3d.hpp \
		/usr/local/include/opencv2/imgproc/imgproc_c.h \
		/usr/local/include/opencv2/imgproc/types_c.h \
		/usr/local/include/opencv2/opencv.hpp \
		/usr/local/include/opencv2/imgproc/imgproc.hpp \
		/usr/local/include/opencv2/photo/photo.hpp \
		/usr/local/include/opencv2/photo/photo_c.h \
		/usr/local/include/opencv2/video/video.hpp \
		/usr/local/include/opencv2/video/tracking.hpp \
		/usr/local/include/opencv2/video/background_segm.hpp \
		/usr/local/include/opencv2/objdetect/objdetect.hpp \
		/usr/local/include/opencv2/ml/ml.hpp \
		/usr/local/include/opencv2/contrib/contrib.hpp \
		/usr/local/include/opencv2/contrib/retina.hpp \
		/usr/local/include/opencv2/contrib/openfabmap.hpp \
		camerawidget.h \
		qbase.h \
		nunchuck.h \
		zigbee.h \
		uart.h \
		typdefUart.h \
		qattitudeindicator.h \
		battery.h \
		ui_mainwindow.h \
		lightmaps.h \
		slippymap.h \
		mainwindow.h
	/usr/local/Qt/bin/moc $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_qattitudeindicator.cpp: nunchuck.h \
		qattitudeindicator.h
	/usr/local/Qt/bin/moc $(DEFINES) $(INCPATH) qattitudeindicator.h -o moc_qattitudeindicator.cpp

moc_lightmaps.cpp: lightmaps.h
	/usr/local/Qt/bin/moc $(DEFINES) $(INCPATH) lightmaps.h -o moc_lightmaps.cpp

moc_slippymap.cpp: slippymap.h
	/usr/local/Qt/bin/moc $(DEFINES) $(INCPATH) slippymap.h -o moc_slippymap.cpp

moc_battery.cpp: battery.h
	/usr/local/Qt/bin/moc $(DEFINES) $(INCPATH) battery.h -o moc_battery.cpp

moc_qbase.cpp: nunchuck.h \
		zigbee.h \
		uart.h \
		typdefUart.h \
		qattitudeindicator.h \
		qbase.h
	/usr/local/Qt/bin/moc $(DEFINES) $(INCPATH) qbase.h -o moc_qbase.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h
ui_mainwindow.h: mainwindow.ui
	/usr/local/Qt/bin/uic mainwindow.ui -o ui_mainwindow.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: main.cpp mainwindow.h \
		/usr/local/include/opencv2/highgui/highgui.hpp \
		/usr/local/include/opencv2/core/core.hpp \
		/usr/local/include/opencv2/core/types_c.h \
		/usr/local/include/opencv2/core/version.hpp \
		/usr/local/include/opencv2/core/operations.hpp \
		/usr/local/include/opencv2/core/mat.hpp \
		/usr/local/include/opencv2/highgui/highgui_c.h \
		/usr/local/include/opencv2/core/core_c.h \
		mydisplay.h \
		librairie.h \
		/usr/local/include/opencv2/features2d/features2d.hpp \
		/usr/local/include/opencv2/flann/miniflann.hpp \
		/usr/local/include/opencv2/flann/defines.h \
		/usr/local/include/opencv2/flann/config.h \
		/usr/local/include/opencv2/calib3d/calib3d.hpp \
		/usr/local/include/opencv2/imgproc/imgproc_c.h \
		/usr/local/include/opencv2/imgproc/types_c.h \
		/usr/local/include/opencv2/opencv.hpp \
		/usr/local/include/opencv2/imgproc/imgproc.hpp \
		/usr/local/include/opencv2/photo/photo.hpp \
		/usr/local/include/opencv2/photo/photo_c.h \
		/usr/local/include/opencv2/video/video.hpp \
		/usr/local/include/opencv2/video/tracking.hpp \
		/usr/local/include/opencv2/video/background_segm.hpp \
		/usr/local/include/opencv2/objdetect/objdetect.hpp \
		/usr/local/include/opencv2/ml/ml.hpp \
		/usr/local/include/opencv2/contrib/contrib.hpp \
		/usr/local/include/opencv2/contrib/retina.hpp \
		/usr/local/include/opencv2/contrib/openfabmap.hpp \
		camerawidget.h \
		qbase.h \
		nunchuck.h \
		zigbee.h \
		uart.h \
		typdefUart.h \
		qattitudeindicator.h \
		battery.h \
		ui_mainwindow.h \
		lightmaps.h \
		slippymap.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		/usr/local/include/opencv2/highgui/highgui.hpp \
		/usr/local/include/opencv2/core/core.hpp \
		/usr/local/include/opencv2/core/types_c.h \
		/usr/local/include/opencv2/core/version.hpp \
		/usr/local/include/opencv2/core/operations.hpp \
		/usr/local/include/opencv2/core/mat.hpp \
		/usr/local/include/opencv2/highgui/highgui_c.h \
		/usr/local/include/opencv2/core/core_c.h \
		mydisplay.h \
		librairie.h \
		/usr/local/include/opencv2/features2d/features2d.hpp \
		/usr/local/include/opencv2/flann/miniflann.hpp \
		/usr/local/include/opencv2/flann/defines.h \
		/usr/local/include/opencv2/flann/config.h \
		/usr/local/include/opencv2/calib3d/calib3d.hpp \
		/usr/local/include/opencv2/imgproc/imgproc_c.h \
		/usr/local/include/opencv2/imgproc/types_c.h \
		/usr/local/include/opencv2/opencv.hpp \
		/usr/local/include/opencv2/imgproc/imgproc.hpp \
		/usr/local/include/opencv2/photo/photo.hpp \
		/usr/local/include/opencv2/photo/photo_c.h \
		/usr/local/include/opencv2/video/video.hpp \
		/usr/local/include/opencv2/video/tracking.hpp \
		/usr/local/include/opencv2/video/background_segm.hpp \
		/usr/local/include/opencv2/objdetect/objdetect.hpp \
		/usr/local/include/opencv2/ml/ml.hpp \
		/usr/local/include/opencv2/contrib/contrib.hpp \
		/usr/local/include/opencv2/contrib/retina.hpp \
		/usr/local/include/opencv2/contrib/openfabmap.hpp \
		camerawidget.h \
		qbase.h \
		nunchuck.h \
		zigbee.h \
		uart.h \
		typdefUart.h \
		qattitudeindicator.h \
		battery.h \
		ui_mainwindow.h \
		lightmaps.h \
		slippymap.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

camerawidget.o: camerawidget.cpp camerawidget.h \
		/usr/local/include/opencv2/opencv.hpp \
		/usr/local/include/opencv2/core/core_c.h \
		/usr/local/include/opencv2/core/types_c.h \
		/usr/local/include/opencv2/core/core.hpp \
		/usr/local/include/opencv2/core/version.hpp \
		/usr/local/include/opencv2/core/operations.hpp \
		/usr/local/include/opencv2/core/mat.hpp \
		/usr/local/include/opencv2/flann/miniflann.hpp \
		/usr/local/include/opencv2/flann/defines.h \
		/usr/local/include/opencv2/flann/config.h \
		/usr/local/include/opencv2/imgproc/imgproc_c.h \
		/usr/local/include/opencv2/imgproc/types_c.h \
		/usr/local/include/opencv2/imgproc/imgproc.hpp \
		/usr/local/include/opencv2/photo/photo.hpp \
		/usr/local/include/opencv2/photo/photo_c.h \
		/usr/local/include/opencv2/video/video.hpp \
		/usr/local/include/opencv2/video/tracking.hpp \
		/usr/local/include/opencv2/video/background_segm.hpp \
		/usr/local/include/opencv2/features2d/features2d.hpp \
		/usr/local/include/opencv2/objdetect/objdetect.hpp \
		/usr/local/include/opencv2/calib3d/calib3d.hpp \
		/usr/local/include/opencv2/ml/ml.hpp \
		/usr/local/include/opencv2/highgui/highgui_c.h \
		/usr/local/include/opencv2/highgui/highgui.hpp \
		/usr/local/include/opencv2/contrib/contrib.hpp \
		/usr/local/include/opencv2/contrib/retina.hpp \
		/usr/local/include/opencv2/contrib/openfabmap.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o camerawidget.o camerawidget.cpp

nunchuck.o: nunchuck.cpp nunchuck.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o nunchuck.o nunchuck.cpp

qattitudeindicator.o: qattitudeindicator.cpp qattitudeindicator.h \
		nunchuck.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qattitudeindicator.o qattitudeindicator.cpp

lightmaps.o: lightmaps.cpp lightmaps.h \
		slippymap.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o lightmaps.o lightmaps.cpp

slippymap.o: slippymap.cpp slippymap.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o slippymap.o slippymap.cpp

mydisplay.o: mydisplay.cpp mydisplay.h \
		librairie.h \
		/usr/local/include/opencv2/core/core.hpp \
		/usr/local/include/opencv2/core/types_c.h \
		/usr/local/include/opencv2/core/version.hpp \
		/usr/local/include/opencv2/core/operations.hpp \
		/usr/local/include/opencv2/core/mat.hpp \
		/usr/local/include/opencv2/features2d/features2d.hpp \
		/usr/local/include/opencv2/flann/miniflann.hpp \
		/usr/local/include/opencv2/flann/defines.h \
		/usr/local/include/opencv2/flann/config.h \
		/usr/local/include/opencv2/highgui/highgui.hpp \
		/usr/local/include/opencv2/highgui/highgui_c.h \
		/usr/local/include/opencv2/core/core_c.h \
		/usr/local/include/opencv2/calib3d/calib3d.hpp \
		/usr/local/include/opencv2/imgproc/imgproc_c.h \
		/usr/local/include/opencv2/imgproc/types_c.h \
		/usr/local/include/opencv2/opencv.hpp \
		/usr/local/include/opencv2/imgproc/imgproc.hpp \
		/usr/local/include/opencv2/photo/photo.hpp \
		/usr/local/include/opencv2/photo/photo_c.h \
		/usr/local/include/opencv2/video/video.hpp \
		/usr/local/include/opencv2/video/tracking.hpp \
		/usr/local/include/opencv2/video/background_segm.hpp \
		/usr/local/include/opencv2/objdetect/objdetect.hpp \
		/usr/local/include/opencv2/ml/ml.hpp \
		/usr/local/include/opencv2/contrib/contrib.hpp \
		/usr/local/include/opencv2/contrib/retina.hpp \
		/usr/local/include/opencv2/contrib/openfabmap.hpp \
		/usr/local/include/opencv/cv.h \
		/usr/local/include/opencv2/flann/flann.hpp \
		/usr/local/include/opencv2/flann/flann_base.hpp \
		/usr/local/include/opencv2/flann/general.h \
		/usr/local/include/opencv2/flann/matrix.h \
		/usr/local/include/opencv2/flann/params.h \
		/usr/local/include/opencv2/flann/any.h \
		/usr/local/include/opencv2/flann/saving.h \
		/usr/local/include/opencv2/flann/nn_index.h \
		/usr/local/include/opencv2/flann/result_set.h \
		/usr/local/include/opencv2/flann/all_indices.h \
		/usr/local/include/opencv2/flann/kdtree_index.h \
		/usr/local/include/opencv2/flann/dynamic_bitset.h \
		/usr/local/include/opencv2/flann/dist.h \
		/usr/local/include/opencv2/flann/heap.h \
		/usr/local/include/opencv2/flann/allocator.h \
		/usr/local/include/opencv2/flann/random.h \
		/usr/local/include/opencv2/flann/kdtree_single_index.h \
		/usr/local/include/opencv2/flann/kmeans_index.h \
		/usr/local/include/opencv2/flann/logger.h \
		/usr/local/include/opencv2/flann/composite_index.h \
		/usr/local/include/opencv2/flann/linear_index.h \
		/usr/local/include/opencv2/flann/hierarchical_clustering_index.h \
		/usr/local/include/opencv2/flann/lsh_index.h \
		/usr/local/include/opencv2/flann/lsh_table.h \
		/usr/local/include/opencv2/flann/autotuned_index.h \
		/usr/local/include/opencv2/flann/ground_truth.h \
		/usr/local/include/opencv2/flann/index_testing.h \
		/usr/local/include/opencv2/flann/timer.h \
		/usr/local/include/opencv2/flann/sampling.h \
		/usr/local/include/opencv2/legacy/compat.hpp \
		/usr/local/include/opencv2/core/internal.hpp \
		/usr/local/include/opencv/highgui.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mydisplay.o mydisplay.cpp

battery.o: battery.cpp battery.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o battery.o battery.cpp

qbase.o: qbase.cpp qbase.h \
		nunchuck.h \
		zigbee.h \
		uart.h \
		typdefUart.h \
		qattitudeindicator.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qbase.o qbase.cpp

uart.o: uart.cpp uart.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o uart.o uart.cpp

zigbee.o: zigbee.cpp zigbee.h \
		uart.h \
		typdefUart.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o zigbee.o zigbee.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_qattitudeindicator.o: moc_qattitudeindicator.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qattitudeindicator.o moc_qattitudeindicator.cpp

moc_lightmaps.o: moc_lightmaps.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_lightmaps.o moc_lightmaps.cpp

moc_slippymap.o: moc_slippymap.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_slippymap.o moc_slippymap.cpp

moc_battery.o: moc_battery.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_battery.o moc_battery.cpp

moc_qbase.o: moc_qbase.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qbase.o moc_qbase.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

