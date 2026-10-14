// sub_080DF30C at 0x080DF30C (thumb)

undefined4 sub_080DF30C(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = param_2 * 0x1000000 + 0xfe000000U >> 0x18;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar2 = uVar2 + 4 & 0xff;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x54) + *(int *)(&DAT_088652a8 + uVar2 * 8) * 0x100;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54) + *(int *)(&DAT_088652a8 + uVar2 * 8) * -0x100;
  }
  iVar3 = uVar2 * 8;
  *(int *)(param_1 + 0x54) = iVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(&DAT_088652ac + iVar3) * 0x100;
  if (*(char *)(param_1 + 0x74) == '\0') {
    iVar1 = -*(int *)(&DAT_088652e8 + iVar3);
  }
  else {
    iVar1 = *(int *)(&DAT_088652e8 + iVar3);
  }
  *(int *)(param_1 + 0x5c) = iVar1 << 8;
  *(int *)(param_1 + 0x60) = *(int *)(&DAT_088652ec + iVar3) << 8;
  return in_lr;
}

