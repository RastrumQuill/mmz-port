// sub_080DB368 at 0x080DB368 (thumb)

undefined4 sub_080DB368(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 4) != '\x04') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080DB29C(param_1);
  }
  return in_lr;
}

