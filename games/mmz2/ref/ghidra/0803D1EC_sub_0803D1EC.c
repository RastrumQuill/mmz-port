// sub_0803D1EC at 0x0803D1EC (thumb)

undefined4 sub_0803D1EC(int param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 in_lr;
  
  *(char *)(param_1 + 0x11) = (char)param_2;
  if ((param_3 == 0) && (param_4 == 0)) {
    sub_080127E4(param_1,*(undefined2 *)
                          (&DAT_08338930 + param_2 * 2 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    if (param_4 == 0) {
      param_3 = param_3 - 1;
      param_4 = 1;
    }
    sub_080128AC(param_1,*(undefined2 *)
                          (&DAT_08338930 + param_2 * 2 + (uint)*(byte *)(param_1 + 0x10) * 4),
                 param_3 & 0xffff,param_4 & 0xffff);
  }
  return in_lr;
}

