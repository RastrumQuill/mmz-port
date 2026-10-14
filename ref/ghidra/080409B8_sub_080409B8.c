// sub_080409B8 at 0x080409B8 (thumb)

undefined4 sub_080409B8(int param_1)

{
  undefined4 in_lr;
  
  sub_080297C0();
  *(undefined *)(param_1 + 0xca) = 1;
  *(undefined *)(param_1 + 0xd) = 3;
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xf) = 2;
  if (*(short *)(param_1 + 0x8c) < 0x20) {
    *(undefined *)(param_1 + 0x12) = 8;
  }
  else if (*(short *)(param_1 + 0x8c) < 0x30) {
    *(undefined *)(param_1 + 0x12) = 4;
  }
  else {
    *(undefined *)(param_1 + 0x12) = 2;
  }
  return in_lr;
}

