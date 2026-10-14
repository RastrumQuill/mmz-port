// sub_0806E4BC at 0x0806E4BC (thumb)

undefined4 sub_0806E4BC(int param_1)

{
  char extraout_var;
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(int *)(param_1 + 0xb8) = *(int *)(iVar2 + 0x4c);
    *(int *)(param_1 + 0xbc) = *(int *)(iVar2 + 0x50);
    iVar1 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xc0);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    *(int *)(param_1 + 0x54) = iVar1 >> 3;
    iVar1 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xc4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    *(int *)(param_1 + 0x58) = iVar1 >> 3;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0xc0);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xc4);
  }
  if (*(char *)(param_1 + 0x12) == '\b') {
    *(int *)(param_1 + 0xc0) = *(int *)(iVar2 + 0x4c);
    *(int *)(param_1 + 0xc4) = *(int *)(iVar2 + 0x50);
    iVar2 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xb8);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    *(int *)(param_1 + 0x54) = iVar2 >> 3;
    iVar2 = *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xbc);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    *(int *)(param_1 + 0x58) = iVar2 >> 3;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc);
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  sub_080C88E8((*(int *)(param_1 + 0x54) << 0xc) >> 0x10,(*(int *)(param_1 + 0x58) << 0xc) >> 0x10);
  *(char *)(param_1 + 0x13) = extraout_var;
  *(char *)(param_1 + 0x1f) = extraout_var + -0x80;
  *(byte *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + 1U & 0xf;
  if (1 < *(byte *)(*(int *)(param_1 + 0x24) + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0x12) = ('\a' - *(char *)(param_1 + 0x10)) * '\b';
  }
  return in_lr;
}

