// sub_080EAA4C at 0x080EAA4C (thumb)

undefined4 sub_080EAA4C(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_080EA9F0(param_1,3);
  }
  else {
    sub_080EA9F0(param_1,10);
  }
  bVar1 = *(byte *)(param_1 + 5);
  uVar3 = sub_0801EBDC(*(undefined4 *)(param_1 + 0x10));
  iVar4 = *(int *)(param_1 + 0x14) + (bVar1 + 5) * 0x40 + 0x26;
  uVar2 = sub_080EA9C8(*(undefined *)((int)&DAT_0835e702 + bVar1 + 1),uVar3);
  sub_080EAAB8(iVar4,uVar2,2);
  sub_080EAB0C(iVar4 + 2,2);
  return in_lr;
}

