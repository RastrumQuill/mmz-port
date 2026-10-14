// sub_08034A0C at 0x08034A0C (thumb)

undefined4 sub_08034A0C(int param_1)

{
  undefined2 uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    sub_0801CF00(param_1,0x1403);
    *pcVar2 = *pcVar2 + '\x01';
  }
  sub_0803A3BC(param_1,0x1403);
  sub_0803A3FC(param_1,0x1403);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x100) = 0;
    uVar1 = sub_0802B7C0(param_1);
    sub_0801CF00(param_1,uVar1);
  }
  return in_lr;
}

