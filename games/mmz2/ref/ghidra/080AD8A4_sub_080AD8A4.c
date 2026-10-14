// sub_080AD8A4 at 0x080AD8A4 (thumb)

undefined4 sub_080AD8A4(int param_1)

{
  byte bVar1;
  byte bVar2;
  short *psVar3;
  undefined4 in_lr;
  
  psVar3 = (short *)(param_1 + 0x74);
  if (*psVar3 == 0x100) {
    sub_08012580(param_1);
  }
  else {
    sub_080126A0(param_1);
    *(short *)(param_1 + 0x50) = *psVar3;
    *(short *)(param_1 + 0x52) = *psVar3;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0xb);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  sub_080128D4(param_1);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080AD86C(param_1);
  return in_lr;
}

