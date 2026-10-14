// sub_080A4BEC at 0x080A4BEC (thumb)

undefined4 sub_080A4BEC(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_08012580(param_1);
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
  sub_080127E4(param_1,0x540a);
  *(uint *)(param_1 + 0x5c) = ((uint)*(byte *)(param_1 + 0x11) * 2 + -1) * 0x280;
  *(undefined *)(param_1 + 0x12) = 0x80;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  sub_08006DE4(param_1 + 0x74,&DAT_08344db0,param_1 + 0x54,3);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080A4C98(param_1);
  return in_lr;
}

