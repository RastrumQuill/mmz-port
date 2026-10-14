// sub_0801D540 at 0x0801D540 (thumb)

undefined4 sub_0801D540(int param_1,undefined param_2,uint param_3,uint param_4)

{
  byte bVar1;
  undefined4 in_lr;
  
  sub_08018BE8(param_1,param_2);
  *(byte *)(param_1 + 0x44) = (byte)(-(param_3 & 0xff) >> 0x1f);
  if ((int)-(param_3 & 0xff) < 0) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x45) = (byte)(-(param_4 & 0xff) >> 0x1f);
  if ((int)-(param_4 & 0xff) < 0) {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  *(byte *)(param_1 + 10) = bVar1;
  return in_lr;
}

