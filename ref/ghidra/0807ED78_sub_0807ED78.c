// sub_0807ED78 at 0x0807ED78 (thumb)

undefined4 sub_0807ED78(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  sub_080033F0(param_1 + 0x6c,5);
  *(char *)(param_1 + 0x1f) = *(char *)(param_1 + 0x12) + ' ';
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x600;
  *(undefined *)(param_1 + 0x13) = 0x1c;
  *(undefined *)(param_1 + 0xd) = 1;
  sub_0807EDC0(param_1);
  return in_lr;
}

