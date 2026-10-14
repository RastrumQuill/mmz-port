// sub_08043DD4 at 0x08043DD4 (thumb)

undefined4 sub_08043DD4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_0833a600);
    sub_080127E4(param_1,0xa300);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_08044A4C(param_1);
  }
  return in_lr;
}

