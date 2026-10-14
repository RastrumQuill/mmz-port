// sub_080DB7B0 at 0x080DB7B0 (thumb)

undefined4 sub_080DB7B0(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 & 0xfe;
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  local_1c = *(int *)(param_1 + 0x54) + ((bVar1 >> 4 & 1) * 2 + -1) * -0xc00 +
             ((uVar2 * 2 >> 0x11 & 7) - 3) * 0x100;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  local_18 = *(int *)(param_1 + 0x58) + (uVar2 * 2 >> 0x11 & 7) * 0x100 + -0x1f00;
  sub_080D0894(2,&local_1c);
  sub_080DB854(param_1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

