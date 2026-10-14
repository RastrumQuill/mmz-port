// sub_0806FC44 at 0x0806FC44 (thumb)

undefined4 sub_0806FC44(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0x54)) {
      *(undefined *)(param_1 + 0x12) = 0;
    }
    else {
      *(undefined *)(param_1 + 0x12) = 1;
    }
    if (*(char *)(*(int *)(param_1 + 0xbc + (uint)*(byte *)(param_1 + 0x12) * 4) + 0xd) != '\0') {
      sub_0801CFF0(param_1);
      return in_lr;
    }
    sub_0801CF00(param_1,0x8d02);
    *(undefined *)(*(int *)(param_1 + 0xbc + (uint)*(byte *)(param_1 + 0x12) * 4) + 0xbe) = 1;
    if (*(char *)(param_1 + 0x12) == '\0') {
      uVar1 = 2;
    }
    else {
      uVar1 = 0xfffffffe;
    }
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(undefined4 *)(param_1 + 0x68) = 4;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) * -0x20;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08002B10(0x15f);
    *(undefined *)(param_1 + 0xf) = 0;
LAB_0806fcee:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if ((*(char *)(param_1 + 0xe) == '\x01') && (*(char *)(param_1 + 0x73) == '\x03')) {
    sub_0801CF00(param_1,0x8d03);
    goto LAB_0806fcee;
  }
  sub_0801CFF0(param_1);
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  if (*(int *)(param_1 + 100) < 1) {
    iVar2 = *(int *)(param_1 + 0xb4);
    if (iVar2 <= iVar3) goto LAB_0806fd2e;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xb4);
    if (iVar3 <= iVar2) goto LAB_0806fd2e;
  }
  *(int *)(param_1 + 0x54) = iVar2;
LAB_0806fd2e:
  iVar3 = *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x58) + iVar3;
  *(int *)(param_1 + 0x58) = iVar2;
  if (iVar3 < 0) {
    *(int *)(param_1 + 0x60) = iVar3 + *(int *)(param_1 + 0x68);
  }
  else {
    *(int *)(param_1 + 0x60) = iVar3 + *(int *)(param_1 + 0x68) * 2;
    if (*(int *)(param_1 + 0xb8) < iVar2) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    }
  }
  if (*(char *)(*(int *)(param_1 + 0xbc + (uint)*(byte *)(param_1 + 0x12) * 4) + 0xbe) == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

