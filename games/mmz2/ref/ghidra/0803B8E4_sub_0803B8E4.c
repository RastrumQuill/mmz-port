// sub_0803B8E4 at 0x0803B8E4 (thumb)

undefined4 sub_0803B8E4(int param_1,int param_2,int param_3)

{
  undefined4 in_lr;
  
  sub_08006E18(param_1 + 0x74,
               *(undefined4 *)
                (param_3 * 4 +
                *(int *)(&DAT_08337c1c + param_2 * 4 + (uint)*(byte *)(param_1 + 0x10) * 8)),0xc,
               (&DAT_08337c2c)[*(byte *)(param_1 + 0x10)],0x18,0);
  return in_lr;
}

