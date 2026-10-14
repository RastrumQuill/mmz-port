// sub_08059778 at 0x08059778 (thumb)

undefined4 sub_08059778(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(byte *)(iVar2 + 0xc) < 2) {
    if ((*(uint *)(iVar2 + 0xcc) & *(uint *)(param_1 + 0xb8)) != 0) {
      bVar1 = *(byte *)(iVar2 + 10) >> 4;
      *(byte *)(param_1 + 0x44) = bVar1 & 1;
      if ((bVar1 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
  }
  *(byte *)(param_1 + 10) = bVar1 & 0xfc;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}

