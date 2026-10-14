// sub_080802F0 at 0x080802F0 (thumb)

undefined4 sub_080802F0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_083646b0);
    *(undefined *)(param_1 + 0x12) = 0x10;
    sub_08017700(param_1,0x4c02);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xb8) != '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x20;
  }
  sub_080177F4(param_1);
  return in_lr;
}

