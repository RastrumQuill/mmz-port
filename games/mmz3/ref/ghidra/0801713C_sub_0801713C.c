// sub_0801713C at 0x0801713C (thumb)

undefined4 sub_0801713C(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_080070C0();
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 != param_1 + 0x14) {
    do {
      if ((*(byte *)(iVar1 + 10) & 1) != 0) {
        iVar2 = iVar1 + 0x34;
        if ((*(byte *)(iVar1 + 10) & 0x40) != 0) {
          *(byte *)(iVar1 + 0x47) =
               *(byte *)(iVar1 + 0x47) & 0xc1 | (byte)((DAT_0202f5d4 & 0x1f) << 1);
          if (DAT_0202f5d4 < 0x1f) {
            DAT_0202f5d4 = DAT_0202f5d4 + 1;
          }
          if ((*(byte *)(iVar1 + 0xb) & 1) == 0) {
            FUN_0800053c(iVar2,*(undefined *)(iVar1 + 0x24));
          }
          else if ((*(byte *)(iVar1 + 0xb) & 2) == 0) {
            FUN_08000590(iVar2,*(undefined *)(iVar1 + 0x24));
          }
          else {
            FUN_08000590(iVar2,*(undefined *)(iVar1 + 0x24));
          }
        }
        if ((*(byte *)(iVar1 + 10) & 8) == 0) {
          sub_08005008(param_2,iVar2,0,*(undefined *)(iVar1 + 0x25));
        }
        else {
          sub_08005008(param_2,iVar2,((uint)*(byte *)(iVar1 + 0x49) << 0x1c) >> 0x1e,
                       *(undefined *)(iVar1 + 0x25));
        }
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
      *(int *)(param_1 + 0xc) = iVar1;
    } while (iVar1 != param_1 + 0x14);
  }
  return in_lr;
}

