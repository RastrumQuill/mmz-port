// sub_08055B28 at 0x08055B28 (thumb)

undefined4 sub_08055B28(int param_1)

{
  undefined4 in_lr;
  
  sub_080177F4();
  *(undefined *)(param_1 + 0xc6) = 1;
  *(undefined *)(param_1 + 0xd) = 3;
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xf) = 2;
  if (*(short *)(param_1 + 0xa4) < 0x20) {
    *(undefined *)(param_1 + 0x12) = 8;
  }
  else if (*(short *)(param_1 + 0xa4) < 0x30) {
    *(undefined *)(param_1 + 0x12) = 4;
  }
  else {
    *(undefined *)(param_1 + 0x12) = 2;
  }
  return in_lr;
}

