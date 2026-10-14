// sub_080AF590 at 0x080AF590 (thumb)

undefined4 sub_080AF590(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,(bVar1 >> 4 & 1) + 0xf);
  sub_080128D4(param_1);
  if ((bVar1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)(bVar1 & 1);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    iVar4 = -0x100 - (uVar3 * 2 >> 0x11 & 0xff);
  }
  else {
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    iVar4 = (uVar3 * 2 >> 0x11 & 0xff) + 0x100;
  }
  DAT_0202e188 = uVar3 & 0x7fffffff;
  *(int *)(param_1 + 0x5c) = iVar4;
  uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar3 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = ((uVar3 * 2 >> 0x11 & 0xf) + 0xe) * -0x40;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080AF3EC(param_1);
  return in_lr;
}

