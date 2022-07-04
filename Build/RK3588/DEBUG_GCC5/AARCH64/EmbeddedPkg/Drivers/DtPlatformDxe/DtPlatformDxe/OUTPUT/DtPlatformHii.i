extern unsigned char DtPlatformDxeStrings[];
extern EFI_GUID gEfiHiiPlatformSetupFormsetGuid;
extern EFI_GUID gEfiHiiDriverHealthFormsetGuid;
extern EFI_GUID gEfiHiiUserCredentialFormsetGuid;
extern EFI_GUID gEfiHiiRestStyleFormsetGuid;
extern EFI_GUID { 0x2b7a240d, 0xd5ad, 0x4fd6, { 0xbe, 0x1c, 0xdf, 0xa4, 0x41, 0x5f, 0x55, 0x26 } };
typedef struct {
  UINT8 Pref;
  UINT8 Reserved[3];
} DT_ACPI_VARSTORE_DATA;
formset
  guid = { 0x2b7a240d, 0xd5ad, 0x4fd6, { 0xbe, 0x1c, 0xdf, 0xa4, 0x41, 0x5f, 0x55, 0x26 } },
  title = STRING_TOKEN(0x0002),
  help = STRING_TOKEN(0x0003),
  classguid = { 0x93039971, 0x8545, 0x4b04, { 0xb4, 0x5e, 0x32, 0xeb, 0x83, 0x26, 0x4, 0xe } },
  efivarstore DT_ACPI_VARSTORE_DATA,
    attribute = 0x00000002 | 0x00000001,
    name = DtAcpiPref,
    guid = { 0x2b7a240d, 0xd5ad, 0x4fd6, { 0xbe, 0x1c, 0xdf, 0xa4, 0x41, 0x5f, 0x55, 0x26 } };
  form formid = 0x1000,
    title = STRING_TOKEN(0x0004);
    oneof varid = DtAcpiPref.Pref,
        prompt = STRING_TOKEN(0x0006),
        help = STRING_TOKEN(0x0007),
        flags = NUMERIC_SIZE_1 | INTERACTIVE | RESET_REQUIRED,
        option text = STRING_TOKEN(0x0008), value = 0x0, flags = DEFAULT;
        option text = STRING_TOKEN(0x0009), value = 0x1, flags = 0;
    endoneof;
    subtitle text = STRING_TOKEN(0x0005);
  endform;
endformset;
