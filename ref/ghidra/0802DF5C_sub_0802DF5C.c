// sub_0802DF5C at 0x0802DF5C (thumb)

undefined4 sub_0802DF5C(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  if ((DAT_02022ae0 & 4) == 0) {
    iVar2 = *(int *)(param_1 + 0x4c);
    iVar4 = *(int *)(param_1 + 0x54);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54) >> 1;
    iVar2 = *(int *)(param_1 + 0x4c);
  }
  *(int *)(param_1 + 0x4c) = iVar2 + iVar4;
  iVar4 = *(int *)(param_1 + 0x4c) + -0x2000;
  iVar2 = sub_08008360(iVar4,*(undefined4 *)(param_1 + 0x50));
  uVar3 = sub_080065AC(iVar4,iVar2 + 0x100);
  if ((uVar3 & 0xe) != 0) {
    iVar4 = *(int *)(param_1 + 0x4c) + -0x2000;
    iVar2 = sub_08008360(iVar4,*(undefined4 *)(param_1 + 0x50));
    cVar1 = sub_080065AC(iVar4,iVar2 + 0x100);
    if (cVar1 != '\x0f') {
      *(undefined *)(param_1 + 0xd) = 2;
    }
  }
  return in_lr;
}

