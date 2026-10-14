// sub_08034F10 at 0x08034F10 (thumb)

undefined4 sub_08034F10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  sub_080297C0(param_1);
  if ((*(ushort *)(param_1 + 0x90) & 0x100) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      iVar3 = -0xc00;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x4c);
      iVar3 = 0xc00;
    }
    *(int *)(iVar2 + 0x4c) = iVar1 + iVar3;
    *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
  }
  *(undefined *)(param_1 + 0xd) = 0x19;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

