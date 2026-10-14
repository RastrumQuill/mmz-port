// sub_08049BA8 at 0x08049BA8 (thumb)

undefined4 sub_08049BA8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (((*(int *)(DAT_0202286c + 0x4c) <= *(int *)(param_1 + 0x4c) !=
          (bool)(*(byte *)(param_1 + 10) >> 4 & 1)) &&
        ((((*(int *)(DAT_0202286c + 0x50) >> 8) - (*(int *)(param_1 + 0x50) >> 8)) + 0x50U & 0xffff)
         < 0xa1)) &&
       ((((*(int *)(DAT_0202286c + 0x4c) >> 8) - (*(int *)(param_1 + 0x4c) >> 8)) + 0x6eU & 0xffff)
        < 0xdd)) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}

