// sub_0807E8C8 at 0x0807E8C8 (thumb)

undefined4 sub_0807E8C8(int param_1)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 in_lr;
  undefined local_14 [8];
  undefined4 uStack_4;
  
  puVar2 = local_14;
  cVar1 = sub_0807E9B4();
  uStack_4 = in_lr;
  if (cVar1 == *(char *)(param_1 + 0xbd)) {
    if ((DAT_0202e918 & 8) != 0) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    iVar4 = 0;
    do {
      if (*(char *)(param_1 + 0xc0 + iVar4) == '\0') {
        *puVar2 = 0;
      }
      else {
        *puVar2 = 1;
      }
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 7);
    iVar4 = sub_0807EA50(local_14,7);
    if (iVar4 != -1) {
      *(undefined *)(param_1 + 0xd) = (&DAT_0885a2ec)[iVar4];
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      pcVar3 = (char *)(param_1 + 0xc0 + iVar4);
      *pcVar3 = *pcVar3 + -1;
      return uStack_4;
    }
  }
  else {
    *(char *)(param_1 + 0xbd) = cVar1;
  }
  sub_0807E964(param_1);
  sub_0807E8C8(param_1);
  return uStack_4;
}

