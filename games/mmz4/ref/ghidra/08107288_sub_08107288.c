// sub_08107288 at 0x08107288 (thumb)

undefined8 sub_08107288(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202eda0);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x1e;
    *(undefined *)(iVar1 + 9) = 0x51;
    *(undefined4 *)(iVar1 + 0x14) = 0x81072f1;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(char *)(iVar1 + 0x10) = (char)((uint)param_2 >> 8);
    *(char *)(iVar1 + 0x11) = (char)param_2;
    *(undefined4 *)(iVar1 + 0x2c) = param_3;
  }
  return CONCAT44(in_lr,iVar1);
}

