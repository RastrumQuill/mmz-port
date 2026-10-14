// sub_0807901C at 0x0807901C (thumb)

undefined4 sub_0807901C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_080128D4();
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x10') {
    *(undefined *)(param_1 + 0xd) = 1;
  }
  return in_lr;
}

