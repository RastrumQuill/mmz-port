// sub_080B4A34 at 0x080B4A34 (thumb)

undefined4 sub_080B4A34(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((iVar1 != 0) && (*(byte *)(iVar1 + 0xc) < 2)) {
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfc;
    *(undefined4 *)(iVar1 + 0xc) = 3;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(iVar1 + 9)] + 0xc);
  }
  sub_0807F804(param_1);
  return in_lr;
}

