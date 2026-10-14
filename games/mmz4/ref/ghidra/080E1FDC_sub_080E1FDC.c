// sub_080E1FDC at 0x080E1FDC (thumb)

undefined4 sub_080E1FDC(int param_1)

{
  undefined4 in_lr;
  
  sub_080E20E8();
  sub_080E1D28(param_1 + 0x54,0x304,*(byte *)(param_1 + 10) >> 4 & 1);
  *(undefined *)(param_1 + 0x11) = 3;
  *(undefined *)(param_1 + 0x25) = 0x18;
  return in_lr;
}

