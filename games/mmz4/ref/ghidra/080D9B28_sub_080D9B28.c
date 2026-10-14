// sub_080D9B28 at 0x080D9B28 (thumb)

undefined8 sub_080D9B28(int param_1,undefined param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar2 = sub_08005500(DAT_0202ed9c);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 1;
    *(undefined *)(iVar2 + 9) = 0x21;
    *(undefined4 *)(iVar2 + 0x14) = 0x80d9cc5;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    uVar3 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    uVar3 = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(iVar2 + 0x60) = uVar3;
    *(undefined *)(iVar2 + 0x10) = 0;
    *(undefined *)(iVar2 + 0x11) = 0;
    *(undefined *)(iVar2 + 0x7c) = param_2;
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    uVar4 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(char *)(iVar2 + 0x4c) = (char)uVar4;
    *(byte *)(iVar2 + 0x4a) = *(byte *)(iVar2 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  }
  return CONCAT44(in_lr,iVar2);
}

