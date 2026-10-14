// sub_0805B40C at 0x0805B40C (thumb)

undefined4 sub_0805B40C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    DAT_0202f4a5 = 1;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

