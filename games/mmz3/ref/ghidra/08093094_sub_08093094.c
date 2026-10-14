// sub_08093094 at 0x08093094 (thumb)

undefined4 sub_08093094(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + *(int *)(*(int *)(param_1 + 0x28) + 0x58);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + *(int *)(*(int *)(param_1 + 0x28) + 0x54);
  sub_080177F4(param_1);
  return in_lr;
}

