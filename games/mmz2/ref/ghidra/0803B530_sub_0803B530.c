// sub_0803B530 at 0x0803B530 (thumb)

undefined4 sub_0803B530(int param_1,undefined4 param_2,int param_3)

{
  undefined4 in_lr;
  
  sub_08006E18(param_1 + 0x74,
               *(undefined4 *)
                (param_3 * 4 + *(int *)(&DAT_08337b24 + (uint)*(byte *)(param_1 + 0x10) * 4)),
               0xffffffff,0,0xffffffff,0);
  return in_lr;
}

