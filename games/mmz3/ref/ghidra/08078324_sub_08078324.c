// sub_08078324 at 0x08078324 (thumb)

undefined4 sub_08078324(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08363c28);
    uVar2 = sub_08077E70(param_1);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    sub_08017700(param_1,*(byte *)(param_1 + 0x10) + 0x2f04);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = sub_08077E2C(param_1);
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0xb8) != '\0')) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

