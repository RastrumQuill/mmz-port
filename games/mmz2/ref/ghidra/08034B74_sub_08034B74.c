// sub_08034B74 at 0x08034B74 (thumb)

undefined8 sub_08034B74(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xe) == '\0') && (*(short *)(param_1 + 0x174) == 0)) {
    if ((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & 1) == 0) {
      uVar1 = 1;
      goto LAB_08034bb2;
    }
  }
  uVar1 = sub_08033B0C(param_1);
  uVar1 = uVar1 & 0xff;
LAB_08034bb2:
  return CONCAT44(in_lr,uVar1);
}

