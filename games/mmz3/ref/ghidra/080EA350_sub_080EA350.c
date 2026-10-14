// sub_080EA350 at 0x080EA350 (thumb)

undefined4 sub_080EA350(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  ushort uVar4;
  byte bVar5;
  undefined4 in_lr;
  
  pbVar2 = *(byte **)(param_1 + 0x1c);
  uVar4 = 0xff;
  bVar5 = 0xff;
  *(undefined4 *)(param_1 + 0x24) = 0;
  bVar1 = *pbVar2;
  while (bVar1 < 0xfd) {
    if (bVar1 == 0xf3) {
      pbVar2 = pbVar2 + 1;
      bVar1 = *pbVar2;
      *(byte *)(param_1 + 4) = bVar1 >> 1;
      *(byte *)(param_1 + 6) = bVar1 & 1;
    }
    else if (bVar1 == 0xf5) {
      pbVar2 = pbVar2 + 1;
      uVar4 = (ushort)*pbVar2;
    }
    else if (bVar1 == 0xf6) {
      pbVar2 = pbVar2 + 1;
      bVar5 = *pbVar2;
    }
    else if (bVar1 == 0xfa) {
      *(undefined *)(param_1 + 5) = 1;
    }
    else if (bVar1 == 0xfb) {
      *(undefined *)(param_1 + 5) = 0xd;
    }
    pbVar2 = pbVar2 + 1;
    bVar1 = *pbVar2;
  }
  if (uVar4 == 0xff) {
    if (0xfd < *pbVar2) goto LAB_080ea3d6;
    pbVar2 = pbVar2 + 1;
  }
  else {
    *(ushort *)(param_1 + 0x16) = uVar4;
    for (pcVar3 = *(char **)(param_1 + 0x18); *pcVar3 != -1; pcVar3 = pcVar3 + 1) {
      if ((*pcVar3 == -0xc) && ((byte)pcVar3[1] == uVar4)) {
        *(char **)(param_1 + 0x20) = pcVar3 + 2;
        break;
      }
    }
    if (*pcVar3 != -1) goto LAB_080ea3da;
LAB_080ea3d6:
    pbVar2 = (byte *)0x0;
  }
  *(byte **)(param_1 + 0x20) = pbVar2;
LAB_080ea3da:
  if (bVar5 != 0xff) {
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) >> 4 | 0x10;
    for (pcVar3 = *(char **)(param_1 + 0x18); *pcVar3 != -1; pcVar3 = pcVar3 + 1) {
      if ((*pcVar3 == -0xc) && (pcVar3[1] == bVar5)) {
        *(char **)(param_1 + 0x24) = pcVar3 + 2;
        return in_lr;
      }
    }
  }
  return in_lr;
}

