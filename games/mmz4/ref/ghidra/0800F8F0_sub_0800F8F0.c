// sub_0800F8F0 at 0x0800F8F0 (thumb)

undefined4 sub_0800F8F0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000a00 = DAT_02000a00 & ~(ushort)(*(int *)(param_1 + 0x5c) << 8);
    DAT_0202ea54 = 0x1e000;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if ((DAT_0202e924 & 1) != 0) {
    DAT_0202ea54 = 0xf000;
  }
  return in_lr;
}

