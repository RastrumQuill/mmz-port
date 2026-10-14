// sub_08043B1C at 0x08043B1C (thumb)

undefined4 sub_08043B1C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0xa500);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar1 = DAT_020301b2 & 1;
  if ((DAT_020301b2 & 1) == 0) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(byte *)(param_1 + 0xe) = bVar1;
  }
  sub_080177F4(param_1);
  return in_lr;
}

