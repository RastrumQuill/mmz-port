// sub_080A1224 at 0x080A1224 (thumb)

undefined4 sub_080A1224(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x25) = 0x18;
    sub_0801CF00(param_1,0x8302);
    *(undefined *)(param_1 + 0x12) = 0x60;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    sub_0801CF00(param_1,0x8302);
    *(undefined *)(param_1 + 0x12) = 0x60;
  }
  else if (cVar2 == '0') {
    sub_080C7FE0(param_1,*(undefined *)(param_1 + 0x10),bVar1 >> 4 & 1);
    sub_0801CF00(param_1,0x8303);
  }
  sub_0801CFF0(param_1);
  sub_080A1750(param_1);
  if (3 < *(byte *)(param_1 + 0xba)) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

