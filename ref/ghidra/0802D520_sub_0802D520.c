// sub_0802D520 at 0x0802D520 (thumb)

undefined4 sub_0802D520(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = sub_08005458(DAT_02022e94);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 4;
    *(undefined4 *)(iVar2 + 0x14) = 0x802d57d;
    *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    *(byte *)(iVar2 + 0x44) = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    *(int *)(iVar2 + 0x20) = param_1;
    *(undefined *)(iVar2 + 0x10) = 3;
  }
  return in_lr;
}

