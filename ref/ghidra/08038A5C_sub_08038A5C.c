// sub_08038A5C at 0x08038A5C (thumb)

undefined4 sub_08038A5C(int param_1,int param_2)

{
  undefined4 in_lr;
  
  *(char *)(param_1 + 0xb8) = (char)param_2;
  sub_08029778(param_1,*(undefined2 *)(&DAT_082ad750 + param_2 * 2));
  return in_lr;
}

