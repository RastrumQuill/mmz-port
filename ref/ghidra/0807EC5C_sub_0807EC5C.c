// sub_0807EC5C at 0x0807EC5C (thumb)

undefined4 sub_0807EC5C(int param_1)

{
  undefined4 in_lr;
  
  sub_080033F0(param_1 + 0x6c,5);
  *(char *)(param_1 + 0x1f) = *(char *)(param_1 + 0x12) + ' ';
  *(undefined *)(param_1 + 0xd) = 1;
  sub_0807EC80(param_1);
  return in_lr;
}

