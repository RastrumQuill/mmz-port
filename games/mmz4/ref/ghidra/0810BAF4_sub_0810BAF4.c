// sub_0810BAF4 at 0x0810BAF4 (thumb)

undefined4 sub_0810BAF4(int param_1)

{
  undefined4 in_lr;
  
  sub_08128884(param_1,*(undefined4 *)(&DAT_088699bc + (uint)*(byte *)(param_1 + 0x10) * 4));
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088695c0)[*(byte *)(param_1 + 9)] + 4);
  sub_0810BB30(param_1);
  return in_lr;
}

