// sub_08016F08 at 0x08016F08 (thumb)

undefined8 sub_08016F08(int param_1)

{
  undefined4 in_lr;
  
  return CONCAT44(in_lr,(uint)((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) &
                               *(byte *)(param_1 + 0x11a)) == 0));
}

