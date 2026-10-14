// sub_08032DEC at 0x08032DEC (thumb)

ulonglong sub_08032DEC(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0xe8 + param_2 * 2);
  if (((*(uint *)(param_1 + 0xc) & 0xffff00) != 0x20400) &&
     (((*(char *)(param_1 + 0x94) == '\0' || ((*(uint *)(param_1 + 0x8c) & 1) != 0)) &&
      ((*(byte *)(param_1 + 0x18c) & 0x43) == 0)))) {
    uVar1 = uVar1 & 0xfffffffb;
  }
  if (*(char *)(param_1 + 0x94) == '\0') {
    uVar1 = uVar1 & 0xfffffff7;
  }
  return CONCAT44(in_lr,uVar1) & 0xffffffff0000000d;
}

