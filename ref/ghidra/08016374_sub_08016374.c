// sub_08016374 at 0x08016374 (thumb)

undefined8 sub_08016374(int param_1)

{
  undefined4 in_lr;
  
  sub_080162D0();
  if (((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 0x20) != 0) &&
     (*(short *)(param_1 + 0x110) != 0)) {
    sub_080164EC(param_1);
  }
  return CONCAT44(in_lr,1);
}

