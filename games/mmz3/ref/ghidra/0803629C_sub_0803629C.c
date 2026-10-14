// sub_0803629C at 0x0803629C (thumb)

undefined4 sub_0803629C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(ushort *)(*(int *)(param_1 + 0x28) + 0x12) & 2) != 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

