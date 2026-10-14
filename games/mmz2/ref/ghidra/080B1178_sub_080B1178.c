// sub_080B1178 at 0x080B1178 (thumb)

undefined4 sub_080B1178(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar3 = 0xfffffb00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0x500;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffcc0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xd) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '0') {
LAB_080b11c4:
    sub_080B1228(param_1,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080B0FE4(param_1);
    return in_lr;
  }
  sub_080128D4(param_1);
  cVar1 = sub_080B13A0(param_1,8);
  if (cVar1 != '\0') goto LAB_080b11c4;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x5c) + 0x18;
    *(int *)(param_1 + 0x5c) = iVar2;
    if (iVar2 < 1) goto LAB_080b121a;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x5c) + -0x18;
    *(int *)(param_1 + 0x5c) = iVar2;
    if (-1 < iVar2) goto LAB_080b121a;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
LAB_080b121a:
  sub_080B12C0(param_1,8);
  return in_lr;
}

