// sub_0809E040 at 0x0809E040 (thumb)

undefined4 sub_0809E040(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (1 < *(byte *)(*(int *)(param_1 + 0x20) + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0809DFD8(param_1);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_0809e0ce;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0809C930(param_1,6);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x1e00;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0809C980(param_1);
  iVar2 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
  iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
  if (*(int *)(param_1 + 0x50) < iVar2) {
    return in_lr;
  }
  *(int *)(param_1 + 0x50) = iVar2;
  *(undefined4 *)(param_1 + 0x58) = 0;
  sub_0809C930(param_1,7);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0809e0ce:
  sub_0809C980(param_1);
  return in_lr;
}

