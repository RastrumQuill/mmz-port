// sub_0807353C at 0x0807353C (thumb)

undefined4 sub_0807353C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54),
                       *(undefined4 *)(param_1 + 0x50));
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58);
  }
  cVar1 = *(char *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = cVar1 + -1;
  if (cVar1 == '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

