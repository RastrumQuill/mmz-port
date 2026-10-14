// sub_080D0C4C at 0x080D0C4C (thumb)

undefined4 sub_080D0C4C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_08128884(param_1,*(undefined4 *)(&DAT_08863bcc + (uint)*(byte *)(param_1 + 0x10) * 4));
  uVar1 = DAT_0202cabc;
  if ((DAT_02000c80 & 0x7f) == 2) {
    uVar1 = sub_08007B84(param_1 + 0x54);
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  return in_lr;
}

