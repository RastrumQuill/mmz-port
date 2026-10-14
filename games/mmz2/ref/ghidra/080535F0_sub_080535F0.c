// sub_080535F0 at 0x080535F0 (thumb)

undefined4 sub_080535F0(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa611);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  pbVar2 = (byte *)(param_1 + 0xb6);
  if ((*pbVar2 & 1) == 0) goto LAB_0805369a;
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  if (*(int *)(param_1 + 0x5c) < 0) {
    iVar1 = *(int *)(param_1 + 0xb8) + 0xc00;
    if (iVar3 < iVar1) {
      *(int *)(param_1 + 0x54) = iVar1;
LAB_0805366a:
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xb8) + 0xc3ff;
    if (iVar1 < iVar3) {
      *(int *)(param_1 + 0x54) = iVar1;
      goto LAB_0805366a;
    }
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if (*(int *)(param_1 + 0xbc) < *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc);
    *pbVar2 = *pbVar2 & 0xfe;
  }
LAB_0805369a:
  if ((*(char *)(param_1 + 0x12) == '\0') && ((*pbVar2 & 1) == 0)) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(byte *)(param_1 + 0xf) = *pbVar2 & 1;
  }
  return in_lr;
}

