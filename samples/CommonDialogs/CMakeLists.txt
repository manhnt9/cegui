if(CEGUI_BUILD_COMMON_DIALOGS)
    # Retrieve the current folder's name and generate the names that we will use for the variables containing the headers and source of this Sample
    get_filename_component(SAMPLE_PARENT_DIR_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
    set(SAMPLE_HEADER_LIST_NAME "${SAMPLE_PARENT_DIR_NAME}_SAMPLE_HEADERS")
    set(SAMPLE_SOURCE_LIST_NAME "${SAMPLE_PARENT_DIR_NAME}_SAMPLE_SOURCES")

    # Append the samples names to the list and make the list visible outside this scope
    list(APPEND SAMPLES_LIST "${SAMPLE_PARENT_DIR_NAME}")
    set(SAMPLES_LIST "${SAMPLES_LIST}" PARENT_SCOPE)

    # Retrieve all headers and source files in this sample's folder and make the variables visible outside this scope
    file(GLOB ${SAMPLE_HEADER_LIST_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/*.h)
    file(GLOB ${SAMPLE_SOURCE_LIST_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
    set(${SAMPLE_HEADER_LIST_NAME} "${${SAMPLE_HEADER_LIST_NAME}}" PARENT_SCOPE)
    set(${SAMPLE_SOURCE_LIST_NAME} "${${SAMPLE_SOURCE_LIST_NAME}}" PARENT_SCOPE)
endif()