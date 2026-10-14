// sub_0803E32C at 0x0803E32C (thumb)

undefined8 sub_0803E32C(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  iVar3 = sub_08006BF0();
  if (iVar3 != 0) {
    sVar2 = sub_08037DC8(uVar5,0);
    *(undefined *)(iVar3 + 9) = 0xd;
    *(undefined4 *)(iVar3 + 0x14) = 0x803dc19;
    if (sVar2 < 2) {
      bVar1 = *(byte *)(iVar3 + 0xb) & 0xbf;
    }
    else {
      bVar1 = *(byte *)(iVar3 + 0xb) | 0x40;
    }
    *(byte *)(iVar3 + 0xb) = bVar1;
    *(undefined *)(iVar3 + 0x25) = 0x10;
    *(undefined2 *)(iVar3 + 0x20) = (&DAT_08335fd4)[sVar2];
    *(undefined1 *)(iVar3 + 0x22) = (&DAT_08335fdc)[sVar2];
    *(undefined *)(iVar3 + 0x11) = 2;
    *(int *)(iVar3 + 0x28) = param_1;
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(iVar3 + 0x60) = *(undefined4 *)(param_1 + 0x60);
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    uVar4 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(iVar3 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar3 + 10) | 0x10;
    }
    *(byte *)(iVar3 + 10) = bVar1;
    *(char *)(iVar3 + 0x4c) = (char)uVar4;
    *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    *(undefined *)(iVar3 + 0x13) = *(undefined *)(param_1 + 0x13);
    *(int *)(param_1 + 0x2c) = iVar3;
  }
  return CONCAT44(in_lr,iVar3);
}

