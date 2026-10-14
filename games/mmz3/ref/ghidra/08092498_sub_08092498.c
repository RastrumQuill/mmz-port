// sub_08092498 at 0x08092498 (thumb)

undefined4 sub_08092498(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 9) & 1) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08017700(param_1,0xb600);
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

