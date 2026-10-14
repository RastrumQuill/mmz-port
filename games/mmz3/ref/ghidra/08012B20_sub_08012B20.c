// sub_08012B20 at 0x08012B20 (thumb)

undefined4 sub_08012B20(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar3 = 0;
    do {
      *(undefined4 *)((short)uVar3 * 4 + param_1 + 0x68) = 0;
      uVar2 = (int)(short)uVar3 + 1;
      uVar3 = uVar2 & 0xffff;
    } while ((int)(uVar2 * 0x10000) >> 0x10 < 4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    uVar3 = 0;
    do {
      iVar4 = (int)(uVar3 << 0x10) >> 0x10;
      iVar5 = iVar4 * 4 + param_1;
      if (*(int *)(iVar5 + 0x68) == 0) {
        uVar1 = sub_080DF04C(0x272000,((iVar4 * 3 + 0x13) * 0x10 + 8) * 0x100,
                             (int)(uVar3 << 0x10) >> 0x11 & 0xff,uVar3 & 1,1);
        *(undefined4 *)(iVar5 + 0x68) = uVar1;
      }
      uVar3 = iVar4 + 1U & 0xffff;
    } while ((int)((iVar4 + 1U) * 0x10000) >> 0x10 < 4);
  }
  return in_lr;
}

