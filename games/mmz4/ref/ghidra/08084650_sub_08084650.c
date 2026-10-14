// sub_08084650 at 0x08084650 (thumb)

undefined4 sub_08084650(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x1c08);
    sub_080D6A60(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1,0);
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    iVar3 = param_1 + 0x54;
    bVar2 = *(byte *)(param_1 + 0xbc);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar2 = bVar2 | 0x10;
    }
    sub_080D4898(iVar3,&DAT_0885b518,0,bVar2);
    bVar2 = *(byte *)(param_1 + 0xbc);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar2 = bVar2 | 0x10;
    }
    sub_080D4898(iVar3,&DAT_0885b534,0,bVar2);
    sub_080D0894(1,iVar3);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sub_080D0894(2,iVar3);
    }
    else {
      sub_080D0894(2,iVar3);
    }
    sub_0802AB70(4,0x12,iVar3);
    sub_08002B10(0x2a);
    if (DAT_0202e8ec < 9999) {
      DAT_0202e8ec = DAT_0202e8ec + 1;
    }
    sub_0802ABC8(param_1,iVar3);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

