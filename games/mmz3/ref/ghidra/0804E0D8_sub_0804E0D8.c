// sub_0804E0D8 at 0x0804E0D8 (thumb)

undefined4 sub_0804E0D8(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08017700(param_1,0xab09);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) && (*(char *)(param_1 + 0x12) == '\0')) {
    *(undefined *)(param_1 + 0x12) = 1;
    sub_0800471C(0xd4);
  }
  bVar1 = DAT_020301b2 & 1;
  if ((DAT_020301b2 & 1) == 0) {
    *(byte *)(param_1 + 0x12) = bVar1;
    *(undefined *)(param_1 + 0xd) = 3;
    *(byte *)(param_1 + 0xe) = bVar1;
  }
  sub_080177F4(param_1);
  return in_lr;
}

