// sub_080F855C at 0x080F855C (thumb)

undefined4 sub_080F855C(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xdda);
  if (bVar1 == 0) {
    *(byte *)(param_1 + 0xdda) = bVar1;
    *(byte *)(param_1 + 0xddb) = bVar1;
    *(byte *)(param_1 + 2) = bVar1;
    *(byte *)(param_1 + 3) = bVar1;
    uVar4 = 2;
    do {
      (&DAT_03002bc0)[uVar4] = (&DAT_03002be0)[uVar4];
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < 0x10);
  }
  else {
    iVar2 = (uint)*(byte *)(param_1 + 0xdd6) * 8;
    iVar3 = (uint)bVar1 - (uint)((byte)(&DAT_0838bbe1)[iVar2] >> 4);
    if (iVar3 < 1) {
      *(undefined *)(param_1 + 0xdda) = 0;
      *(undefined *)(param_1 + 0xddb) = 0;
      *(undefined *)(param_1 + 2) = 0;
      *(undefined *)(param_1 + 3) = 0;
      uVar4 = 2;
      do {
        (&DAT_03002bc0)[uVar4] = (&DAT_03002be0)[uVar4];
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < 0x10);
    }
    else {
      *(char *)(param_1 + 0xdda) = (char)iVar3;
      iVar2 = (uint)*(byte *)(param_1 + 0xddb) - (uint)((byte)(&DAT_0838bbe2)[iVar2] >> 4);
      if (iVar2 < 1) {
        *(undefined *)(param_1 + 0xddb) = 0;
      }
      else {
        *(char *)(param_1 + 0xddb) = (char)iVar2;
      }
    }
  }
  return in_lr;
}

