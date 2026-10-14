// sub_080830D0 at 0x080830D0 (thumb)

undefined8 sub_080830D0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\x05') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return CONCAT44(in_lr,1);
}

