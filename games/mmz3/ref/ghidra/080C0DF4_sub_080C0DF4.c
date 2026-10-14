// sub_080C0DF4 at 0x080C0DF4 (thumb)

undefined4 sub_080C0DF4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      sub_080177F4(param_1);
      sub_080040A8(0x65,0x280);
      sub_080040A8(0x60,0x300);
      sub_080041E4(0x65);
      sub_080041E4(0x60);
      sub_0800471C(0x11a);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else {
    sub_080177F4(param_1);
    sub_080041E4(0x65);
    sub_080041E4(0x60);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_08004230(0x65);
      sub_08004230(0x60);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080C0C8C(param_1);
    }
  }
  return in_lr;
}

