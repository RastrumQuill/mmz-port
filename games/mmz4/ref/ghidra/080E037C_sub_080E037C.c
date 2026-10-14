// sub_080E037C at 0x080E037C (thumb)

undefined4 sub_080E037C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  sub_08002B10(0x2a);
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  local_1c = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 7) - 3) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  local_18 = *(int *)(param_1 + 0x58) + (uVar1 * 2 >> 0x11 & 7) * 0x100 + -0x2b00;
  sub_080D0894(1,&local_1c);
  sub_080E0414(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

