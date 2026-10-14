// sub_0803FF44 at 0x0803FF44 (thumb)

undefined4 sub_0803FF44(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe1) = 1;
    *(undefined *)(param_1 + 0xe3) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    *(undefined *)(param_1 + 0xe1) = 0;
  }
  sub_080128D4(param_1);
  *(undefined4 *)(param_1 + 0x5c) = 0xc0;
  if (((*(int *)(param_1 + 0xd8) == 0) || (*(char *)(*(int *)(param_1 + 0xd8) + 0xd) == '\0')) &&
     (*(char *)(param_1 + 0xe1) == '\0')) {
    *(undefined *)(param_1 + 0xe3) = 0;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

