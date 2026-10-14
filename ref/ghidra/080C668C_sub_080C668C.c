// sub_080C668C at 0x080C668C (thumb)

undefined4 sub_080C668C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_080BBD9C();
  uVar1 = 0;
  do {
    sub_080BB524(param_1,uVar1 & 0xff);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  sub_080014E8(&DAT_08532050 + (uint)*(byte *)(param_1 + 0x9e5) * 0x14,0x10000);
  sub_0800179C(&DAT_0853205c + (uint)*(byte *)(param_1 + 0x9e5) * 0x14,0x200);
  return in_lr;
}

