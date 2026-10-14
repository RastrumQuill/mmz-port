// sub_08044100 at 0x08044100 (thumb)

undefined4 sub_08044100(int param_1,int param_2)

{
  undefined uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar3 = sub_08005500(DAT_0202ed88);
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined *)(iVar3 + 9) = 0x13;
      *(undefined4 *)(iVar3 + 0x14) = 0x80441fd;
      *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) & 0xbf;
      *(undefined *)(iVar3 + 0x25) = 0x10;
      *(undefined2 *)(iVar3 + 0x20) = 0;
      uVar1 = 1;
    }
    else {
      *(undefined *)(iVar3 + 9) = 0x13;
      *(undefined4 *)(iVar3 + 0x14) = 0x80441fd;
      *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) & 0xbf;
      *(undefined *)(iVar3 + 0x25) = 0x10;
      *(undefined2 *)(iVar3 + 0x20) = 0x30;
      uVar1 = 2;
    }
    *(undefined *)(iVar3 + 0x22) = uVar1;
    *(undefined *)(iVar3 + 0x10) = 0;
    *(undefined *)(iVar3 + 0x11) = 0;
    *(int *)(iVar3 + 0x28) = param_1;
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
    if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(param_2 + 0x54) - *(int *)(param_2 + 0x5c);
    }
    else {
      iVar4 = *(int *)(param_2 + 0x54) + *(int *)(param_2 + 0x5c);
    }
    *(int *)(iVar3 + 0x54) = iVar4;
    *(int *)(iVar3 + 0x58) = *(int *)(param_2 + 0x58) + *(int *)(param_2 + 0x60);
  }
  return in_lr;
}

