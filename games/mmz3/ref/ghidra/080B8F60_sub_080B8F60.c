// sub_080B8F60 at 0x080B8F60 (thumb)

undefined4 sub_080B8F60(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_08017700(param_1,0xa08);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    sub_080177F4(param_1);
  }
  return in_lr;
}

