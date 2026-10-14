// sub_080C4CB8 at 0x080C4CB8 (thumb)

undefined4 sub_080C4CB8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 2) = 1;
  *(undefined *)(param_1 + 3) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined *)(param_1 + 0x9e4) = 0;
  sub_080C57D0(param_1);
  sub_080C5860(param_1);
  sub_080C58C4(param_1);
  sub_0800DB7C(DAT_02023210);
  *(undefined2 *)(param_1 + 6) = 0x10;
  sub_080C4D00(param_1);
  return in_lr;
}

