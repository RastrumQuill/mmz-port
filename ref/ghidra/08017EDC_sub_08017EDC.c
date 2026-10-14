// sub_08017EDC at 0x08017EDC (thumb)

undefined8 sub_08017EDC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xe) == '\0') && (*(short *)(param_1 + 0xbc) == 0)) {
    if ((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 1) == 0) {
      uVar1 = 1;
      goto LAB_08017f18;
    }
  }
  uVar1 = sub_0801753C(param_1);
  uVar1 = uVar1 & 0xff;
LAB_08017f18:
  return CONCAT44(in_lr,uVar1);
}

