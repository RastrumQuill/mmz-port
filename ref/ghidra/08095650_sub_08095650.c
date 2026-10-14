// sub_08095650 at 0x08095650 (thumb)

undefined4 sub_08095650(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0x12) = 0x80;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar3 + 0x4c);
      *(int *)(param_1 + 0x50) = *(int *)(iVar3 + 0x50) + -0x1000;
      if (*(char *)(iVar3 + 0xd) == '\x06') {
        sub_080033F0(param_1 + 0x6c,1);
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
  }
  else if (bVar1 == 2) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x200;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 0x10);
    }
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

