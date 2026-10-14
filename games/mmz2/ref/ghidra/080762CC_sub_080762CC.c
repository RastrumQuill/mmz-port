// sub_080762CC at 0x080762CC (thumb)

undefined4 sub_080762CC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1400);
    sub_08006E08(param_1 + 0x74,&DAT_0833fa64);
    *(undefined *)(param_1 + 0xb9) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_08076E8C(param_1);
  }
  return in_lr;
}

