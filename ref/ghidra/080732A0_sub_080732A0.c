// sub_080732A0 at 0x080732A0 (thumb)

undefined4 sub_080732A0(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    pcVar1 = (char *)(*(int *)(param_1 + 0x20) + 0xe4);
    *pcVar1 = *pcVar1 + -1;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  if (DAT_02022b2c < 9999) {
    DAT_02022b2c = DAT_02022b2c + 1;
  }
  sub_08015794(param_1,param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

