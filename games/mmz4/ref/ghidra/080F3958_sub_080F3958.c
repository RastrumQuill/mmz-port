// sub_080F3958 at 0x080F3958 (thumb)

undefined4 sub_080F3958(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  sub_0801CF00(param_1,0x4c06);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  *(undefined *)(param_1 + 0x4c) = 1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined *)(param_1 + 0xb6) = 0;
  *(undefined *)(param_1 + 0x25) = 0xe;
  return in_lr;
}

