// sub_08079748 at 0x08079748 (thumb)

undefined4 sub_08079748(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x14) & 4) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c), *(char *)(iVar2 + 9) == '\"')) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (*(int *)(iVar1 + 0x2c) == 0) {
      *(int *)(iVar1 + 0x2c) = iVar2;
      *(undefined *)(iVar1 + 0xd) = 1;
      *(undefined *)(iVar1 + 0x13) = 0x10;
      *(int *)(iVar1 + 0xb4) = *(int *)(iVar2 + 0x54) - *(int *)(iVar1 + 0x54);
      *(int *)(iVar1 + 0xb8) = *(int *)(iVar2 + 0x58) - *(int *)(iVar1 + 0x58);
      *(undefined *)(iVar2 + 0xd) = 4;
      *(undefined *)(iVar2 + 0xe) = 0;
      *(int *)(iVar2 + 0xb4) = iVar1;
    }
  }
  return in_lr;
}

