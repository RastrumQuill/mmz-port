// sub_08037B58 at 0x08037B58 (thumb)

undefined4 sub_08037B58(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0x102);
  if (*pcVar1 == '\0') {
    sub_0801CF00(param_1,0x1c05);
    *pcVar1 = *pcVar1 + '\x01';
  }
  sub_0803A3BC(param_1,0x1c05);
  sub_0803A3FC(param_1,0x1c05);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_0801CFC8(param_1,0x500,4,1);
    *(undefined *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}

