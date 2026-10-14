// sub_0801E9FC at 0x0801E9FC (thumb)

undefined4 sub_0801E9FC(int param_1,int param_2)

{
  undefined4 in_lr;
  
  *(char *)(param_1 + 0x17f) = (char)param_2;
  sub_080127E4(param_1,*(undefined2 *)
                        (param_2 * 2 + *(int *)(&DAT_08333a48 + (uint)*(byte *)(param_1 + 9) * 4)));
  sub_0801EF00(param_1,param_2,0);
  return in_lr;
}

