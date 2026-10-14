// sub_080ACD78 at 0x080ACD78 (thumb)

undefined4 sub_080ACD78(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,2);
    *(undefined *)(param_1 + 0xe) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0xffffff00;
    }
    else {
      uVar2 = 0x100;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar2;
  }
  sub_0809C980(param_1);
  iVar4 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  iVar5 = iVar4 - *(int *)(param_1 + 0xbc);
  if (iVar5 < 0) {
    iVar5 = *(int *)(param_1 + 0xbc) - iVar4;
  }
  if (iVar5 < 0x4001) {
    iVar5 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = iVar5;
    cVar1 = sub_080065AC(iVar5 + *(int *)(param_1 + 0x54) * 0x10,*(int *)(param_1 + 0x50) + -0x800);
    if (cVar1 == '\0') {
      cVar1 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0x13) = 0xb4;
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar3 & 0x7fffffff;
      if ((uVar3 * 2 >> 0x11 & 1) != 0) {
        *(undefined *)(param_1 + 0xd) = 0;
        goto LAB_080ace38;
      }
    }
  }
  *(undefined *)(param_1 + 0xd) = 2;
LAB_080ace38:
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

