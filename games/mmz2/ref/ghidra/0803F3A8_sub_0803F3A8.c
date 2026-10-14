// sub_0803F3A8 at 0x0803F3A8 (thumb)

undefined8 sub_0803F3A8(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  sVar2 = sub_08037DC8(*(undefined4 *)(param_1 + 0x28),0);
  uVar5 = 2;
  do {
    iVar3 = sub_08006BF0(param_1);
    if (iVar3 == 0) {
      uVar5 = 3;
    }
    else {
      *(undefined *)(iVar3 + 9) = 0xf;
      *(undefined4 *)(iVar3 + 0x14) = 0x803ec4d;
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
      *(char *)(iVar3 + 0x11) = (char)uVar5;
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
      *(int *)(param_1 + 0x2c) = iVar3;
      param_1 = iVar3;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  return CONCAT44(in_lr,iVar3);
}

