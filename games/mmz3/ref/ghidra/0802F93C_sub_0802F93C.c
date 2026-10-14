// sub_0802F93C at 0x0802F93C (thumb)

undefined4 sub_0802F93C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08034598(param_1,*(char *)(param_1 + 0xc0) != '\x01');
  if (*(char *)(param_1 + 0x22d) == '\x03') {
    cVar1 = '\x02';
  }
  if (cVar1 == '\x02') {
    *(undefined *)(param_1 + 0xed) = 4;
    *(undefined *)(param_1 + 0xee) = 0;
    sub_0802FB48(param_1);
  }
  else if (((*(uint *)(param_1 + 0x218) & 0x40) == 0) ||
          (cVar1 = sub_08034818(param_1,0x2d), cVar1 == '\0')) {
    if (((*(uint *)(param_1 + 0x218) & 0x80) == 0) || ((*(ushort *)(param_1 + 0xc6) & 0x20) == 0)) {
      *(undefined *)(param_1 + 0xed) = 1;
      *(undefined *)(param_1 + 0xee) = 0;
      sub_0802FA0C(param_1);
    }
    else {
      *(undefined *)(param_1 + 0xed) = 7;
      *(undefined *)(param_1 + 0xee) = 0;
      sub_0802FD58(param_1);
    }
  }
  else {
    *(undefined *)(param_1 + 0xed) = 6;
    *(undefined *)(param_1 + 0xee) = 0;
    sub_0802FCE8(param_1);
  }
  return in_lr;
}

