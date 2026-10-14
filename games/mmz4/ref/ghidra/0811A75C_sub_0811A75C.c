// sub_0811A75C at 0x0811A75C (thumb)

undefined4 sub_0811A75C(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  ushort local_24 [4];
  
  iVar3 = *(int *)(param_1 + 0x63a8);
  if (*(char *)(iVar3 + 0xc4) == -1) {
    local_24[0] = 0x1d6;
  }
  else {
    local_24[0] = *(byte *)(iVar3 + 0xc4) + 400;
  }
  if (*(char *)(iVar3 + 0xc5) == -1) {
    local_24[1] = 0x1d7;
  }
  else {
    local_24[1] = *(byte *)(iVar3 + 0xc5) + 400;
  }
  if (*(char *)(iVar3 + 0xc6) == -1) {
    local_24[2] = 0x1d8;
  }
  else {
    local_24[2] = *(byte *)(iVar3 + 0xc6) + 400;
  }
  uVar4 = 0;
  do {
    if ((*(byte *)(param_1 + 0xdd2) != 0xff) || (uVar4 == *(byte *)(param_1 + 0xdd0))) {
      sub_0810D270(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[local_24[uVar4]],7,uVar4 * 4 + 1,
                   ((uint)*(byte *)(param_1 + 0xdd2) << 0x18) >> 0x1a);
      if (*(byte *)(param_1 + 0xdd2) < 0x40) {
        uVar1 = sub_0810D1A4(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[local_24[uVar4]]);
        uVar1 = uVar1 & 0xff;
        uVar2 = (uint)(*(byte *)(param_1 + 0xdd2) >> 2);
        if (uVar1 <= uVar2) {
          if (10 < uVar1) goto LAB_0811a862;
          uVar2 = uVar1;
          if (3 < (*(byte *)(param_1 + 0xdd2) & 7)) {
            uVar2 = 0;
          }
        }
        if (uVar2 != 0) {
          sub_0810D214(&DAT_0886a19d,uVar2 + 7,uVar4 * 4 + 1);
        }
      }
    }
LAB_0811a862:
    uVar4 = uVar4 + 1 & 0xff;
    if (2 < uVar4) {
      return in_lr;
    }
  } while( true );
}

