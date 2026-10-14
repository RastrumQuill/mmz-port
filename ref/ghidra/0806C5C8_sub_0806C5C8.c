// sub_0806C5C8 at 0x0806C5C8 (thumb)

undefined4 sub_0806C5C8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(iVar1 + 0xd) = 0;
  }
  else {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((bool)(~(*(byte *)(param_1 + 10) >> 4) & 1) !=
      *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(iVar1 + 0xd) = 0;
  }
  return in_lr;
}

