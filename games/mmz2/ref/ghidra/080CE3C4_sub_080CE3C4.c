// sub_080CE3C4 at 0x080CE3C4 (thumb)

undefined4 sub_080CE3C4(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    iVar3 = 0;
    puVar4 = &DAT_083498e0;
    do {
      iVar5 = iVar3;
      if (((int)(uint)(byte)(&DAT_0202ebb4)[*puVar4 >> 3] >> (*puVar4 & 7) & 1U) == 0) break;
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + 1;
      iVar5 = 0xff;
    } while (iVar3 < 10);
    if (iVar5 == 0xff) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
    else {
      pcVar2 = (char *)(param_1 + 0xb9);
      if (*pcVar2 == '\0') {
        iVar5 = 0;
        iVar3 = 0;
        puVar4 = &DAT_083498e0;
        do {
          if ((*(char *)(param_1 + iVar3 + 0xba) == '\0') ||
             (((int)(uint)(byte)(&DAT_0202ebb4)[*puVar4 >> 3] >> (*puVar4 & 7) & 1U) != 0)) {
            iVar5 = iVar5 + 1;
          }
          puVar4 = puVar4 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < 10);
        if (iVar5 == 10) {
          *(undefined4 *)(param_1 + 0xc) = 2;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
        }
      }
      else if (((*(char *)(param_1 + 0xb8) == '\0') &&
               (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1,
               cVar1 == -1)) && (*pcVar2 != '\0')) {
        *(undefined *)(param_1 + 0x12) = 0x38;
        *(char *)(param_1 + 0xb8) = '\x01';
        *pcVar2 = *pcVar2 + -1;
      }
    }
  }
  return in_lr;
}

