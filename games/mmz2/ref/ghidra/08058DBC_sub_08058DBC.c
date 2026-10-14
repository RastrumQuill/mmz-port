// sub_08058DBC at 0x08058DBC (thumb)

undefined4 sub_08058DBC(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 0x800) != 0) {
      *(undefined *)(param_1 + 0xd) = 10;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd5) = 0;
    *(undefined *)(param_1 + 0xd) = 0x17;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

