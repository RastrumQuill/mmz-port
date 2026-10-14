// sub_080AA358 at 0x080AA358 (thumb)

undefined4 sub_080AA358(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(char *)(param_1 + 0xd) == '\0') {
      sub_080128D4(param_1);
      if (*(char *)(param_1 + 0xb4) == '\0') {
        if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
          *(uint *)(param_1 + 0x8c) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
          *(undefined *)(param_1 + 0xe) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    else {
      if (*(char *)(param_1 + 0xe) == '\0') {
        sub_080127E4(param_1,0x8c01);
        *(undefined *)(param_1 + 0x12) = 6;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      sub_080128D4(param_1);
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == '\0') {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
        *(undefined *)(param_1 + 0xd) = 0;
        sub_080AA464(param_1);
      }
    }
  }
  else {
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc);
    }
  }
  return in_lr;
}

