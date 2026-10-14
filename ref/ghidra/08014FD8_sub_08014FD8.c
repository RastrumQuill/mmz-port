// sub_08014FD8 at 0x08014FD8 (thumb)

longlong sub_08014FD8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc);
  piVar4 = (int *)(param_1 + (uint)*(byte *)(iVar2 + 1) * 0x10 + 0x10);
  iVar3 = *piVar4;
  if (iVar3 != 0) {
    switch(*(undefined2 *)(iVar2 + 2)) {
    case 0:
      *(undefined4 *)(iVar3 + 0x4c) = **(undefined4 **)(iVar2 + 4);
      *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(*(int *)(iVar2 + 4) + 4);
      break;
    case 1:
      iVar2 = *(int *)(param_1 + 0x10 + *(int *)(iVar2 + 4) * 0x10);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
        *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
      }
      break;
    case 2:
      if (*(int *)(iVar2 + 4) == 0) {
        bVar1 = *(byte *)(iVar3 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(iVar3 + 10) | 0x10;
      }
      *(byte *)(iVar3 + 10) = bVar1;
      if ((*(byte *)(iVar3 + 10) & 8) != 0) {
        *(char *)(iVar3 + 0x44) = (char)*(undefined4 *)(iVar2 + 4);
      }
      break;
    case 3:
      if (*(int *)(iVar2 + 4) == 0) {
        bVar1 = *(byte *)(iVar3 + 10) & 0xdf;
      }
      else {
        bVar1 = *(byte *)(iVar3 + 10) | 0x20;
      }
      *(byte *)(iVar3 + 10) = bVar1;
      if ((*(byte *)(iVar3 + 10) & 8) != 0) {
        *(char *)(iVar3 + 0x45) = (char)*(undefined4 *)(iVar2 + 4);
      }
      break;
    case 4:
      if (*(char *)(iVar2 + 1) == '\0') {
        sub_0801D840(iVar3);
      }
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfe;
      break;
    case 5:
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) | 1;
      break;
    case 6:
      if (*(char *)(iVar2 + 1) == '\0') {
        DAT_02023644 = 0;
      }
      if (*(char *)(iVar2 + 1) == '\x01') {
        DAT_02023648 = 0;
      }
      sub_0800E758(iVar3);
    case 7:
      *piVar4 = 0;
    }
  }
  return (ulonglong)in_lr << 0x20;
}

