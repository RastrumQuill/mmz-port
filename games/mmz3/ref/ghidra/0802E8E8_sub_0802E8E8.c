// sub_0802E8E8 at 0x0802E8E8 (thumb)

undefined4 sub_0802E8E8(int param_1)

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
  else {
    *(undefined *)(param_1 + 0xed) = 1;
    *(undefined *)(param_1 + 0xee) = 0;
    sub_0802E964(param_1);
  }
  return in_lr;
}

