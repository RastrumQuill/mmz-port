// sub_0807E6E4 at 0x0807E6E4 (thumb)

undefined4 sub_0807E6E4(int param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = false;
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x5c03);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x20;
    iVar4 = *(int *)(param_1 + 0x54);
    iVar3 = *(int *)(param_1 + 0x58);
    if (iVar4 <= *(int *)(DAT_0202e130 + 0x54)) goto LAB_0807e74c;
  }
  else {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x20;
    iVar4 = *(int *)(param_1 + 0x54);
    iVar3 = *(int *)(param_1 + 0x58);
    if (*(int *)(DAT_0202e130 + 0x54) <= iVar4) goto LAB_0807e74c;
  }
  if (*(int *)(DAT_0202e130 + 0x58) + -0x2000 < iVar3) {
    bVar1 = true;
  }
LAB_0807e74c:
  iVar4 = iVar4 + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  sVar2 = sub_08008CFC(iVar4,iVar3 + 0x2000);
  if (sVar2 != 0) {
    bVar1 = true;
  }
  if (bVar1) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x5c);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (0x500 < iVar4) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(bool *)(param_1 + 0xe) = bVar1;
    }
  }
  return in_lr;
}

