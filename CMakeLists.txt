cmake_minimum_required(VERSION 3.0)
project(exptest CXX)

set(CMAKE_CXX_STANDARD 17)

function(add_executable_simple tgt)
    set(srcs ${ARGN})
    add_executable(${tgt} ${srcs})
    if(${CMAKE_SYSTEM_NAME} STREQUAL "iOS")
        set_target_properties(${tgt}
            PROPERTIES 
            MACOSX_BUNDLE_BUNDLE_VERSION 
            0.0.0
            MACOSX_BUNDLE_SHORT_VERSION_STRING
            0
            MACOSX_BUNDLE_GUI_IDENTIFIER
            org.cltn.temp.${tgt})
    endif()
endfunction()

add_executable_simple(exptest
    exptest.cxx)

add_executable_simple(bad_alloc_replace
    bad_alloc_replace.cxx)

add_executable_simple(bad_alloc_noreplace
    bad_alloc_noreplace.cxx)

add_executable_simple(bad_optional_access
    bad_optional_access.cxx)

add_executable_simple(bad_variant_access
    bad_variant_access.cxx)

add_executable_simple(bad_cast
    bad_cast.cxx)

add_executable_simple(bad_typeid
    bad_typeid.cxx)

add_executable_simple(bad_function_call
    bad_function_call.cxx)

add_executable_simple(bad_weak_ptr
    bad_weak_ptr.cxx)

add_executable_simple(bad_any_cast
    bad_any_cast.cxx)

add_executable_simple(throw_class
    throw_class.cxx)

add_executable_simple(throw_class2
    throw_class2.cxx)

add_executable_simple(throw_integer
    throw_integer.cxx)

# logic_error
# logic_error > future_error
# domain_error
# invalid_argument
# length_error
# out_of_range
# runtime_error
# runtime_error > ambiguous_local_time
# runtime_error > nonexistent_local_time
# runtime_error > format_error
# runtime_error > regex_error
# runtime_error > system_error
# system_error > filesystem_error
# system_error > ios_base::failure
# range_error
# overflow_error
# undeflow_error
