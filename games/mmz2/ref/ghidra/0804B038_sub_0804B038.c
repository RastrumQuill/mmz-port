// sub_0804B038 at 0x0804B038 (thumb)

undefined4 sub_0804B038(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa101);
    sub_08006E08(param_1 + 0x74,&DAT_0833b2b0);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(char *)(param_1 + 0xf) == '\0') && (*(char *)(param_1 + 0x71) == '\x04')) {
    sub_080032EC(0x65);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  bVar1 = (byte)DAT_0202ec42;
  if ((DAT_0202ec42 & 1) == 0) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(byte *)(param_1 + 0xe) = bVar1 & 1;
    *(undefined *)(param_1 + 0xf) = 6;
  }
  return in_lr;
}

