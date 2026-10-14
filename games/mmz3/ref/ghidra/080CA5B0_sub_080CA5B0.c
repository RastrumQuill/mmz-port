// sub_080CA5B0 at 0x080CA5B0 (thumb)

undefined4 sub_080CA5B0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x1104);
    sub_08007390(param_1 + 0x74,&DAT_0836c4f0);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x80;
  sub_080177F4(param_1);
  return in_lr;
}

