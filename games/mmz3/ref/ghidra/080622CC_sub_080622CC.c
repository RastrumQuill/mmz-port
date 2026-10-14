// sub_080622CC at 0x080622CC (thumb)

undefined4 sub_080622CC(int param_1)

{
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && ((*(uint *)(param_1 + 0x8c) & 0x20000) != 0)) {
    *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) & 0xfffffffb;
    *(undefined *)(param_1 + 0xd) = 0xe;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

