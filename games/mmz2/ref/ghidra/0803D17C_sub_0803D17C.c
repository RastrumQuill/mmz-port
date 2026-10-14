// sub_0803D17C at 0x0803D17C (thumb)

undefined4 sub_0803D17C(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) == '\x01') && (*(byte *)(param_1 + 0xe) < 2)) {
    iVar3 = *(int *)(param_1 + 0x54);
    if (*(char *)(param_1 + 0x13) == '\0') {
      iVar1 = sub_08009240(iVar3,*(undefined4 *)(param_1 + 0x58));
    }
    else {
      iVar1 = sub_080090D4(iVar3,*(undefined4 *)(param_1 + 0x58));
    }
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x54) = iVar3 + iVar1;
      goto LAB_0803d1b4;
    }
  }
  else {
    iVar1 = 0;
LAB_0803d1b4:
    if (iVar1 != 0) goto LAB_0803d1c8;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x1020) == 0) {
    *(undefined *)(param_1 + 0x66) = 0;
    return in_lr;
  }
LAB_0803d1c8:
  pbVar2 = (byte *)(param_1 + 0x66);
  if (*pbVar2 == 0) {
    sub_080032EC(0x2b);
    *pbVar2 = *pbVar2 | 1;
  }
  return in_lr;
}

