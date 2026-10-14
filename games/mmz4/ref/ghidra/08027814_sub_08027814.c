// sub_08027814 at 0x08027814 (thumb)

undefined4 sub_08027814(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  param_1 = param_1 & 0xff;
  iVar1 = *(int *)(&DAT_0202e930 + param_1 * 0x10);
  if (iVar1 != 0) {
    if ((DAT_0202e910 != 0) && (param_1 == 0)) {
      DAT_0202f368 = param_1;
      sub_0802B7B4(DAT_020359b8);
      sub_080382F0(DAT_020359b8,&DAT_02035958);
    }
    if (param_1 == 1) {
      DAT_0202f36c = 0;
    }
    sub_0801DF34(iVar1);
    *(int *)(&DAT_0202e930 + param_1 * 0x10) = 0;
  }
  return in_lr;
}

