// sub_080C4ABC at 0x080C4ABC (thumb)

undefined4 sub_080C4ABC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_080127E4(param_1,0x8902);
    *(int *)(param_1 + 0x5c) = (int)(short)(&DAT_080ef450)[(*(byte *)(param_1 + 0x11) & 7) * 0x20];
    *(int *)(param_1 + 0x60) =
         (int)(short)(&DAT_080ef450)[(uint)*(byte *)(param_1 + 0x11) * 0x20 + 0x40 & 0xff];
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x5c) * 0x1f;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0x1f;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 5;
  iVar3 = *(int *)(param_1 + 0x60) * 0x1f;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0x1f;
  }
  *(int *)(param_1 + 0x60) = (iVar3 >> 5) + 1;
  uVar6 = (uint)*(byte *)(param_1 + 0x11) + (uint)*(byte *)(param_1 + 0x12);
  if (((uVar6 & 1) == 0) || ((*(byte *)(param_1 + 0x12) < 0x40 && ((uVar6 & 2) != 0)))) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar5 = uVar6 >> 2 & 1;
  if (uVar5 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  pbVar4 = (byte *)(param_1 + 0x4a);
  *pbVar4 = *pbVar4 & 0xef | (byte)(uVar5 << 4);
  uVar6 = uVar6 >> 3 & 1;
  if (uVar6 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4d) = (char)uVar6;
  *pbVar4 = *pbVar4 & 0xdf | (byte)(uVar6 << 5);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

