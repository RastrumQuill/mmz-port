// sub_0812628C at 0x0812628C (thumb)

undefined8 sub_0812628C(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xde0) == 0) {
    *(undefined *)(*(int *)(param_1 + 0xdcc) + 0x254) = 1;
    *(char *)(param_1 + 0xde4) = *(char *)(param_1 + 0xde4) + '\x01';
    *(undefined *)(param_1 + 0xde5) = 0;
  }
  else {
    *(int *)(param_1 + 0xde0) = *(int *)(param_1 + 0xde0) + -1;
  }
  return CONCAT44(in_lr,1);
}

