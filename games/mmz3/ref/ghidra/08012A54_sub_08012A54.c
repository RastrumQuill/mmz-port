// sub_08012A54 at 0x08012A54 (thumb)

undefined4 sub_08012A54(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar3 = 0;
    do {
      *(undefined4 *)((short)uVar3 * 4 + param_1 + 0x68) = 0;
      uVar2 = (int)(short)uVar3 + 1;
      uVar3 = uVar2 & 0xffff;
    } while ((int)(uVar2 * 0x10000) >> 0x10 < 6);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    uVar3 = 0;
    do {
      iVar4 = (short)uVar3 * 4 + param_1;
      if (*(int *)(iVar4 + 0x68) == 0) {
        uVar1 = sub_080DF04C(0x18a000,0x17800,uVar3 & 0xff,0,0);
        *(undefined4 *)(iVar4 + 0x68) = uVar1;
      }
      uVar2 = (int)(short)uVar3 + 1;
      uVar3 = uVar2 & 0xffff;
    } while ((int)(uVar2 * 0x10000) >> 0x10 < 6);
  }
  return in_lr;
}

