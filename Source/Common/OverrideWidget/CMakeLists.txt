
set( file_source_files

	ZQPushbutton.cpp

)

source_group("Source Files" FILES ${file_source_files})

set( file_header_files

	../../../Include/Common/OverrideWidget/ZQPushbutton.h

)

source_group("Header Files" FILES ${file_header_files})

set(srcs ${file_header_files} ${file_source_files})

INCLUDE_DIRECTORIES(
    ${Include_Root}
    ${CMAKE_CURRENT_SOURCE_DIR}
)

LINK_DIRECTORIES(
    ${Lib_Root}/${ConfigurationName}
)

ADD_LIBRARY(OverrideWidget SHARED ${srcs} )

qt5_use_modules(OverrideWidget Widgets)