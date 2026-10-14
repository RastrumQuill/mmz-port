// sub_08052674 at 0x08052674 (thumb)

undefined4 sub_08052674(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_0805269c:
    if (*(int *)(param_1 + 0xc0) < 1) {
      iVar3 = 0x200;
    }
    else {
      iVar3 = -0x200;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar3;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x200;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto LAB_080526f6;
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0x12) = 0x10;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_0805269c;
    }
    if (bVar1 == 2) {
      *(undefined *)(param_1 + 0x12) = 0x14;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (bVar1 != 3) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto LAB_080526f6;
    *(undefined *)(param_1 + 0xd) = 3;
    cVar2 = '\x01';
  }
  *(char *)(param_1 + 0xe) = cVar2;
LAB_080526f6:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

