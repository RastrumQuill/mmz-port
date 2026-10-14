// sub_08049B08 at 0x08049B08 (thumb)

undefined4 sub_08049B08(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) != '\x01') && (*(char *)(param_1 + 0xd) != '\x05')) {
    if (*(char *)(param_1 + 0x10) == '\x06') {
      cVar1 = sub_080065AC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x40);
    }
    else {
      cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x40);
    }
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}

