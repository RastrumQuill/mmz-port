// sub_08056374 at 0x08056374 (thumb)

undefined4 sub_08056374(int param_1)

{
  undefined4 in_lr;
  undefined auStack_c [4];
  
  sub_080FE598(auStack_c,&DAT_080feb88,4);
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (((*(char *)(param_1 + 0xc5) == '\0') && (4 < *(byte *)(DAT_02030160 + 1))) &&
       (*(char *)(param_1 + 0xc6) != '\0')) {
      *(undefined *)(param_1 + 0xd) = 0x25;
      sub_080570D0(param_1);
      return in_lr;
    }
    sub_08017700(param_1,0xb301);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x12;
    *(undefined *)(param_1 + 0xe) = 1;
    if (*(char *)(param_1 + 0xc6) == '\0') {
      *(undefined *)(param_1 + 0x13) = auStack_c[*(byte *)(param_1 + 0xc5)];
    }
    else {
      *(undefined *)(param_1 + 0x13) = 1;
    }
  }
  return in_lr;
}

