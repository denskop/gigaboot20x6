#include <efi_err.h>

const char *efi_error_labels[] = {
    "EFI_SUCCESS",
    "EFI_LOAD_ERROR",
    "EFI_INVALID_PARAMETER",
    "EFI_UNSUPPORTED",
    "EFI_BAD_BUFFER_SIZE",
    "EFI_BUFFER_TOO_SMALL",
    "EFI_NOT_READY",
    "EFI_DEVICE_ERROR",
    "EFI_WRITE_PROTECTED",
    "EFI_OUT_OF_RESOURCES",
    "EFI_VOLUME_CORRUPTED",
    "EFI_VOLUME_FULL",
    "EFI_NO_MEDIA",
    "EFI_MEDIA_CHANGED",
    "EFI_NOT_FOUND",
    "EFI_ACCESS_DENIED",
    "EFI_NO_RESPONSE",
    "EFI_NO_MAPPING",
    "EFI_TIMEOUT",
    "EFI_NOT_STARTED",
    "EFI_ALREADY_STARTED",
    "EFI_ABORTED",
    "EFI_ICMP_ERROR",
    "EFI_TFTP_ERROR",
    "EFI_PROTOCOL_ERROR",
    "EFI_INCOMPATIBLE_VERSION",
    "EFI_SECURITY_VIOLATION",
    "EFI_CRC_ERROR",
    "EFI_END_OF_MEDIA",
    "EFI_END_OF_FILE",
    "EFI_INVALID_LANGUAGE",
    "EFI_COMPROMISED_DATA",
};

char *efi_err_to_str(EFI_STATUS status)
{
    size_t i = (~EFI_ERR_MASK & status);
    if (i < sizeof(efi_err_labels)/sizeof(char *)) {
        return efi_error_labels[i];
    }

    return NULL;
}
