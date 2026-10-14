// sub_0809AC6C at 0x0809AC6C (thumb)

undefined4 sub_0809AC6C(undefined4 *param_1,byte param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f07c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0xc;
    *(undefined4 *)(iVar1 + 0x14) = 0x809acc9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(byte *)(iVar1 + 0x11) = (byte)((param_3 & 0xff) << 4) | param_2;
  }
  return in_lr;
}

