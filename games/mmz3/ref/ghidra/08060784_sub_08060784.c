// sub_08060784 at 0x08060784 (thumb)

undefined4 sub_08060784(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  undefined4 in_lr;
  
  *(char *)(param_1 + 0xb4) = (char)param_2;
  sub_080177CC(param_1,*(undefined2 *)(&DAT_083619dc + param_2 * 2),param_3,param_4);
  return in_lr;
}

