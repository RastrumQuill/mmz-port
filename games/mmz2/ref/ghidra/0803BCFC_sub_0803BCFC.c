// sub_0803BCFC at 0x0803BCFC (thumb)

undefined4 sub_0803BCFC(int param_1,int param_2,int param_3)

{
  undefined4 in_lr;
  
  sub_08006E18(param_1 + 0x74,
               *(undefined4 *)
                (param_3 * 4 +
                *(int *)(&DAT_08337d4c + ((uint)*(byte *)(param_1 + 0x10) * 3 + param_2) * 4)),0x10,
               (&DAT_08337d64)[*(byte *)(param_1 + 0x10)],0x18,0);
  return in_lr;
}

