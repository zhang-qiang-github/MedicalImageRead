
set( file_source_files

	ZhqBaseModel.cpp
	
)

source_group("Source Files" FILES ${file_source_files})

set( file_header_files

	../../../Include/Common/BaseClass/ZhqBaseModel.h
	
)

source_group("Header Files" FILES ${file_header_files})

INCLUDE_DIRECTORIES(
    ${Include_Root}
    ${CMAKE_CURRENT_SOURCE_DIR}
)

LINK_DIRECTORIES(
    ${Lib_Root}/${ConfigurationName}

)

set(srcs ${file_header_files} ${file_source_files})
ADD_LIBRARY(BaseClass SHARED ${srcs})

SET_TARGET_PROPERTIES(BaseClass
PROPERTIES
RUNTIME_OUTPUT_DIRECTORY ${Bin_Root}
)

SET_TARGET_PROPERTIES(BaseClass
PROPERTIES
ARCHIVE_OUTPUT_DIRECTORY ${Lib_Root}
)