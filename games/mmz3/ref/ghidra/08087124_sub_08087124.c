// sub_08087124 at 0x08087124 (thumb)

undefined4 sub_08087124(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x18;
    sub_08007390(param_1 + 0x74,&DAT_08364ea0);
    sub_08017700(param_1,0x6702);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  pcVar2 = (char *)(param_1 + 0xb8);
  if (*pcVar2 != '\0') {
    *pcVar2 = *pcVar2 + -1;
  }
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) &&
     (*pcVar2 == '\0')) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

