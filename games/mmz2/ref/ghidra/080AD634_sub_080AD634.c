// sub_080AD634 at 0x080AD634 (thumb)

undefined4 sub_080AD634(int *param_1,char param_2)

{
  undefined uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = sub_08006B50(DAT_0202f084);
  if (iVar3 != 0) {
    *(undefined *)(iVar3 + 0x25) = 1;
    *(undefined *)(iVar3 + 9) = 5;
    *(undefined4 *)(iVar3 + 0x14) = 0x80ad855;
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined *)(iVar3 + 0x22) = 0;
    if ((DAT_0202d004 < param_1[1]) || (sVar2 = sub_08008354(*param_1), sVar2 == -0x8000)) {
      uVar1 = 3;
    }
    else {
      uVar1 = 2;
    }
    *(undefined *)(iVar3 + 0x10) = uVar1;
    *(char *)(iVar3 + 0x11) = param_2;
    if (param_2 == '\0') {
      iVar4 = *param_1;
      iVar5 = 0x1400;
    }
    else {
      iVar4 = *param_1;
      iVar5 = -0x1400;
    }
    *(int *)(iVar3 + 0x54) = iVar4 + iVar5;
    *(int *)(iVar3 + 0x58) = param_1[1] + 0x400;
  }
  return in_lr;
}

