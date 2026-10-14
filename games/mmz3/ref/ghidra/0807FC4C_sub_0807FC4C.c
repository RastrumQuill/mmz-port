// sub_0807FC4C at 0x0807FC4C (thumb)

undefined4 sub_0807FC4C(int param_1)

{
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && ((*(uint *)(param_1 + 0x8c) & 0x20000) != 0)) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

