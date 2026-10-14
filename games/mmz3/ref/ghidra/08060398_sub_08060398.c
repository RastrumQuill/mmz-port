// sub_08060398 at 0x08060398 (thumb)

undefined4 sub_08060398(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08017700(param_1,0xbc16);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  else if ((*(char *)(param_1 + 0xf) == '\x01') && (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

