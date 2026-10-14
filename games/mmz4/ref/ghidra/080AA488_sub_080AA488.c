// sub_080AA488 at 0x080AA488 (thumb)

undefined4 sub_080AA488(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if ((*(char *)(param_1 + 0xb6) == '\x01') && ((*(byte *)(param_1 + 0x13) & 0xf) == 0)) {
    sub_080AA688(param_1);
  }
  cVar1 = sub_080AA774(param_1);
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0xb6) == '\0') {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

