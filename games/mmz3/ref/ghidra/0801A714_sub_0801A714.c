// sub_0801A714 at 0x0801A714 (thumb)

longlong sub_0801A714(ushort *param_1)

{
  uint in_lr;
  
  if (*(char *)(param_1 + 0xbe) == '\0') {
    DAT_020301a8 = DAT_020301a8 | 1;
    sub_08021D7C(&DAT_020301b0,**(undefined4 **)(&DAT_08349844 + (uint)*param_1 * 4));
    *(char *)(param_1 + 0xbe) = '\x01';
  }
  return (ulonglong)in_lr << 0x20;
}

