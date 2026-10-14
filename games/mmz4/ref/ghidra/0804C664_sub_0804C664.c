// sub_0804C664 at 0x0804C664 (thumb)

undefined4 sub_0804C664(int param_1,int param_2,undefined param_3,undefined param_4)

{
  undefined uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar3 = sub_08005500(DAT_0202ed88);
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\0') {
      *(undefined *)(iVar3 + 9) = 0x2d;
      *(undefined4 *)(iVar3 + 0x14) = 0x804c74d;
      *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) & 0xbf;
      *(undefined *)(iVar3 + 0x25) = 0x10;
      *(undefined2 *)(iVar3 + 0x20) = 0;
      uVar1 = 1;
    }
    else {
      *(undefined *)(iVar3 + 9) = 0x2d;
      *(undefined4 *)(iVar3 + 0x14) = 0x804c74d;
      *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) & 0xbf;
      *(undefined *)(iVar3 + 0x25) = 0x10;
      *(undefined2 *)(iVar3 + 0x20) = 0x30;
      uVar1 = 2;
    }
    *(undefined *)(iVar3 + 0x22) = uVar1;
    *(int *)(iVar3 + 0x28) = param_1;
    *(int *)(iVar3 + 0x2c) = param_2;
    uVar4 = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(iVar3 + 0x58) = uVar4;
    bVar2 = *(byte *)(param_2 + 10) >> 4;
    uVar5 = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(iVar3 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(iVar3 + 10) | 0x10;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    *(char *)(iVar3 + 0x4c) = (char)uVar5;
    *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    *(undefined *)(iVar3 + 0x10) = param_3;
    *(undefined *)(iVar3 + 0x11) = param_4;
  }
  return in_lr;
}

