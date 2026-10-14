// sub_08045DFC at 0x08045DFC (thumb)

undefined4 sub_08045DFC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(char *)(param_1 + 0x70) != '\0') {
      sub_08029778(param_1,0);
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  return in_lr;
}

