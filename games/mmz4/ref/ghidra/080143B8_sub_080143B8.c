// sub_080143B8 at 0x080143B8 (thumb)

undefined4 sub_080143B8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000a40 = 0x3b44;
    DAT_02000a42 = 0xc0a;
    if ((DAT_0202cac0 & 0xf) == 2) {
      DAT_02000a00 = DAT_02000a00 & ~(ushort)(*(int *)(param_1 + 0x5c) << 8);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

