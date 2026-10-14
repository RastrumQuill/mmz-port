// sub_0803ABC4 at 0x0803ABC4 (thumb)

undefined4 sub_0803ABC4(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0x179) < 3) {
    if ((*(char *)(param_1 + 0x71) == '\0') && (*(char *)(param_1 + 0x72) < '\x02')) {
      sub_080032EC(0x13);
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    sub_0803AE10(param_1,1);
  }
  return in_lr;
}

