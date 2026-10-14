// sub_0803AC10 at 0x0803AC10 (thumb)

undefined4 sub_0803AC10(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0x179) == '\x04') {
    *(undefined *)(param_1 + 0xd) = 2;
    sub_0803AE10(param_1,2);
  }
  return in_lr;
}

