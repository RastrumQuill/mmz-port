// sub_08033394 at 0x08033394 (thumb)

undefined4 sub_08033394(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 600) & 0x80) == 0) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

