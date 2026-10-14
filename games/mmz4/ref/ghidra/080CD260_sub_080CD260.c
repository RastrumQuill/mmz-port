// sub_080CD260 at 0x080CD260 (thumb)

undefined4 sub_080CD260(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if ((*(char *)(param_1 + 0x12) == '\x02') && (*(byte *)(param_1 + 0x11) < 0xb)) {
    local_10 = *(undefined4 *)(param_1 + 0xb4);
    local_c = *(undefined4 *)(param_1 + 0xb8);
    sub_080CD114(&local_10,*(undefined *)(param_1 + 0x10),*(byte *)(param_1 + 0x11) + 1);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  sub_0801CFF0(param_1);
  return in_lr;
}

