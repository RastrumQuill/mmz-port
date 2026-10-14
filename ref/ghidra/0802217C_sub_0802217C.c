// sub_0802217C at 0x0802217C (thumb)

undefined4 sub_0802217C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0801B390();
  if (-1 < cVar1) {
    *(char *)(param_1 + 0x11) = cVar1;
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xbe) = 3;
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 0;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    sub_0802224C(param_1);
  }
  return in_lr;
}

