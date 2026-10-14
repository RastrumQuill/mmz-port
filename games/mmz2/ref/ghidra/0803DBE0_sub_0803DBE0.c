// sub_0803DBE0 at 0x0803DBE0 (thumb)

undefined4 sub_0803DBE0(int param_1,int param_2)

{
  undefined4 in_lr;
  
  *(char *)(param_1 + 0x12) = (char)param_2;
  sub_080127E4(param_1,*(undefined2 *)(&DAT_08339c70 + param_2 * 2));
  return in_lr;
}

