// sub_08060768 at 0x08060768 (thumb)

undefined4 sub_08060768(int param_1,int param_2)

{
  undefined4 in_lr;
  
  *(char *)(param_1 + 0xb4) = (char)param_2;
  sub_08017700(param_1,*(undefined2 *)(&DAT_083619dc + param_2 * 2));
  return in_lr;
}

