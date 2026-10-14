// sub_080F1118 at 0x080F1118 (thumb)

undefined4 sub_080F1118(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    DAT_0202e38a = 0x2c1;
    DAT_0202dd8a = 9;
    sub_0801CF00(param_1,0xa523);
    uVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

