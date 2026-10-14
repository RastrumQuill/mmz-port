// sub_08055558 at 0x08055558 (thumb)

undefined4 sub_08055558(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa600);
    *(undefined *)(param_1 + 0x12) = 2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xb5) = 0;
    *(undefined2 *)(param_1 + 0xd2) = 0x5000;
    sub_08057034(param_1);
  }
  return in_lr;
}

