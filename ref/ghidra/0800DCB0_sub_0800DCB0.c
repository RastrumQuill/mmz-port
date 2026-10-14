// sub_0800DCB0 at 0x0800DCB0 (thumb)

undefined4 sub_0800DCB0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_08005410();
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 != param_1 + 0x14) {
    do {
      if ((*(byte *)(iVar1 + 10) & 1) != 0) {
        iVar2 = iVar1 + 0x2c;
        if ((*(byte *)(iVar1 + 10) & 0x40) != 0) {
          *(byte *)(iVar1 + 0x3f) =
               *(byte *)(iVar1 + 0x3f) & 0xc1 | (byte)((DAT_0202287c & 0x1f) << 1);
          if (DAT_0202287c < 0x1f) {
            DAT_0202287c = DAT_0202287c + 1;
          }
          if ((*(byte *)(iVar1 + 0xb) & 1) == 0) {
            sub_08002C04(iVar2,*(undefined *)(iVar1 + 0x1f));
          }
          else if ((*(byte *)(iVar1 + 0xb) & 2) == 0) {
            sub_08002E50(iVar2,*(undefined *)(iVar1 + 0x1f));
          }
          else {
            sub_0800311C(iVar2,*(undefined *)(iVar1 + 0x1f));
          }
        }
        if ((*(byte *)(iVar1 + 10) & 8) == 0) {
          sub_08003378(param_2,iVar2);
        }
        else {
          sub_08003380(param_2,iVar2,((uint)*(byte *)(iVar1 + 0x41) << 0x1c) >> 0x1e);
        }
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
      *(int *)(param_1 + 0xc) = iVar1;
    } while (iVar1 != param_1 + 0x14);
  }
  return in_lr;
}

