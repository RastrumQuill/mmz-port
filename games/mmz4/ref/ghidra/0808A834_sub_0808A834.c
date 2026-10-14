// sub_0808A834 at 0x0808A834 (thumb)

undefined4 sub_0808A834(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xc0) | 0x2000);
    sub_08005784(param_1 + 0x74,
                 &DAT_0885be90 + (uint)(byte)(&DAT_0885bfe0)[*(byte *)(param_1 + 0xc0)] * 0x18);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') &&
     ((*(char *)(param_1 + 0x12) == '\0' ||
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0'))))
  {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xc0) + '\x04';
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(char *)(param_1 + 0xc1) == '\0') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        if (*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54) < 1) {
          return in_lr;
        }
      }
      else if (-1 < *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) {
        return in_lr;
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xc0) + '\x02';
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

