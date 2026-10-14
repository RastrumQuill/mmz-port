// sub_0804A410 at 0x0804A410 (thumb)

undefined4 sub_0804A410(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (0x10 < *(byte *)(*(int *)(param_1 + 200) + 0xd)) {
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else if (*(char *)(param_1 + 0x71) == '\x06') {
    *(undefined *)(param_1 + 0xd) = 0x18;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

