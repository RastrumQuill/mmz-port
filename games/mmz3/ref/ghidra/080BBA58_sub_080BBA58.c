// sub_080BBA58 at 0x080BBA58 (thumb)

undefined4 sub_080BBA58(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x22) = *(undefined *)(param_1 + 0x12);
    uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0x5c) = (uVar1 * 0x40 >> 0x16) - 0x200;
    uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar1 & 0x7fffffff;
    *(uint *)(param_1 + 0x60) = -0x100 - (uVar1 * 0x80 >> 0x17);
    sub_08017700(param_1,0x2c00);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080177F4(param_1);
  iVar2 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((iVar2 < 0) && (0 < *(int *)(param_1 + 0x60))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

