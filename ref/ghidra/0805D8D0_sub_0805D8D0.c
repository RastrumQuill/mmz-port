// sub_0805D8D0 at 0x0805D8D0 (thumb)

undefined4 sub_0805D8D0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0x1100;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  piVar2 = (int *)(param_1 + 0xb8);
  iVar1 = *piVar2;
  *piVar2 = iVar1 + -0x80;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - (iVar1 + -0x80);
  if (*piVar2 < 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(*(int *)(param_1 + 0x20) + 0xbb) = 0;
  }
  return in_lr;
}

