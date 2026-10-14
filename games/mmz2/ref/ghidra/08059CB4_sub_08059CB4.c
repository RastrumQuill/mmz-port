// sub_08059CB4 at 0x08059CB4 (thumb)

undefined4 sub_08059CB4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa71f);
    sub_08006E08(param_1 + 0x74,&DAT_0833c7f8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  if ((*(int *)(param_1 + 0xd0) - *(int *)(DAT_0202e130 + 0x58) < 0xb000) &&
     (0 < *(int *)(*(int *)(param_1 + 0xcc) + 0x60))) {
    *(undefined *)(param_1 + 0xd) = 0x15;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

