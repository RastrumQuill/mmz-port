// sub_0806FAC4 at 0x0806FAC4 (thumb)

undefined4 sub_0806FAC4(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x8d03);
    sub_0800249C(0x74,0x280);
    sub_0800249C(0x95,0x2a0);
    sub_0800249C(0x75,0x40);
    sub_080025D8(0x74);
    sub_080025D8(0x95);
    sub_080025D8(0x75);
    sub_08002624(0x74);
    sub_08002624(0x95);
    sub_08002624(0x75);
    sub_08002B10(0x15e);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  bVar1 = DAT_0202e922 & 1;
  if ((DAT_0202e922 & 1) == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 0xe) = bVar1;
  }
  return in_lr;
}

