// sub_080330D4 at 0x080330D4 (thumb)

undefined4 sub_080330D4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x18);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xd2) = 0xe;
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0xd2) + -1;
  *(char *)(param_1 + 0xd2) = cVar1;
  if (cVar1 == -1) {
    sub_0807A5F8(param_1,6,(*(byte *)(param_1 + 0x13) & 0xf) << 4 | (uint)*(byte *)(param_1 + 0x12))
    ;
    sub_08001EAC(0x37);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    *(undefined *)(param_1 + 0xd) = 0x21;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

