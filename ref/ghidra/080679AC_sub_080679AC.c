// sub_080679AC at 0x080679AC (thumb)

undefined4 sub_080679AC(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if (*(int *)(param_1 + 0xc0) != 0) {
      sub_0800561C(param_1 + 0x74,&DAT_082b0c14);
    }
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    cVar1 = sub_080065AC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x800);
    if (cVar1 != '\0') {
      iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x800);
      *(int *)(param_1 + 0x50) = iVar2 + -0x800;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    if (*(int *)(param_1 + 0xc0) == 0) {
      *(undefined *)(param_1 + 0xf) = 2;
    }
    else {
      iVar2 = sub_08015D94();
      if (iVar2 != 0) {
        *(int *)(param_1 + 0xc0) = 0;
        sub_0800561C(param_1 + 0x74,&DAT_082b0bdc);
      }
    }
  }
  else {
    iVar2 = sub_08048BE8(param_1);
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        *(undefined *)(param_1 + 0xd) = 8;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 6;
        *(undefined *)(param_1 + 0x11) = 2;
      }
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}

