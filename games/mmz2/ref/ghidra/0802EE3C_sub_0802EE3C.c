// sub_0802EE3C at 0x0802EE3C (thumb)

undefined4 sub_0802EE3C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 1;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 0;
  sub_0802EE78(param_1);
  return in_lr;
}

