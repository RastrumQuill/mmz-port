// sub_08032534 at 0x08032534 (thumb)

undefined4 sub_08032534(int param_1)

{
  short sVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0x1b9) = 1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  pbVar2 = (byte *)(param_1 + 0x174);
  sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar2 * 8,0);
  sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar2 * 8,1);
  sub_0802BAD8(param_1,&DAT_0884fe30 + (uint)*pbVar2 * 8,0);
  sVar1 = sub_0802C2BC(param_1,&DAT_0884fe30 + (uint)*pbVar2 * 8,0);
  if (sVar1 == 0) {
    *(undefined *)(param_1 + 0xf) = 2;
  }
  return in_lr;
}

