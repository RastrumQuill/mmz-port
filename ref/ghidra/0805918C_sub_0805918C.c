// sub_0805918C at 0x0805918C (thumb)

undefined4 sub_0805918C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
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
  iVar3 = *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = -0x200;
    if (-0x200 < iVar3) {
      iVar2 = iVar3 + -0x80;
    }
  }
  else if (iVar3 < 0x200) {
    iVar2 = iVar3 + 0x80;
  }
  else {
    iVar2 = 0x200;
  }
  *(int *)(param_1 + 0x54) = iVar2;
  cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) * 0x20,
                       *(undefined4 *)(param_1 + 0x50));
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

