// sub_080475EC at 0x080475EC (thumb)

undefined4 sub_080475EC(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x12) * 0x8000000;
    local_14 = *(int *)(param_1 + 0x54) +
               *(short *)((int)&DAT_08128c10 + (uVar2 + 0x40000000 >> 0x17)) * 8;
    local_10 = *(int *)(param_1 + 0x58) + (short)(&DAT_08128c10)[uVar2 >> 0x18] * 8;
    sub_080470C4(&local_14);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0x10);
  }
  return in_lr;
}

