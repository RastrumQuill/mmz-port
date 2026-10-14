// sub_08095F84 at 0x08095F84 (thumb)

undefined4 sub_08095F84(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar3 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    cVar2 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar2 + -1;
    if (cVar2 == '\0') {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
      cVar2 = *(char *)(param_1 + 0x12);
      *(char *)(param_1 + 0x12) = cVar2 + -1;
      if (cVar2 == '\0') {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        *(undefined *)(param_1 + 0x12) = 8;
      }
    }
  }
  else if (bVar1 == 2) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar3 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (cVar2 != '\0') {
      sub_0808827C(3,param_1 + 0x4c);
      sub_08001EAC(2);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  return in_lr;
}

