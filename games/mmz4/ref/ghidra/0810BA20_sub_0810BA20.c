// sub_0810BA20 at 0x0810BA20 (thumb)

undefined4 sub_0810BA20(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  *(undefined *)(param_1 + 0x25) = 0x11;
  sub_0801CF00(param_1,0x6503);
  *(undefined4 *)(param_1 + 0x54) = 0x8000;
  *(undefined4 *)(param_1 + 0x58) = 0x2800;
  return in_lr;
}

