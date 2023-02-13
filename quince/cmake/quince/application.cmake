source_group(application        REGULAR_EXPRESSION "quince/application/*")

target_sources(quince_static PRIVATE

    $<$<PLATFORM_ID:Windows>:
        # NOTE: platform/win32
        ${QUINCE_SRC_DIR}/application/win32/Application.cpp
        ${QUINCE_SRC_DIR}/application/win32/Application.h
        ${QUINCE_SRC_DIR}/application/win32/GameHost.cpp
        ${QUINCE_SRC_DIR}/application/win32/GameHost.h
        ${QUINCE_SRC_DIR}/application/win32/GameWindow.cpp
        ${QUINCE_SRC_DIR}/application/win32/GameWindow.h
    >
)
