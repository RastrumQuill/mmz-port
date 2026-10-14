// sub_08077974 at 0x08077974 (thumb)

undefined4 sub_08077974(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1601);
    *(byte *)(param_1 + 0x12) = (byte)(*(char *)(param_1 + 0xb6) - 0x40U) >> 1;
    *(char *)(param_1 + 0xb6) = '\0';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_08077BB4(param_1);
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    cVar1 = *(char *)(param_1 + 0xb5) + -2;
    *(char *)(param_1 + 0xb5) = cVar1;
    *(char *)(param_1 + 0x24) = cVar1;
  }
  return in_lr;
}

