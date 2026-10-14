// sub_080BA73C at 0x080BA73C (thumb)

undefined4 sub_080BA73C(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  if (*(char *)(param_1 + 0x75) == '\0') {
    if ((*(uint *)(*(int *)(param_1 + 0x28) + 0xb4) & 0x80) != 0) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else if ((*(uint *)(*(int *)(param_1 + 0x28) + 0xb4) & 0x100) != 0) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

