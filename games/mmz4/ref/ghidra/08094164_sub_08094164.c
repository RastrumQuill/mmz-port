// sub_08094164 at 0x08094164 (thumb)

undefined4 sub_08094164(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_10 = (uVar2 * -2 + 1) * 0x100 + *(int *)(param_1 + 0x54);
    local_c = *(int *)(param_1 + 0x58) + -0x100;
    sub_080DB3F8(param_1,&local_10,uVar2,*(undefined *)(param_1 + 0xba));
    sub_0801CF00(param_1,0x400e);
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_080947EC(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xe) = 3;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

