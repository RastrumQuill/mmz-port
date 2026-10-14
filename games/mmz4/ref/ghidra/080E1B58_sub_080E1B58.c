// sub_080E1B58 at 0x080E1B58 (thumb)

undefined4 sub_080E1B58(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  uVar2 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 0x10;
  if (0 < *(int *)(param_1 + 0x5c)) {
    uVar2 = uVar2 | 1;
  }
  sub_080D4898(param_1 + 0x54,&DAT_0885ea30 + (uVar1 * 2 >> 0x11 & 1) * 0x1c,0,uVar2);
  sub_080D0894(1,param_1 + 0x54);
  sub_08002B10(0x2a);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

