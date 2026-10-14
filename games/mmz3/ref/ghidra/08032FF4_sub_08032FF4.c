// sub_08032FF4 at 0x08032FF4 (thumb)

undefined4 sub_08032FF4(int param_1)

{
  undefined4 in_lr;
  
  sub_08029168();
  if (*(char *)(param_1 + 0xd8) == '\0') {
    *(undefined2 *)(param_1 + 0x21c) = 1;
    *(undefined2 *)(param_1 + 0x21e) = 0x200;
    *(undefined2 *)(param_1 + 0x220) = 2;
    *(undefined2 *)(param_1 + 0x222) = 0x100;
  }
  else if (*(char *)(param_1 + 0xd8) == '\x01') {
    *(undefined2 *)(param_1 + 0x21c) = 1;
    *(undefined2 *)(param_1 + 0x21e) = 0x100;
    *(undefined2 *)(param_1 + 0x220) = 2;
    *(undefined2 *)(param_1 + 0x222) = 0x200;
  }
  else {
    *(undefined2 *)(param_1 + 0x21c) = *(undefined2 *)(param_1 + 0xd0);
    *(undefined2 *)(param_1 + 0x21e) = *(undefined2 *)(param_1 + 0xd2);
    *(undefined2 *)(param_1 + 0x220) = *(undefined2 *)(param_1 + 0xd4);
    *(undefined2 *)(param_1 + 0x222) = *(undefined2 *)(param_1 + 0xd6);
  }
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined *)(param_1 + 0x22f) = 0;
  *(undefined *)(param_1 + 0x224) = 0;
  *(undefined *)(param_1 + 0x225) = 0;
  *(undefined *)(param_1 + 0x227) = 0;
  *(undefined *)(param_1 + 0x228) = 0;
  *(undefined *)(param_1 + 0x22a) = 0;
  *(undefined *)(param_1 + 0x22b) = 0;
  *(undefined *)(param_1 + 0x22c) = 0;
  *(undefined *)(param_1 + 0x22d) = 0;
  return in_lr;
}

