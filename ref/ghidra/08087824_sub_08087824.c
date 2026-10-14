// sub_08087824 at 0x08087824 (thumb)

undefined4 sub_08087824(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  bVar2 = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x20) + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10);
    bVar1 = bVar2 & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  sub_08087400(param_1,1,param_1,bVar2);
  return in_lr;
}

