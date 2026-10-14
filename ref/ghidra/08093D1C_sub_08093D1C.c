// sub_08093D1C at 0x08093D1C (thumb)

undefined4 sub_08093D1C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08088120();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,*(undefined *)(param_1 + 0x10));
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
  *(undefined *)(param_1 + 0x12) = 0x10;
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x1400;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar1 = *(int *)(param_1 + 0x4c) + -0x1800;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x4c) + 0x1800;
    }
    *(int *)(param_1 + 0x4c) = iVar1;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_08093DE0(param_1);
  return in_lr;
}

