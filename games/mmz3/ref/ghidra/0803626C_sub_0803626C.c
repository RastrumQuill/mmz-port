// sub_0803626C at 0x0803626C (thumb)

undefined4 sub_0803626C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(ushort *)(*(int *)(param_1 + 0x28) + 0x10) & 0x30) != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*(ushort *)(*(int *)(param_1 + 0x28) + 0x12) & 2) != 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

