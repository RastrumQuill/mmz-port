// sub_080DDE18 at 0x080DDE18 (thumb)

undefined4 sub_080DDE18(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = param_1 + 0x54;
  sub_080D4898(iVar1,&DAT_0885d6fc,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(iVar1,&DAT_0885d718,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D0894(1,iVar1);
  sub_08002B10(0x2a);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

