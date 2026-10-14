// sub_08089A80 at 0x08089A80 (thumb)

undefined4 sub_08089A80(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x4c) = **(undefined4 **)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x50) = (*(undefined4 **)(param_1 + 0x78))[1];
  *(undefined *)(param_1 + 0x1f) = **(undefined **)(param_1 + 0x7c);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (**(char **)(param_1 + 0x74) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
    sub_080898FC(param_1);
  }
  return in_lr;
}

