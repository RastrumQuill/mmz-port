// sub_08072AFC at 0x08072AFC (thumb)

undefined4 sub_08072AFC(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0xb6) == '\x03') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
      *(undefined *)(param_1 + 0x4d) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
      *(undefined *)(param_1 + 0xb5) = 0;
      sub_08006E08(param_1 + 0x74,&DAT_0833f0c4);
    }
    sub_080127E4(param_1,0x1b05);
    *(bool *)(param_1 + 0xb7) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (0x1f < bVar1) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

