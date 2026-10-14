// sub_0805D834 at 0x0805D834 (thumb)

undefined4 sub_0805D834(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined *)(param_1 + 0x12) = 0x78;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 != 0x30) {
    if (bVar1 < 0x31) {
      if (bVar1 != 0x18) goto LAB_0805d896;
    }
    else if (bVar1 != 0x48) goto LAB_0805d896;
  }
  sub_08079154(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),1);
LAB_0805d896:
  piVar3 = (int *)(param_1 + 0xb8);
  if (*piVar3 < 0x1100) {
    *piVar3 = *piVar3 + 0x80;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - *piVar3;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

