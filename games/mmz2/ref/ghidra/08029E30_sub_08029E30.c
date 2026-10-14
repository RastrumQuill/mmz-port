// sub_08029E30 at 0x08029E30 (thumb)

undefined4 sub_08029E30(int param_1)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  cVar3 = *(char *)(param_1 + 699);
  iVar6 = (int)cVar3;
  *(char *)(param_1 + 699) = '\0';
  cVar1 = *(char *)(param_1 + 0x2bf);
  *(char *)(param_1 + 0x2bf) = cVar3;
  bVar2 = *(byte *)(param_1 + 0x2b7);
  uVar5 = (uint)bVar2;
  *(byte *)(param_1 + 0x2b7) = bVar2 + 1;
  if (uVar5 < 3) {
    *(char *)(param_1 + 700 + uVar5) = cVar3;
  }
  *(undefined *)(param_1 + 0x2b8) = 0;
  iVar4 = sub_08035B24(param_1,iVar6,cVar1,uVar5);
  if (iVar4 == 0) {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 1;
    sub_08035BE8(param_1,iVar6);
  }
  else {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 2;
    sub_08035C34(param_1,iVar6);
    sub_08033A1C(param_1,0,0,1,iVar6,*(undefined *)(param_1 + 0x215),uVar5);
  }
  return in_lr;
}

