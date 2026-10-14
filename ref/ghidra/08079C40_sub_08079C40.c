// sub_08079C40 at 0x08079C40 (thumb)

undefined4 sub_08079C40(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    sub_08079CC8(param_1 + 0x4c,*(undefined *)(param_1 + 0x11));
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(byte *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + *(char *)(param_1 + 0x13) & 3;
  }
  return in_lr;
}

