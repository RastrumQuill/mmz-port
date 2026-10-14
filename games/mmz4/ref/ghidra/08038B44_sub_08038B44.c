// sub_08038B44 at 0x08038B44 (thumb)

undefined4 sub_08038B44(int param_1)

{
  undefined4 in_lr;
  
  sub_0802F09C();
  if (*(char *)(param_1 + 0xde) == '\0') {
    *(undefined2 *)(param_1 + 0x25c) = 1;
    *(undefined2 *)(param_1 + 0x25e) = 0x200;
    *(undefined2 *)(param_1 + 0x260) = 2;
    *(undefined2 *)(param_1 + 0x262) = 0x100;
  }
  else {
    if (*(char *)(param_1 + 0xde) != '\x01') {
      *(undefined2 *)(param_1 + 0x25c) = *(undefined2 *)(param_1 + 0xd4);
      *(undefined2 *)(param_1 + 0x25e) = *(undefined2 *)(param_1 + 0xd6);
      *(undefined2 *)(param_1 + 0x260) = *(undefined2 *)(param_1 + 0xd8);
      *(undefined2 *)(param_1 + 0x262) = *(undefined2 *)(param_1 + 0xda);
      *(undefined2 *)(param_1 + 0x264) = *(undefined2 *)(param_1 + 0xdc);
      goto LAB_08038bf4;
    }
    *(undefined2 *)(param_1 + 0x25c) = 1;
    *(undefined2 *)(param_1 + 0x25e) = 0x100;
    *(undefined2 *)(param_1 + 0x260) = 2;
    *(undefined2 *)(param_1 + 0x262) = 0x200;
  }
  *(undefined2 *)(param_1 + 0x264) = 4;
LAB_08038bf4:
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined *)(param_1 + 0x277) = 0;
  *(undefined *)(param_1 + 0x266) = 0;
  *(undefined *)(param_1 + 0x267) = 0;
  *(undefined *)(param_1 + 0x269) = 0;
  *(undefined *)(param_1 + 0x26a) = 0;
  *(undefined *)(param_1 + 0x26c) = 0;
  *(undefined *)(param_1 + 0x26d) = 0;
  *(undefined *)(param_1 + 0x26e) = 0;
  *(undefined *)(param_1 + 0x26f) = 0;
  return in_lr;
}

