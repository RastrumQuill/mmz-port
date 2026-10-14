// sub_0803D650 at 0x0803D650 (thumb)

undefined4 sub_0803D650(int param_1,int param_2,int param_3)

{
  undefined4 in_lr;
  
  sub_08006E18(param_1 + 0x74,
               *(undefined4 *)
                (param_3 * 4 +
                *(int *)(&DAT_08339c34 + param_2 * 4 + (uint)*(byte *)(param_1 + 0x10) * 8)),
               0xffffffff,*(undefined *)(param_1 + 0x11),0xffffffff,0xffffffff);
  return in_lr;
}

