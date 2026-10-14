// sub_0800D370 at 0x0800D370 (thumb)

undefined4 sub_0800D370(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = (&DAT_0831348c)[*(int *)(param_1 + 0x34) >> 4];
  *(undefined4 *)(param_1 + 0x44) = 0x80;
  if (bVar1 < 5) {
    *(undefined4 *)(param_1 + 0x44) = 0x40;
    uVar2 = 0xb4;
  }
  else if (bVar1 < 10) {
    uVar2 = 0x348;
  }
  else if (bVar1 < 0x16) {
    uVar2 = 0x870;
  }
  else {
    uVar2 = 0xe10;
  }
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  return in_lr;
}

