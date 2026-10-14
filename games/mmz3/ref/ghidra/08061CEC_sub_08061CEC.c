// sub_08061CEC at 0x08061CEC (thumb)

undefined4 sub_08061CEC(int param_1)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (*(char *)(iVar2 + 0x10) == '\x01') {
    if ((*(uint *)(param_1 + 0x14) & 8) != 0) {
      *(bool *)(iVar2 + 0xc0) = *(int *)(iVar2 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
    }
  }
  else if ((*(char *)(iVar2 + 0x10) == '\0') && ((*(uint *)(param_1 + 0x14) & 1) != 0)) {
    *(bool *)(iVar2 + 0xc0) = *(int *)(iVar2 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
    psVar3 = (short *)(iVar2 + 0xa4);
    if ((*(uint *)(iVar2 + 0xbc) & 2) != 0) {
      *psVar3 = *psVar3 * 2 - (ushort)*(byte *)(iVar2 + 0xc1);
      uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
      local_24 = (uVar1 * 2 >> 0x11 & 0x7ff) + *(int *)(iVar2 + 0x54) + -0x800;
      uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar1 & 0x7fffffff;
      local_20 = (uVar1 * 2 >> 0x11 & 0x7ff) + *(int *)(iVar2 + 0x58) + -0x1400;
      sub_080B2484(1,&local_24);
      sub_0800471C(0x2a);
    }
    *(byte *)(iVar2 + 0xc1) = (byte)*psVar3;
  }
  return in_lr;
}

