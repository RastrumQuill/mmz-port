// sub_080C5F50 at 0x080C5F50 (thumb)

undefined4 sub_080C5F50(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 3) = 1;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x9e8) = 0x4400;
  *(undefined4 *)(param_1 + 0x9ec) = 0x3a00;
  sub_080C668C(param_1);
  sub_080B9978(param_1);
  return in_lr;
}

