// sub_0805F318 at 0x0805F318 (thumb)

undefined4 sub_0805F318(int param_1)

{
  undefined4 in_lr;
  
  sub_08007390(param_1 + 0x74,&DAT_08361a88);
  *(undefined4 *)(param_1 + 0x5c) = 0x300;
  *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0xcb) * -0x600 + 0x300;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08060768(param_1,0x11);
  *(undefined *)(param_1 + 0x12) = 0x1e;
  *(undefined *)(param_1 + 0xf) = 1;
  return in_lr;
}

