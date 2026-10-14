// sub_080B0E70 at 0x080B0E70 (thumb)

undefined4 sub_080B0E70(undefined4 param_1,undefined4 param_2,byte param_3,undefined param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = sub_08005458(DAT_02023118);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 0x3d;
    *(undefined4 *)(iVar2 + 0x14) = 0x80b0ee9;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_020231ea;
    *(undefined *)(iVar2 + 0x1e) = DAT_0202315d;
    *(byte *)(iVar2 + 0x10) = param_3;
    *(undefined *)(iVar2 + 0x11) = param_4;
    *(undefined4 *)(iVar2 + 0x4c) = param_1;
    *(undefined4 *)(iVar2 + 0x50) = param_2;
    *(byte *)(iVar2 + 0x44) = param_3 & 1;
    if ((param_3 & 1) == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
  }
  return in_lr;
}

