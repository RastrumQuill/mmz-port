// sub_0800ABCC at 0x0800ABCC (thumb)

undefined4 sub_0800ABCC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000fd0 = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

