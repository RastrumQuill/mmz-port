// sub_0802934C at 0x0802934C (thumb)

undefined4 sub_0802934C(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_080293B0();
  if ('\x01' < *(char *)(param_1 + 0x72)) {
    return in_lr;
  }
  *(undefined *)(param_1 + 0xf) = 2;
  if (((*(byte *)(param_1 + 0x202) & 4) != 0) || (*(char *)(param_1 + 0x1fc) == '\x05')) {
    uVar1 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar1 = DAT_0202ec36;
    }
    if ((uVar1 & 0x8000) == 0) {
      uVar2 = 0x280;
      goto LAB_080293a8;
    }
  }
  uVar2 = 0x200;
LAB_080293a8:
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  return in_lr;
}

