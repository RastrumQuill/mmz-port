// sub_080AB48C at 0x080AB48C (thumb)

undefined8 sub_080AB48C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar2 = sub_08005500(DAT_0202ed90);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 0x18;
    *(undefined *)(iVar2 + 9) = 0x49;
    *(undefined4 *)(iVar2 + 0x14) = 0x80ab531;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
    *(int *)(iVar2 + 0x28) = param_1;
    uVar3 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
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
    *(undefined *)(iVar2 + 0x10) = 0;
    *(undefined *)(iVar2 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar2);
}

