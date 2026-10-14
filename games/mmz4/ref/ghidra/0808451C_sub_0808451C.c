// sub_0808451C at 0x0808451C (thumb)

undefined4 sub_0808451C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x1c07);
    sub_080D6A60(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != 0) {
    if (*(byte *)(iVar2 + 0xc) < 2) {
      *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + -0x200;
    }
    else {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      return in_lr;
    }
  }
  iVar2 = param_1 + 0x54;
  bVar3 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar3 = bVar3 | 0x10;
  }
  sub_080D4898(iVar2,&DAT_0885b518,0,bVar3);
  bVar3 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar3 = bVar3 | 0x10;
  }
  sub_080D4898(iVar2,&DAT_0885b534,0,bVar3);
  sub_080D0894(1,iVar2);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    sub_080D0894(2,iVar2);
  }
  else {
    sub_080D0894(2,iVar2);
  }
  sub_0802AB70(4,0x12,iVar2);
  sub_08002B10(0x2a);
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,iVar2);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

