// sub_08026E38 at 0x08026E38 (thumb)

undefined4 sub_08026E38(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 1;
  if (((*(byte *)(param_1 + 0x202) & 4) != 0) || (*(char *)(param_1 + 0x1fc) == '\x05')) {
    uVar1 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar1 = DAT_0202ec36;
    }
    if ((uVar1 & 0x8000) == 0) {
      uVar2 = 0x280;
      goto LAB_08026e88;
    }
  }
  uVar2 = 0x200;
LAB_08026e88:
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  *(undefined4 *)(param_1 + 0x68) = 0x40;
  if (*(int *)(param_1 + 0x60) * 0x40 < 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  sub_08026EA8(param_1);
  return in_lr;
}

