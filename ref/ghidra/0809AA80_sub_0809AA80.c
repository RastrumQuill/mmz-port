// sub_0809AA80 at 0x0809AA80 (thumb)

undefined4 sub_0809AA80(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        iVar2 = (uint)*(byte *)(param_1 + 0x10) + *(int *)(param_1 + 0x58);
        *(int *)(param_1 + 0x58) = iVar2;
        if (0x1e0 < iVar2) {
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        }
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      }
    }
    else if (bVar1 == 2) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_0809AAD8(param_1);
    }
  }
  return in_lr;
}

