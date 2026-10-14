// sub_0801C924 at 0x0801C924 (thumb)

undefined4 sub_0801C924(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_080054B4();
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 != param_1 + 0x14) {
    do {
      if ((*(byte *)(iVar1 + 10) & 1) != 0) {
        iVar2 = iVar1 + 0x34;
        if ((*(byte *)(iVar1 + 10) & 0x40) != 0) {
          *(byte *)(iVar1 + 0x47) =
               *(byte *)(iVar1 + 0x47) & 0xc1 | (byte)((DAT_0202dc04 & 0x1f) << 1);
          if (DAT_0202dc04 < 0x1f) {
            DAT_0202dc04 = DAT_0202dc04 + 1;
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
          sub_080033FC(param_2,iVar2,0,*(undefined *)(iVar1 + 0x25));
        }
        else {
          sub_080033FC(param_2,iVar2,((uint)*(byte *)(iVar1 + 0x49) << 0x1c) >> 0x1e,
                       *(undefined *)(iVar1 + 0x25));
        }
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
      *(int *)(param_1 + 0xc) = iVar1;
    } while (iVar1 != param_1 + 0x14);
  }
  return in_lr;
}

