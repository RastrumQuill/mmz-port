// sub_080AF1E0 at 0x080AF1E0 (thumb)

undefined4 sub_080AF1E0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  sub_08017700(param_1,0x8605);
  *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x12) + ' ';
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -0x600;
  *(undefined *)(param_1 + 0x13) = 0x1c;
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080AF230(param_1);
  return in_lr;
}

