
IF (WIN32)
	SET(PROJECTTYPE dll)
	SET(SUBPROJECT_NAME MedicalImageApplication)
	#configure_file (${RC_FILE} ${CMAKE_CURRENT_SOURCE_DIR}/CASCADEApplication.rc)
	#SET(file_ResourceFiles
	#CASCADEApplication.rc)
	#SOURCE_GROUP("Resource Files" FILES ${file_ResourceFiles})
	#SET(WINRCSrcs ${file_ResourceFiles})
ENDIF(WIN32)

set(file_source_files
	main.cpp)
	
source_group("Source Files" FILES ${file_source_files})

set(file_header_files
	
	)
	
source_group("Header Files" FILES ${file_header_files})

SET(srcs  ${file_source_files} ${file_header_files} )

FIND_PACKAGE(Qt5Widgets REQUIRED)

INCLUDE_DIRECTORIES(
	${Include_Root}
	${CMAKE_CURRENT_SOURCE_DIR}
)

ADD_EXECUTABLE(MedicalImageApplication WIN32 ${srcs})


SET_TARGET_PROPERTIES(MedicalImageApplication
PROPERTIES
RUNTIME_OUTPUT_DIRECTORY ${Bin_Root}
)
SET_TARGET_PROPERTIES(MedicalImageApplication
PROPERTIES
ARCHIVE_OUTPUT_DIRECTORY ${Lib_Root}
)

qt5_use_modules(MedicalImageApplication Widgets)
qt5_use_modules(MedicalImageApplication Core)
qt5_use_modules(MedicalImageApplication Gui)

TARGET_LINK_LIBRARIES(MedicalImageApplication
	
	
)
