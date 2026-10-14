// sub_080D6DB0 at 0x080D6DB0 (thumb)

undefined4 sub_080D6DB0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 0x10;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar1 = uVar1 | 1;
  }
  sub_080D4898(param_1 + 0x54,&DAT_0885b518,0,uVar1);
  iVar2 = param_1 + 0x54;
  uVar1 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 0x10;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar1 = uVar1 | 1;
  }
  sub_080D4898(iVar2,&DAT_0885b534,0,uVar1);
  sub_080D0894(1,iVar2);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    sub_080D0894(2,iVar2);
  }
  else {
    sub_080D0894(2,iVar2);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

