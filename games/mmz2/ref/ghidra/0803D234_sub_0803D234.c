// sub_0803D234 at 0x0803D234 (thumb)

undefined4 sub_0803D234(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((param_2 == 1) || (2 < param_3)) {
    uVar1 = (uint)*(byte *)(param_1 + 100);
  }
  else {
    uVar1 = 0xffffffff;
  }
  sub_08006E18(param_1 + 0x74,
               *(undefined4 *)
                (param_3 * 4 +
                *(int *)(&DAT_08338ce4 + param_2 * 4 + (uint)*(byte *)(param_1 + 0x10) * 8)),uVar1,
               *(undefined *)(param_1 + 0x65),0xffffffff,0);
  return in_lr;
}

