// sub_08051848 at 0x08051848 (thumb)

undefined4 sub_08051848(int param_1)

{
  bool bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08854948);
    if (*(short *)(param_1 + 0xa4) < 0x11) {
      uVar3 = 0x340;
    }
    else {
      uVar3 = 0x300;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(bool *)(param_1 + 0xf) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  bVar1 = false;
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar5 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    iVar4 = *(int *)(DAT_0202dbf0 + 0x54);
    if (iVar5 < iVar4) goto LAB_080518e6;
    sVar2 = sub_08007C7C(iVar5 + -0x2300,*(int *)(param_1 + 0x58) + -0x1b00);
    if (sVar2 != 0) {
      bVar1 = true;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    iVar4 = *(int *)(DAT_0202dbf0 + 0x54);
    if (iVar4 < iVar5) {
LAB_080518e6:
      *(int *)(param_1 + 0x54) = iVar4;
      goto LAB_0805190a;
    }
    sVar2 = sub_08007C7C(iVar5 + 0x2300,*(int *)(param_1 + 0x58) + -0x1b00);
    if (sVar2 != 0) goto LAB_0805190a;
  }
  if (!bVar1) {
    return in_lr;
  }
LAB_0805190a:
  *(undefined *)(param_1 + 0xd) = 0xb;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

