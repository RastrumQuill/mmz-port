// sub_080843D8 at 0x080843D8 (thumb)

undefined4 sub_080843D8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar1 = bVar1 | 0x10;
  }
  sub_080D4898(param_1 + 0x54,&DAT_0885b518,0,bVar1);
  iVar2 = param_1 + 0x54;
  bVar1 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar1 = bVar1 | 0x10;
  }
  sub_080D4898(iVar2,&DAT_0885b518,0,bVar1);
  bVar1 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar1 = bVar1 | 0x10;
  }
  sub_080D4898(iVar2,&DAT_0885b534,0,bVar1);
  bVar1 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar1 = bVar1 | 0x10;
  }
  sub_080D4898(iVar2,&DAT_0885b534,0,bVar1);
  sub_080D0894(1,iVar2);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    sub_080D0894(2,iVar2);
    sub_080D0894(2,iVar2);
  }
  else {
    sub_080D0894(2,iVar2);
    sub_080D0894(2,iVar2);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  sub_08002B10(0x2a);
  sub_0802AB70(4,0x12,iVar2);
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,iVar2);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

