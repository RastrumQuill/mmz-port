// sub_08038A78 at 0x08038A78 (thumb)

undefined4 sub_08038A78(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  undefined4 in_lr;
  
  *(char *)(param_1 + 0xb8) = (char)param_2;
  sub_08029790(param_1,*(undefined2 *)(&DAT_082ad750 + param_2 * 2),param_3,param_4);
  return in_lr;
}

