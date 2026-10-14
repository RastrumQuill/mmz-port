// sub_08022DDC at 0x08022DDC (thumb)

undefined4 sub_08022DDC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = 1;
  *(undefined *)(param_1 + 0xf) = 2;
  *(undefined *)(param_1 + 0x11f) = 0;
  *(bool *)(param_1 + 0x120) = 0x3b < *(byte *)(param_1 + 0x19a);
  sub_08018BE8(param_1,0x1a);
  *(undefined4 *)(param_1 + 0x54) = 0x380;
  *(undefined *)(param_1 + 0x121) = 0x10;
  return in_lr;
}

