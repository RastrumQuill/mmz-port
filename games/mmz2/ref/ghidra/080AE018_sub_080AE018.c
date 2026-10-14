// sub_080AE018 at 0x080AE018 (thumb)

undefined4 sub_080AE018(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  sub_080128D4();
  if (*(byte *)(param_1 + 0x12) < 0x1e) {
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  iVar5 = *(int *)(param_1 + 0x54) +
          ((int)((uint)(ushort)(&DAT_080ef450)
                               [(*(byte *)(param_1 + 0x12) & 0xf) * 0x10 + 0x40 & 0xff] << 0x10) >>
          0x12);
  *(int *)(param_1 + 0x54) = iVar5;
  iVar4 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if ((cVar2 == -1) ||
     ((iVar4 + -0x800 < DAT_0202d004 && (sVar3 = sub_08008354(iVar5), sVar3 != -0x8000)))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

