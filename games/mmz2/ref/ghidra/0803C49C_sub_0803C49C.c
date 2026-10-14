// sub_0803C49C at 0x0803C49C (thumb)

undefined4 sub_0803C49C(int param_1,int param_2,int param_3)

{
  undefined4 in_lr;
  
  sub_08006E18(param_1 + 0x74,
               *(undefined4 *)
                (param_3 * 4 +
                *(int *)(&DAT_08338684 + (param_2 + (uint)*(byte *)(param_1 + 0x10)) * 4)),
               0xffffffff,*(undefined *)(param_1 + 0x12),0xffffffff,0);
  return in_lr;
}

