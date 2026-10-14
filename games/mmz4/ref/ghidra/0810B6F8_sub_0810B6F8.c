// sub_0810B6F8 at 0x0810B6F8 (thumb)

undefined4 sub_0810B6F8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  *(undefined *)(param_1 + 0x25) = 0x11;
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_0801CF00(param_1,0x6504);
  }
  else {
    uVar1 = 0x6501;
    if ((*(uint *)(DAT_0202e8e0 + 0x10) & 1 << (&DAT_08869810)[*(byte *)(param_1 + 0x11)]) != 0) {
      uVar1 = 0x6500;
    }
    sub_0801CF00(param_1,uVar1);
  }
  uVar1 = (&DAT_08869794)[(uint)*(byte *)(param_1 + 0x11) * 2];
  *(undefined4 *)(param_1 + 0x54) = (&DAT_08869790)[(uint)*(byte *)(param_1 + 0x11) * 2];
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  return in_lr;
}

