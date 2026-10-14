// sub_080295B0 at 0x080295B0 (thumb)

undefined4 sub_080295B0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 4;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  sub_0801F128(param_1 + 0xd8);
  sub_0801E9FC(param_1,0x8a);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08038958(param_1);
  return in_lr;
}

