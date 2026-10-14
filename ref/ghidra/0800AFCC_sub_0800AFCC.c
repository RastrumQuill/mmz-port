// sub_0800AFCC at 0x0800AFCC (thumb)

undefined4 sub_0800AFCC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0x80;
    *(undefined4 *)(param_1 + 0x48) = 0x80;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0xd8;
    DAT_02022664 = 0x30c0 - *(int *)(param_1 + 0x34);
    *(undefined *)(param_1 + 0xe) = 1;
  }
  DAT_02022664 = DAT_02022664 + ((int)((uint)(ushort)DAT_0202265c << 0x10) >> 0x16);
  iVar1 = *(int *)(param_1 + 0x34) + (DAT_02022664 >> 8);
  if (iVar1 < 0x3480) {
    if (0x30bf < iVar1) goto LAB_0800b03e;
    iVar1 = 0x1e000;
  }
  else {
    iVar1 = -0x1e000;
  }
  DAT_02022664 = DAT_02022664 + iVar1;
LAB_0800b03e:
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + (DAT_02022664 >> 8);
  return in_lr;
}

