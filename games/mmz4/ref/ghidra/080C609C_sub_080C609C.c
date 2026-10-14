// sub_080C609C at 0x080C609C (thumb)

undefined4 sub_080C609C(undefined4 param_1,undefined4 param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08005500(DAT_0202ed94);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 8;
    *(undefined *)(iVar2 + 9) = 0x1a;
    *(undefined4 *)(iVar2 + 0x14) = 0x80c611d;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x54) = param_1;
    *(undefined4 *)(iVar2 + 0x58) = param_2;
    *(undefined *)(iVar2 + 0x10) = 6;
    *(byte *)(iVar2 + 0x11) = param_3;
    if (param_3 == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    uVar3 = param_3 & 1;
    *(char *)(iVar2 + 0x4c) = (char)uVar3;
    *(byte *)(iVar2 + 0x4a) = *(byte *)(iVar2 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  }
  return in_lr;
}

