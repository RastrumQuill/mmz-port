// sub_08039720 at 0x08039720 (thumb)

undefined4 sub_08039720(int param_1,char param_2)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  *(char *)(param_1 + 0xde) = param_2;
  if (param_2 == '\0') {
    *(undefined2 *)(param_1 + 0x25c) = 1;
    *(undefined2 *)(param_1 + 0x25e) = 0x200;
    *(undefined2 *)(param_1 + 0x260) = 2;
    uVar1 = 0x100;
  }
  else {
    if (param_2 != '\x01') {
      return in_lr;
    }
    *(undefined2 *)(param_1 + 0x25c) = 1;
    *(undefined2 *)(param_1 + 0x25e) = 0x100;
    *(undefined2 *)(param_1 + 0x260) = 2;
    uVar1 = 0x200;
  }
  *(undefined2 *)(param_1 + 0x262) = uVar1;
  return in_lr;
}

