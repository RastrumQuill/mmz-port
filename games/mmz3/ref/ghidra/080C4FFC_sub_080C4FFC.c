// sub_080C4FFC at 0x080C4FFC (thumb)

undefined4 sub_080C4FFC(int param_1)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    uVar1 = sub_080FE4D8(uVar2 * 2 >> 0x11,0xff);
    *(undefined *)(param_1 + 0x13) = uVar1;
    *(undefined *)(param_1 + 0x24) = uVar1;
    *(undefined2 *)(param_1 + 0x50) = 0x80;
    *(undefined2 *)(param_1 + 0x52) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -0xc >> 8);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080177F4(param_1);
  return in_lr;
}

