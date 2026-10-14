// sub_080878A0 at 0x080878A0 (thumb)

undefined4 sub_080878A0(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  bVar2 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885bac8);
    sub_0801CF00(param_1,0x1d0c);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_08002B10(0x2c);
    local_14 = *(int *)(param_1 + 0x54) + ((bVar2 >> 4 & 1) * 2 + -1) * 0xe00;
    local_10 = *(undefined4 *)(param_1 + 0x58);
    bVar2 = sub_0810CD50(*(undefined4 *)(DAT_0202dbf0 + 0x54),
                         *(int *)(DAT_0202dbf0 + 0x58) + -0x1000);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      bVar2 = bVar2 + 0x80;
    }
    if (bVar2 < 0x70) {
      bVar2 = 0x70;
    }
    else if (0x90 < bVar2) {
      bVar2 = 0x90;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      bVar2 = bVar2 + 0x80;
    }
    sub_080BD058(&local_14,0x180,bVar2);
    *(undefined *)(param_1 + 0xe) = 3;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

