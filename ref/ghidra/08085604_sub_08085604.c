// sub_08085604 at 0x08085604 (thumb)

undefined4 sub_08085604(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(iVar1 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  if (*(char *)(iVar1 + 0xd) != '\x0f') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
    sub_08084F58(param_1);
  }
  return in_lr;
}

