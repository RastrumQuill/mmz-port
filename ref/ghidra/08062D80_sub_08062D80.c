// sub_08062D80 at 0x08062D80 (thumb)

undefined4 sub_08062D80(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,3);
    *(undefined *)(param_1 + 0xe) = 0;
    sVar1 = sub_080C8AD0(*(undefined4 *)(param_1 + 0x54),0x15);
    *(short *)(param_1 + 0xc4) = -sVar1;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (int)*(short *)(param_1 + 0xc4);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

