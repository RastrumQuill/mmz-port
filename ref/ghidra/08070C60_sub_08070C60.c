// sub_08070C60 at 0x08070C60 (thumb)

undefined4 sub_08070C60(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    sub_0800561C(param_1 + 0x74,&DAT_082b121c);
    sub_080033F0(param_1 + 0x6c,2);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    iVar1 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    if (iVar1 < 0) {
      iVar1 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
    }
    if (iVar1 < 0x6000) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  sub_08070660(param_1,0,0x100);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

