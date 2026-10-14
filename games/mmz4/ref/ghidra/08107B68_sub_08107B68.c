// sub_08107B68 at 0x08107B68 (thumb)

undefined4 sub_08107B68(undefined4 *param_1,undefined param_2,byte param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202eda0);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x1e;
    *(undefined *)(iVar1 + 9) = 0x52;
    *(undefined4 *)(iVar1 + 0x14) = 0x8107be1;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(byte *)(iVar1 + 0x11) = param_3;
    if (param_3 < 4) {
      sub_08107B68(param_1,param_2,param_3 + 1);
    }
  }
  return in_lr;
}

