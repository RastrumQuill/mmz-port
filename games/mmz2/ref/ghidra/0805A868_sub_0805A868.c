// sub_0805A868 at 0x0805A868 (thumb)

undefined4 sub_0805A868(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa916);
    sub_080032EC(0x6f);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = (byte)DAT_0202ec42;
  if ((DAT_0202ec42 & 1) == 0) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xf) = 10;
    *(byte *)(param_1 + 0xe) = bVar1 & 1;
  }
  return in_lr;
}

