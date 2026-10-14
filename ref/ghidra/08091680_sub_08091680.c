// sub_08091680 at 0x08091680 (thumb)

undefined4 sub_08091680(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar4 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x4c);
  iVar2 = sub_080C8AD0(*(int *)(iVar4 + 0x4c) - iVar3,*(undefined *)(param_1 + 0x12));
  *(int *)(param_1 + 0x4c) = iVar3 + iVar2;
  iVar3 = *(int *)(param_1 + 0x50);
  iVar2 = sub_080C8AD0((*(int *)(iVar4 + 0x50) - iVar3) + -0xf00,*(undefined *)(param_1 + 0x12));
  *(int *)(param_1 + 0x50) = iVar3 + iVar2;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == -1) || (1 < *(byte *)(iVar4 + 0xc))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

