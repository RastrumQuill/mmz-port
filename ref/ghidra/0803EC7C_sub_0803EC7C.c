// sub_0803EC7C at 0x0803EC7C (thumb)

undefined4 sub_0803EC7C(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08081C8C(*(undefined4 *)(param_1 + 0xcc),6);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    sub_08029778(param_1,0xe);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0x12) = 10;
    uVar2 = (3 - (uint)(*(byte *)(param_1 + 0x13) >> 1)) * 0x1000000 >> 0x16;
    local_20 = *(int *)(&DAT_082ae38c + uVar2) -
               *(int *)(&DAT_082ae38c + uVar2) * 2 * (*(byte *)(param_1 + 0x13) & 1);
    local_1c = *(undefined4 *)(&DAT_082ae39c + uVar2);
    local_18 = *(undefined4 *)(param_1 + 0x4c);
    local_14 = *(int *)(param_1 + 0x50) + -0x2000;
    sub_08082674(param_1,&local_18,&local_20);
    cVar1 = *(char *)(param_1 + 0x13) + '\x01';
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == '\b') {
      *(undefined *)(param_1 + 0xd) = 0xd;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  sub_080297C0(param_1);
  return in_lr;
}

