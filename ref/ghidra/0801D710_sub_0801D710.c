// sub_0801D710 at 0x0801D710 (thumb)

undefined4 sub_0801D710(int param_1,uint param_2,undefined param_3)

{
  char cVar1;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  if (((2 < *(byte *)(param_1 + 0xbe)) && (*(byte *)(param_1 + 0x11) == param_2)) &&
     (cVar1 = sub_080C8A9C(param_1,param_3,*(undefined4 *)(&DAT_082a9870 + param_2 * 4)),
     cVar1 != '\0')) {
    sub_080185CC(param_1);
    sub_080182FC(param_1);
    sub_08018C64(param_1);
    sub_0801C70C(param_1);
    sub_08018DF0(param_1);
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a9880 + param_2 * 4));
  return in_lr;
}

