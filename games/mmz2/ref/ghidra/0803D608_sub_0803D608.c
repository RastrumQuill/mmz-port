// sub_0803D608 at 0x0803D608 (thumb)

undefined4 sub_0803D608(int param_1,int param_2,uint param_3,uint param_4)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  *(char *)(param_1 + 0x13) = (char)param_2;
  uVar1 = *(undefined2 *)
           (param_2 * 2 + *(int *)(&DAT_08338d5c + (uint)*(byte *)(param_1 + 0x10) * 4));
  if ((param_3 == 0) && (param_4 == 0)) {
    sub_080127E4(param_1,uVar1);
  }
  else {
    if (param_4 == 0) {
      param_3 = param_3 - 1;
      param_4 = 1;
    }
    sub_080128AC(param_1,uVar1,param_3 & 0xffff,param_4 & 0xffff);
  }
  return in_lr;
}

