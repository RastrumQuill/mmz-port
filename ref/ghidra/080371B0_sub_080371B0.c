// sub_080371B0 at 0x080371B0 (thumb)

undefined4 sub_080371B0(int param_1)

{
  undefined4 in_lr;
  
  sub_08038BAC();
  if (0 < *(int *)(param_1 + 0x58)) {
    *(undefined2 *)(param_1 + 0xe) = 4;
    sub_08038A5C(param_1,8);
    *(undefined *)(param_1 + 0x12) = 0;
  }
  return in_lr;
}

