// sub_080DA1DC at 0x080DA1DC (thumb)

undefined4 sub_080DA1DC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (*(int *)(param_1 + 0x54) + -0x620) - DAT_02000b84;
  *(int *)(param_1 + 0x54) = iVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - DAT_02000b88;
  if (0x4000 < DAT_0202ea30 - (iVar1 + 0x7800)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

