// sub_080A48F4 at 0x080A48F4 (thumb)

undefined4 sub_080A48F4(int param_1)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar3 + 0xd) < 0xf) {
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + *(int *)(param_1 + 100);
    *(uint *)(param_1 + 0x58) =
         *(int *)(iVar3 + 0x58) + *(int *)(param_1 + 0x68) + (*(byte *)(param_1 + 0x13) & 1) * 0x100
    ;
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) + 1;
    bVar1 = *(byte *)(param_1 + 0xd);
    if (bVar1 == 1) {
      puVar2 = (ushort *)(param_1 + 0x50);
      *puVar2 = *puVar2 - 0x10;
      *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + -0x10;
      if (0x17f < *puVar2) {
        *(undefined *)(param_1 + 0xd) = 0;
      }
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        puVar2 = (ushort *)(param_1 + 0x50);
        *puVar2 = *puVar2 + 0x10;
        *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 0x10;
        if (0x1ff < *puVar2) {
          bVar1 = *(byte *)(param_1 + 0x12);
          *(byte *)(param_1 + 0x12) = bVar1 + 1;
          if (bVar1 < 8) {
            *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
          }
          else {
            *(undefined *)(param_1 + 0xd) = 2;
          }
        }
      }
    }
    else if (bVar1 == 2) {
      puVar2 = (ushort *)(param_1 + 0x50);
      *puVar2 = *puVar2 - 0x40;
      *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + -0x40;
      if (*puVar2 < 0x41) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
        sub_080A4614(param_1);
      }
    }
    sub_08006E08(param_1 + 0x74,
                 &DAT_08344bf8 +
                 (uint)(byte)(&DAT_08344d78)[*(ushort *)(param_1 + 0x50) >> 4] * 0x18);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

