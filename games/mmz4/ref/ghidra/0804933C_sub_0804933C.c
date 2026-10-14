// sub_0804933C at 0x0804933C (thumb)

undefined4 sub_0804933C(undefined4 *param_1,undefined param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08005500(DAT_0202ed88);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 0x22;
    *(undefined4 *)(iVar2 + 0x14) = 0x80493e9;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
    *(undefined *)(iVar2 + 0x25) = 0x10;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 1;
    *(undefined *)(iVar2 + 0x10) = 1;
    *(undefined *)(iVar2 + 0x11) = param_2;
    *(undefined4 *)(iVar2 + 0x2c) = DAT_0202dbf0;
    if ((param_3 & 0xff) == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    *(char *)(iVar2 + 0x4c) = (char)(param_3 & 1);
    *(byte *)(iVar2 + 0x4a) = *(byte *)(iVar2 + 0x4a) & 0xef | (byte)((param_3 & 1) << 4);
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
  }
  return in_lr;
}

