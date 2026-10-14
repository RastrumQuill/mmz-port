// sub_080D9E60 at 0x080D9E60 (thumb)

undefined4 sub_080D9E60(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar1 = 0xc0;
  }
  else {
    uVar1 = 0xffffff40;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  *(byte *)(param_1 + 0x12) = ((byte)(uVar2 * 2 >> 0x11) & 7) + 0x4c;
  return in_lr;
}

