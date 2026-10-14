// sub_0802241C at 0x0802241C (thumb)

undefined4 sub_0802241C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0801B828();
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 1;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    sub_08022478(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 2;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    sub_0802258C(param_1);
  }
  return in_lr;
}

