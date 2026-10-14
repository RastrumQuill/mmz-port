// sub_0801D840 at 0x0801D840 (thumb)

undefined4 sub_0801D840(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  pbVar2 = (byte *)(param_1 + 0x128);
  bVar1 = *pbVar2;
  if ((bVar1 & 1) != 0) {
    *pbVar2 = bVar1 & 0xfe;
    if ((bVar1 & 0x80) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    }
    else {
      *pbVar2 = bVar1 & 0x7e;
    }
  }
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined *)(param_1 + 0x125) = 0;
  return in_lr;
}

