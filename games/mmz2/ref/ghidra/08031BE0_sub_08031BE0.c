// sub_08031BE0 at 0x08031BE0 (thumb)

undefined8 sub_08031BE0(int param_1)

{
  undefined4 in_lr;
  
  sub_08031A48();
  if (((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & 0x20) != 0) &&
     (((*(ushort *)(param_1 + 0xe8) | *(ushort *)(param_1 + 0xea)) & 0xd) != 0)) {
    sub_08031DC4(param_1);
  }
  return CONCAT44(in_lr,1);
}

