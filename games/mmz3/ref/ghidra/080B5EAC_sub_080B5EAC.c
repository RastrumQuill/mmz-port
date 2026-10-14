// sub_080B5EAC at 0x080B5EAC (thumb)

undefined4 sub_080B5EAC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_080177F4();
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(int *)(param_1 + 0x54) = **(int **)(param_1 + 0x28) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x58) = (*(int **)(param_1 + 0x28))[1] + *(int *)(param_1 + 0x68);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

