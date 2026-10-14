// sub_080D85AC at 0x080D85AC (thumb)

undefined4 sub_080D85AC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x10) * 0x40;
  if (((DAT_02002650 & 0x7f) == 10) || ((DAT_02002650 & 0x7f) == 0x10)) {
    uVar1 = uVar1 + (ushort)DAT_0202f4b0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 < 0x80) {
    *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + uVar1 * 0xc0 + -0x3000;
  }
  else {
    *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) - ((uVar1 - 0x80) * 0xc0 + -0x3000);
  }
  sub_080177F4(param_1);
  return in_lr;
}

