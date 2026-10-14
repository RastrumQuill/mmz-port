// sub_08021D84 at 0x08021D84 (thumb)

undefined4 sub_08021D84(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x24);
  pcVar5 = (char *)(param_1 + 0xc0);
  cVar1 = *pcVar5;
  if (((iVar3 != 0) && (*(char *)(iVar3 + 9) == '\x02')) && (*(char *)(iVar3 + 0x62) == '\0')) {
    bVar2 = *(byte *)(param_1 + 0x196);
    if (2 < bVar2) {
      bVar2 = 2;
    }
    bVar4 = *(byte *)(param_1 + 0x11f);
    if ((bVar4 < bVar2) &&
       ((*(char *)(param_1 + 0x120) != '\0' ||
        (bVar2 = sub_0801B50C(param_1,2), (bVar2 & *(byte *)(param_1 + 0x12d)) != 0)))) {
      *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
      *(undefined *)(param_1 + 0xbf) = 2;
      *(char *)(param_1 + 0xc3) = *pcVar5;
      *pcVar5 = cVar1;
      bVar4 = bVar4 + 1;
      *(byte *)(param_1 + 0x11f) = bVar4;
      *(char *)(param_1 + 0x120) = '\0';
      sub_08027F54(param_1,cVar1 * '\x03' + bVar4,0);
      sub_08018BE8(param_1,*(byte *)(param_1 + 0x115) + 2);
      return in_lr;
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 4;
    *(char *)(param_1 + 0xc3) = *(char *)(param_1 + 0xc0);
    *(char *)(param_1 + 0xc0) = cVar1;
    sub_08018BE8(param_1,*(byte *)(param_1 + 0x115) + 1);
  }
  return in_lr;
}

