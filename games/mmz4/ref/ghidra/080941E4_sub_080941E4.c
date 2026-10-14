// sub_080941E4 at 0x080941E4 (thumb)

undefined4 sub_080941E4(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_14 = (uVar3 * -2 + 1) * 0x100 + *(int *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58) + -0x100;
    sub_080DB394(&local_14,1,uVar3,*(undefined *)(param_1 + 0xba));
    sub_0801CF00(param_1,0x400e);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == '\0') || (iVar2 = sub_08094568(param_1,*(undefined4 *)(param_1 + 0x54)), iVar2 != 0)
     ) {
    *(undefined *)(param_1 + 0xe) = 3;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

