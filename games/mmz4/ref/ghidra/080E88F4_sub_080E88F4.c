// sub_080E88F4 at 0x080E88F4 (thumb)

undefined4 sub_080E88F4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((iVar1 != 0) && (*(byte *)(iVar1 + 0xc) < 2)) {
    *(undefined4 *)(iVar1 + 0xc) = 2;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(iVar1 + 9)] + 8);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

