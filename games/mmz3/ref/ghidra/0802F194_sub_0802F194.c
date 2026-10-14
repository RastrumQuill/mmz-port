// sub_0802F194 at 0x0802F194 (thumb)

undefined4 sub_0802F194(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08034598(param_1,*(char *)(param_1 + 0xc0) != '\x01');
  if (*(char *)(param_1 + 0x22d) == '\x03') {
    cVar1 = '\x02';
  }
  if (cVar1 == '\x02') {
    *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) | 5;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xed) = 4;
    *(undefined *)(param_1 + 0xee) = 0;
    sub_0802DA00(param_1);
  }
  else if (((*(uint *)(param_1 + 0x218) & 0xc0) == 0) ||
          (cVar1 = sub_08034818(param_1,0x2d), cVar1 == '\0')) {
    if ((*(ushort *)(param_1 + 0xc6) & 0x10) == 0) {
      *(undefined *)(param_1 + 0xed) = 1;
      *(undefined *)(param_1 + 0xee) = 0;
      sub_0802F270(param_1);
    }
    else {
      *(undefined *)(param_1 + 0xed) = 2;
      *(undefined *)(param_1 + 0xee) = 0;
      sub_0802F39C(param_1);
    }
  }
  else {
    *(undefined *)(param_1 + 0xed) = 3;
    *(undefined *)(param_1 + 0xee) = 0;
    sub_0802F510(param_1);
  }
  return in_lr;
}

