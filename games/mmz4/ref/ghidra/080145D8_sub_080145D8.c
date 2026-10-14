// sub_080145D8 at 0x080145D8 (thumb)

undefined4 sub_080145D8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x4c) = 900;
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(undefined4 *)(param_1 + 0x48) = 0x100;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

