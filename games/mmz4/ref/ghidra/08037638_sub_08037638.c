// sub_08037638 at 0x08037638 (thumb)

undefined4 sub_08037638(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x167) == '\0') {
    sub_0801CFC8(param_1,0x500,4,1);
    *(undefined *)(param_1 + 0x100) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x101) = 1;
    *(undefined *)(param_1 + 0x102) = 0;
    sub_08037684(param_1);
  }
  return in_lr;
}

