// sub_08032274 at 0x08032274 (thumb)

undefined4 sub_08032274(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,2);
    *(undefined4 *)(param_1 + 0x58) = 0xfffff680;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  iVar1 = *(int *)(param_1 + 0x58);
  iVar2 = iVar1 + 0x100;
  *(int *)(param_1 + 0x58) = iVar2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
  if (0 < iVar1 + 0x200) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

