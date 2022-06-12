cmake_minimum_required(VERSION 3.22)

project(exp)

set(DXLIB_DIR ${CMAKE_SOURCE_DIR}/dxlib)

include(ExternalProject)
ExternalProject_Add(DxLibDownload
  URL https://dxlib.xsrv.jp/DxLib/DxLibNoneModel_NoneSoftDrawCode_VC_3_23.zip
  SOURCE_DIR ${DXLIB_DIR}
  CONFIGURE_COMMAND ""
  BUILD_COMMAND ""
  INSTALL_COMMAND ""
)

add_subdirectory("./src")
