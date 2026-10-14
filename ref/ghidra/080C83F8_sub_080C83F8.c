// sub_080C83F8 at 0x080C83F8 (thumb)

undefined4 sub_080C83F8(int param_1,ushort param_2)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) == 0x68736d53) {
    *(ushort *)(param_1 + 0x1e) = param_2;
    *(short *)(param_1 + 0x20) = (short)((uint)*(ushort *)(param_1 + 0x1c) * (uint)param_2 >> 8);
  }
  return in_lr;
}

