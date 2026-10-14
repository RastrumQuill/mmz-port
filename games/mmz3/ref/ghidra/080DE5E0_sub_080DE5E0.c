// sub_080DE5E0 at 0x080DE5E0 (thumb)

undefined8 sub_080DE5E0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_02030630);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x1e;
    *(undefined *)(iVar1 + 9) = 0x2f;
    *(undefined4 *)(iVar1 + 0x14) = 0x80de6a1;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined *)(iVar1 + 0x10) = 0;
    uVar2 = *param_1;
    *(undefined4 *)(iVar1 + 0x54) = uVar2;
    *(undefined4 *)(iVar1 + 0x68) = uVar2;
    *(undefined4 *)(iVar1 + 0x58) = param_1[1];
  }
  return CONCAT44(in_lr,iVar1);
}

