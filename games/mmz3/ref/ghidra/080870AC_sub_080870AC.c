// sub_080870AC at 0x080870AC (thumb)

undefined4 sub_080870AC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08364ea0);
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(undefined *)(param_1 + 0x25) = 0xf;
    sub_08017700(param_1,0x6701);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x71) == '\b') {
    sub_08007390(param_1 + 0x74,&DAT_08364eb8);
  }
  return in_lr;
}

