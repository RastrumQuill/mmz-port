// sub_08028FBC at 0x08028FBC (thumb)

undefined4 sub_08028FBC(int param_1)

{
  undefined4 in_lr;
  
  if (((*(char *)(param_1 + 0x17f) != -0x7f) && (*(char *)(param_1 + 0x17f) != '~')) ||
     (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined *)(param_1 + 0xf) = 1;
    sub_0801E9FC(param_1,6);
    sub_08028FB0(param_1);
  }
  return in_lr;
}

