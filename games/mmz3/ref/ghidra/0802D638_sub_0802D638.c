// sub_0802D638 at 0x0802D638 (thumb)

undefined4 sub_0802D638(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x12a) = 0;
  cVar1 = sub_08034598(param_1,*(char *)(param_1 + 0xc0) != '\x01');
  if (*(char *)(param_1 + 0x22d) == '\x03') {
    cVar1 = '\x02';
  }
  if (cVar1 == '\x02') {
    *(undefined *)(param_1 + 0xed) = 4;
    *(undefined *)(param_1 + 0xee) = 0;
    sub_0802DA00(param_1);
  }
  else if (((*(ushort *)(param_1 + 0xc6) & 0x40) == 0) || ((*(uint *)(param_1 + 0x218) & 0x40) == 0)
          ) {
    if (((*(ushort *)(param_1 + 0xc6) & 0x80) == 0) || ((*(uint *)(param_1 + 0x218) & 0x80) == 0)) {
      *(undefined *)(param_1 + 0xed) = 1;
      *(undefined *)(param_1 + 0xee) = 0;
      sub_0802D710(param_1);
    }
    else {
      *(undefined *)(param_1 + 0xed) = 6;
      *(undefined *)(param_1 + 0xee) = 0;
      sub_0802DB0C(param_1);
    }
  }
  else {
    *(undefined *)(param_1 + 0xed) = 7;
    *(undefined *)(param_1 + 0xee) = 0;
    sub_0802DB7C(param_1);
  }
  return in_lr;
}

