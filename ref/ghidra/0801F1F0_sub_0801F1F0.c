// sub_0801F1F0 at 0x0801F1F0 (thumb)

undefined4 sub_0801F1F0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xbe) == '\0') {
    sub_08017E30(param_1);
  }
  *(undefined *)(param_1 + 0x119) = 0;
  cVar1 = sub_080160EC(param_1);
  if (cVar1 == '\x01') {
    *(undefined *)(param_1 + 0x11b) = 4;
    sub_0801F23C(param_1);
  }
  else {
    sub_0801F5F0(param_1);
  }
  return in_lr;
}

