// sub_0803B454 at 0x0803B454 (thumb)

undefined4 sub_0803B454(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xc2) = 1;
  sub_08128884(param_1,*(undefined4 *)(&DAT_088505b0 + (uint)*(byte *)(param_1 + 0x10) * 4));
  *(undefined *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xc3) = 1;
  pcVar1 = (char *)(*(int *)(param_1 + 0xb4) + 0x148);
  *pcVar1 = *(char *)(param_1 + 0xc2) + *pcVar1;
  *(undefined4 *)(param_1 + 0x98) = 0x803c3a9;
  sub_0803B4C4(param_1);
  return in_lr;
}

