// sub_08014ED8 at 0x08014ED8 (thumb)

longlong sub_08014ED8(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  char *pcVar5;
  int *piVar6;
  uint in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0xc) + 1);
  piVar6 = (int *)(param_1 + (uint)bVar1 * 0x10 + 0x10);
  pcVar5 = *(char **)(*(int *)(param_1 + 0xc) + 4);
  if (*piVar6 == 0) {
    if ((*pcVar5 == '\0') && (bVar1 != 0)) {
      iVar3 = sub_08015E40();
      if (iVar3 != 0) {
        *(undefined2 *)(iVar3 + 0x1c) = 0;
        *(undefined *)(iVar3 + 0x1e) = 0;
        *(char *)(iVar3 + 9) = pcVar5[1];
        *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(&DAT_082a7ff4 + (uint)(byte)pcVar5[1] * 4)
        ;
      }
    }
    else {
      iVar3 = sub_0800E554(*pcVar5,pcVar5[1]);
    }
    *piVar6 = iVar3;
    if (iVar3 != 0) {
      bVar4 = 0;
      bVar2 = *(byte *)(iVar3 + 10);
      *(byte *)(iVar3 + 10) = bVar2 | 0x80;
      *(int **)(iVar3 + 0x18) = piVar6;
      *(char *)(iVar3 + 0x10) = pcVar5[2];
      *(char *)(iVar3 + 0x11) = pcVar5[3];
      *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(pcVar5 + 4);
      *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(pcVar5 + 8);
      if (pcVar5[0xc] == '\0') {
        bVar2 = bVar2 & 0xef | 0x80;
      }
      else {
        bVar2 = bVar2 | 0x90;
      }
      *(byte *)(iVar3 + 10) = bVar2;
      if (pcVar5[0xd] == '\0') {
        bVar4 = *(byte *)(iVar3 + 10);
        bVar2 = bVar4 & 0xdf;
      }
      else {
        bVar2 = *(byte *)(iVar3 + 10) | 0x20;
      }
      *(byte *)(iVar3 + 10) = bVar2;
      *(byte *)(piVar6 + 2) = bVar1;
      *(undefined *)((int)piVar6 + 9) = 0;
      *(undefined2 *)((int)piVar6 + 0xe) = 0;
      *(undefined2 *)(piVar6 + 3) = 0;
      *(undefined2 *)((int)piVar6 + 10) = 0;
      if ((*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') && (*(char *)(iVar3 + 8) == '\0')) {
        DAT_0202286c = iVar3;
        DAT_02023644 = iVar3;
        sub_0801D890(iVar3,param_1,iVar3,bVar4);
      }
      if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\x01') {
        DAT_02022ae0 = DAT_02022ae0 & 0xfd;
      }
    }
  }
  return (ulonglong)in_lr << 0x20;
}

