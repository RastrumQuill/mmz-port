// sub_08094A20 at 0x08094A20 (thumb)

undefined4 sub_08094A20(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(int *)(param_1 + 0x4c) = **(int **)(param_1 + 0x20) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x50) = (*(int **)(param_1 + 0x20))[1] + *(int *)(param_1 + 0x60);
  }
  cVar1 = *(char *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = cVar1 + -1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

