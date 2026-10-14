// sub_08050D40 at 0x08050D40 (thumb)

undefined4 sub_08050D40(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar1 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar1;
  if (0x10 < ((*(int *)(param_1 + 0xbc) - iVar1 >> 8) + 8U & 0xffff)) {
    *(int *)(param_1 + 0x58) = -*(int *)(param_1 + 0x58);
  }
  return in_lr;
}

