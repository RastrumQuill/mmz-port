// sub_08035098 at 0x08035098 (thumb)

undefined4 sub_08035098(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x167) == '\0') {
    *(undefined *)(param_1 + 0x100) = 0;
    sub_0801CFC8(param_1,0x200,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  else {
    *(undefined *)(param_1 + 0x101) = 1;
    *(undefined *)(param_1 + 0x102) = 0;
    sub_080350F4(param_1);
  }
  return in_lr;
}

