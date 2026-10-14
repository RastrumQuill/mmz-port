// sub_0804CA68 at 0x0804CA68 (thumb)

undefined4 sub_0804CA68(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x4c) + (*(int *)(param_1 + 0x54) >> 1);
  *(int *)(param_1 + 0x4c) = iVar4;
  bVar1 = *(byte *)(param_1 + 10);
  if ((bVar1 & 0x10) == 0) {
    iVar4 = sub_08008120(iVar4 + -0x800,*(undefined4 *)(param_1 + 0x50));
    if (iVar4 < 1) goto LAB_0804cab4;
    *(byte *)(param_1 + 0x12) = bVar1 & 0x10;
  }
  else {
    iVar4 = sub_08007EE0(iVar4 + 0x800,*(undefined4 *)(param_1 + 0x50));
    if (-1 < iVar4) goto LAB_0804cab4;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar4;
LAB_0804cab4:
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar4 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar4;
  if (0x6ff < iVar4) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  iVar3 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0x800,*(int *)(param_1 + 0x50) + 0x40);
  iVar4 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0x800,*(int *)(param_1 + 0x50) + 0x40);
  if ((iVar3 < 0) || (iVar4 < 0)) {
    if (iVar3 < iVar4) {
      iVar3 = *(int *)(param_1 + 0x50) + iVar3;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x50) + iVar4;
    }
    *(int *)(param_1 + 0x50) = iVar3;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(undefined *)(param_1 + 0x45) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
  cVar2 = sub_0804AC68(param_1);
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0xc4) = 0;
    sub_0804AD34(param_1);
    sub_0804B2F8(param_1);
  }
  return in_lr;
}

