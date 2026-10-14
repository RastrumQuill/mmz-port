// sub_0803709C at 0x0803709C (thumb)

undefined4 sub_0803709C(int param_1)

{
  undefined4 in_lr;
  
  sub_0800561C(param_1 + 0x74,&DAT_082ad7fc);
  *(undefined4 *)(param_1 + 0x54) = 0x300;
  *(uint *)(param_1 + 0x54) = (uint)*(byte *)(param_1 + 0xcf) * -0x600 + 0x300;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08038A5C(param_1,0x11);
  *(undefined *)(param_1 + 0x12) = 0x1e;
  *(undefined *)(param_1 + 0xf) = 1;
  return in_lr;
}

