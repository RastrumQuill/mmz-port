// sub_080480D8 at 0x080480D8 (thumb)

undefined4 sub_080480D8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,9);
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082ae9c4);
    *(undefined *)(param_1 + 0x1f) = 0;
    *(undefined *)(param_1 + 0x12) = 0x40;
    sub_08001EAC(0xb7);
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12);
  if (cVar1 == '0') {
    sub_080730E8(param_1,0,3);
  }
  else if (cVar1 == ' ') {
    sub_080730E8(param_1,0,2);
  }
  else if (cVar1 == '\x10') {
    sub_080730E8(param_1,0,1);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x13;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

