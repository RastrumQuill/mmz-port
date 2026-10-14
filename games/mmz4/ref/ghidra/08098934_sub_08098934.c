// sub_08098934 at 0x08098934 (thumb)

undefined4 sub_08098934(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0801CFF0();
  iVar1 = param_1 + 0x54;
  sub_080D4898(iVar1,&DAT_0885d6e0,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(iVar1,&DAT_0885d6fc,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(iVar1,&DAT_0885d718,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D0894(1,iVar1);
  sub_08002B10(0x2a);
  sub_0802AB70(3,5,iVar1);
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,iVar1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

