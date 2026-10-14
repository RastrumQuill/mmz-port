// sub_0805327C at 0x0805327C (thumb)

undefined4 sub_0805327C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa600);
    sub_08006E08(param_1 + 0x74,&DAT_0833c1c8);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0xd1) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_08057034(param_1);
  }
  return in_lr;
}

