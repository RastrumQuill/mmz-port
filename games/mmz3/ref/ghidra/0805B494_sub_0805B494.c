// sub_0805B494 at 0x0805B494 (thumb)

undefined4 sub_0805B494(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar1 = DAT_020301b2 & 1;
  if ((DAT_020301b2 & 1) == 0) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(byte *)(param_1 + 0xe) = bVar1;
  }
  return in_lr;
}

