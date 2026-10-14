// sub_080D5488 at 0x080D5488 (thumb)

undefined4 sub_080D5488(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_080177F4(param_1);
      bVar1 = *(byte *)(param_1 + 0x13);
      iVar2 = bVar1 + 1;
      *(char *)(param_1 + 0x13) = (char)iVar2;
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 100) +
           *(short *)((int)&DAT_080fe64c + ((bVar1 + 0x81) * 0x1000000 >> 0x17)) * 2;
      *(int *)(param_1 + 0x58) =
           *(int *)(param_1 + 0x68) +
           *(short *)((int)&DAT_080fe64c + ((uint)(iVar2 * 0x2000000) >> 0x17)) * 4;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    DAT_0202fc0a = 0x2b7;
    DAT_0202fa0a = 10;
    sub_0800393C(&DAT_085d8cbc,0x116e0);
    sub_08003E14(&DAT_085d8cc8,(DAT_0202fa0a - 4) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0x25) = 0x12;
    sub_08017700(param_1,0xfd00);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x10;
    uVar4 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x60) + 0x10;
      *(int *)(param_1 + 0x60) = iVar2;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - iVar2;
      uVar3 = uVar4 * 0x10000 + 0x10000;
      uVar4 = uVar3 >> 0x10;
    } while ((int)uVar3 >> 0x10 < 0x60);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080177F4(param_1);
  iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar5;
  iVar2 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_1 + 0x68) = iVar5;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

