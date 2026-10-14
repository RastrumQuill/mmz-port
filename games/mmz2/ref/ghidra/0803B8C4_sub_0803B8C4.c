// sub_0803B8C4 at 0x0803B8C4 (thumb)

undefined4 sub_0803B8C4(int param_1,int param_2)

{
  undefined4 in_lr;
  
  *(char *)(param_1 + 0x12) = (char)param_2;
  sub_080127E4(param_1,*(undefined2 *)
                        (&DAT_08337b74 + param_2 * 2 + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

