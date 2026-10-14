// sub_0803A214 at 0x0803A214 (thumb)

undefined4 sub_0803A214(int param_1,int param_2)

{
  undefined4 in_lr;
  
  sub_08006E18(param_1 + 0x74,*(undefined4 *)(&DAT_08336504 + param_2 * 4),
               *(undefined *)(param_1 + 0x6b),0,*(byte *)(param_1 + 0x13) | 0x10,0);
  return in_lr;
}

