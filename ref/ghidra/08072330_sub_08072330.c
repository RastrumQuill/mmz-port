// sub_08072330 at 0x08072330 (thumb)

undefined4 sub_08072330(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(iVar2 + 0xd) = 0;
    *(undefined *)(iVar2 + 0xe) = 1;
    *(undefined *)(param_1 + 0x12) = 0x3c;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c) ==
      (bool)(*(byte *)(param_1 + 10) >> 4 & 1)) {
    cVar1 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar1 + -1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 1;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 3;
  }
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

