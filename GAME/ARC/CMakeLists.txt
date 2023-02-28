set(HEADER_FILES
    src/ArcUtil.h
    src/ArcApp.h
)

set(SOURCE_FILES 
    src/ArcApp.cpp
)

add_library(ARC SHARED ${HEADER_FILES} ${SOURCE_FILES})

add_definitions(-DARC_LIB)