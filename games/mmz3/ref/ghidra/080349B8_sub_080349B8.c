// sub_080349B8 at 0x080349B8 (thumb)

undefined4 sub_080349B8(int param_1)

{
  undefined4 in_lr;
  
  if ((*(ushort *)(*(int *)(param_1 + 0x28) + 0x18) & 0x30) != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*(ushort *)(*(int *)(param_1 + 0x28) + 0x1a) & 2) != 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

