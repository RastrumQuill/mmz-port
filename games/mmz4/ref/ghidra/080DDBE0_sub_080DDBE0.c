// sub_080DDBE0 at 0x080DDBE0 (thumb)

undefined4 sub_080DDBE0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_24;
  undefined4 local_20;
  
  local_24 = *(undefined4 *)(param_1 + 0x54);
  local_20 = *(undefined4 *)(param_1 + 0x58);
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  sub_080D4898(&local_24,&DAT_0885d5dc,0,(uVar1 * 2 >> 0x11 & 1) << 4);
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  sub_080D4898(&local_24,&DAT_0885d5dc,0,(uVar1 * 2 >> 0x11 & 1) << 4 | 1);
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  uVar1 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  sub_080D4898(&local_24,&DAT_0885d5f8,0,(uVar2 * 2 >> 0x11 & 1) << 4 | uVar1 * 2 >> 0x11 & 1);
  sub_080D0894(1,&local_24);
  sub_08002B10(0x2a);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

