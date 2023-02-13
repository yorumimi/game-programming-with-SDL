source_group(platform/win32      REGULAR_EXPRESSION "quince/platform/win32/*")

target_sources(quince_static PRIVATE

    $<$<PLATFORM_ID:Windows>:
        # NOTE: platform/win32
    >
)