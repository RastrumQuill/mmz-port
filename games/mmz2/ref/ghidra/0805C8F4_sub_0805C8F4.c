// sub_0805C8F4 at 0x0805C8F4 (thumb)

undefined4 sub_0805C8F4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa918);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x2e;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_08002638(&DAT_084332dc,(DAT_0202e626 - 0x210) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_084332e8,(DAT_0202e426 - 6) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0x13) = 0;
  }
  return in_lr;
}

