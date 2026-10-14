// sub_08014EF8 at 0x08014EF8 (thumb)

longlong sub_08014EF8(ushort *param_1)

{
  uint in_lr;
  
  if (*(char *)(param_1 + 0xbe) == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    sub_0801B454(&DAT_0202ec40,*(undefined4 *)(&DAT_083263f0)[*param_1]);
    *(char *)(param_1 + 0xbe) = '\x01';
  }
  return (ulonglong)in_lr << 0x20;
}

