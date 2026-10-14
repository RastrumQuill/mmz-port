// sub_08035034 at 0x08035034 (thumb)

undefined4 sub_08035034(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0xfc);
    sub_080177CC(param_1,0xbc03,2,4);
    *(undefined4 *)(param_1 + 0x60) = 0xfffff900;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  if (((*(ushort *)(iVar2 + 0x10) & 1) == 0) || (0 < iVar1)) {
    *(undefined *)(param_1 + 0xd) = 1;
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

