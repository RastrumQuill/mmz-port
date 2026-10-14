// sub_0801EA38 at 0x0801EA38 (thumb)

undefined4 sub_0801EA38(int param_1,int param_2,uint param_3,undefined2 param_4)

{
  undefined4 in_lr;
  
  *(char *)(param_1 + 0x17f) = (char)param_2;
  sub_080128AC(param_1,*(undefined2 *)
                        (param_2 * 2 + *(int *)(&DAT_08333a48 + (uint)*(byte *)(param_1 + 9) * 4)),
               param_3 & 0xffff,param_4);
  sub_0801EF00(param_1,param_2,param_3);
  return in_lr;
}

