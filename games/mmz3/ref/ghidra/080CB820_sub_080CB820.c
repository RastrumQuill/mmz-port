// sub_080CB820 at 0x080CB820 (thumb)

undefined4 sub_080CB820(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_0836c608);
    sub_08017700(param_1,0x2d00);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x10) != '\x02') {
    *(undefined4 *)(param_1 + 0x58) = DAT_0202e48c;
  }
  sub_080177F4(param_1);
  return in_lr;
}

