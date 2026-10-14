// sub_08091060 at 0x08091060 (thumb)

undefined4 sub_08091060(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if ((byte)(*(char *)(param_1 + 0xd) - 1U) < 8) {
      iVar1 = sub_08008988(*(undefined4 *)(iVar3 + 0xc4),*(undefined4 *)(iVar3 + 200));
      iVar1 = *(int *)(param_1 + 0x54) - iVar1 >> 8;
      if (iVar1 - 1U < 0xce) {
        if (*(int *)(param_1 + 0x58) < *(int *)(iVar3 + 200)) {
          if (iVar1 - 0x21U < 0x8f) {
            if (iVar1 < 0x48) {
              puVar2 = (undefined *)(iVar3 + 0xda);
            }
            else if (iVar1 < 0x88) {
              puVar2 = (undefined *)(iVar3 + 0xdb);
            }
            else {
              puVar2 = (undefined *)(iVar3 + 0xdc);
            }
            *puVar2 = 1;
          }
        }
        else {
          iVar1 = FUN_081288bc(iVar1,0x2c);
          if (iVar1 < 8) {
            *(undefined *)(iVar3 + iVar1 + 0xdd) = 1;
          }
        }
      }
    }
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885ccb4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08090D64(param_1);
  }
  return in_lr;
}

