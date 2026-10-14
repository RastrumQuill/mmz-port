// sub_080794BC at 0x080794BC (thumb)

undefined4 sub_080794BC(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = iVar3;
    iVar4 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x50) = iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
    bVar2 = sub_080079CC(iVar3,iVar4 + -0x800);
    if ((bVar2 != 0) && ((bVar2 & 0xf0) == 0)) {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x100;
      *(undefined *)(param_1 + 0x12) = 0x78;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if ((*(char *)(param_1 + 0xf) == '\x01') &&
          (cVar1 = *(char *)(param_1 + 0x12), *(char *)(param_1 + 0x12) = cVar1 + -1, cVar1 == '\0')
          ) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

