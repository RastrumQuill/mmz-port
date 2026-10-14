// sub_08067760 at 0x08067760 (thumb)

undefined4 sub_08067760(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa910);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) << 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar2 = *(int *)(param_1 + 0x5c);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
    iVar2 = iVar2 + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar2;
    uVar1 = *(byte *)(param_1 + 10) & 0x10;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (iVar2 < 0) goto LAB_080677b4;
    }
    else if (0 < iVar2) {
      uVar1 = 0;
LAB_080677b4:
      *(uint *)(param_1 + 0x5c) = uVar1;
    }
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x71) < '\x02') goto LAB_080677fa;
    puVar3 = &DAT_08857d98;
  }
  else {
    if ((*(char *)(param_1 + 0xf) != '\x01') || (*(char *)(param_1 + 0x71) < '\x04'))
    goto LAB_080677fa;
    puVar3 = &DAT_08857cc0;
  }
  sub_08005784(param_1 + 0x74,puVar3);
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_080677fa:
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

