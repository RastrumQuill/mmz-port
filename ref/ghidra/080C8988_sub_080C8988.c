// sub_080C8988 at 0x080C8988 (thumb)

undefined4 sub_080C8988(undefined *param_1,undefined *param_2,int param_3)

{
  ushort uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_04000204;
  DAT_04000204 = uVar1 & 0xfffc | 3;
  for (param_3 = param_3 + -1; param_3 != -1; param_3 = param_3 + -1) {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return in_lr;
}

