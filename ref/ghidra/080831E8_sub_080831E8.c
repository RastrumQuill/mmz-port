// sub_080831E8 at 0x080831E8 (thumb)

undefined4 sub_080831E8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(iVar3 + 0x4c) + -0x1c00;
  }
  else {
    iVar2 = *(int *)(iVar3 + 0x4c) + 0x1c00;
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (((cVar1 == -1) || (*(byte *)(iVar3 + 0xd) < 6)) || (8 < *(byte *)(iVar3 + 0xd))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

