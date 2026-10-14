// sub_0808F388 at 0x0808F388 (thumb)

undefined4 sub_0808F388(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08017700(param_1,0x7701);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) == '\x03') {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_08007390(param_1 + 0x74,
                   &DAT_08365be4 + (uint)(byte)(&DAT_08365d4c)[*(char *)(param_1 + 0x71)] * 0x18);
      *(char *)(param_1 + 0xc0) = *(char *)(param_1 + 0x71);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_08365bfc);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    sub_08017700(param_1,0x7707);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

