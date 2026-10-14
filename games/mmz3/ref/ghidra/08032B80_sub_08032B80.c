// sub_08032B80 at 0x08032B80 (thumb)

undefined8 sub_08032B80(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (DAT_0202e48c <
      *(int *)(param_1 + 0x58) -
      ((int)((uint)*(ushort *)(&DAT_0835b03a + (uint)*(byte *)(param_1 + 0x147) * 8) << 0x10) >>
      0x11)) {
    uVar1 = 0x20;
  }
  else {
    uVar1 = 0x40;
  }
  return CONCAT44(in_lr,uVar1);
}

