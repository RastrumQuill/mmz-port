// sub_0803BC1C at 0x0803BC1C (thumb)

undefined4 sub_0803BC1C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = 0x100;
    *(undefined4 *)(param_1 + 0x54) = 0x100;
    if (0 < *(int *)(param_1 + 0xb8)) {
      uVar1 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    *(undefined4 *)(param_1 + 0x58) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082adbd0);
    sub_08029778(param_1,2);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  iVar2 = sub_08007B30(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (iVar2 < 0) {
    iVar3 = *(int *)(param_1 + 0x58);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (0x100 < iVar3) {
      sub_08001EAC(0x48);
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
  }
  sub_0803A7F8(param_1);
  sub_080297C0(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') && (iVar2 < 0)) {
    *(undefined *)(param_1 + 0x12) = 1;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_0803AF84(param_1);
  }
  return in_lr;
}

