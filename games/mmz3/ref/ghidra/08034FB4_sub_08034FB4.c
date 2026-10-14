// sub_08034FB4 at 0x08034FB4 (thumb)

undefined4 sub_08034FB4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar1;
  if (0x700 < iVar1) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar1 = sub_08034C1C(param_1);
  if (iVar1 < *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = iVar1;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  if ((*(ushort *)(iVar2 + 0x10) & 0x20) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x200;
  }
  if ((*(ushort *)(iVar2 + 0x10) & 0x10) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x200;
  }
  return in_lr;
}

