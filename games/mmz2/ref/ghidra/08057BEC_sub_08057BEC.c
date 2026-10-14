// sub_08057BEC at 0x08057BEC (thumb)

undefined4 sub_08057BEC(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  ushort *puVar6;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  puVar6 = (ushort *)(param_1 + 0xd6);
  if ((short)*puVar6 < 1) {
    pcVar5 = (char *)(param_1 + 0xd8);
    if (*pcVar5 != '\0') {
      *pcVar5 = *pcVar5 + -1;
      return in_lr;
    }
    pbVar4 = (byte *)(param_1 + 0xd9);
    local_1c = *(short *)(&DAT_0833caa0 + ((uint)*(byte *)(param_1 + 0x11) * 9 + (uint)*pbVar4) * 2)
               * 0x100 + *(int *)(param_1 + 0xc0) + -0xd000;
    local_18 = *(int *)(param_1 + 0xd0) + 0x2000;
    sub_080032EC(0xeb);
    uVar2 = sub_080A0E70(0,&local_1c,0);
    uVar2 = sub_080A0E70(uVar2,0,1);
    uVar2 = sub_080A0E70(uVar2,0,2);
    sub_080A0E70(uVar2,0,3);
    *pcVar5 = '\x10';
    *pbVar4 = *pbVar4 + 1;
    if ((short)(ushort)*pbVar4 < *(short *)(&DAT_0833ca98 + (uint)*(byte *)(param_1 + 0x11) * 2)) {
      return in_lr;
    }
    uVar1 = 0x708;
  }
  else {
    *(undefined *)(param_1 + 0xd8) = 0;
    *(undefined *)(param_1 + 0xd9) = 0;
    uVar1 = *puVar6;
    iVar3 = uVar1 - 1;
    *puVar6 = (ushort)iVar3;
    if (iVar3 * 0x10000 >> 0x10 < 0xb4) {
      sub_08015518(3,param_1 + 0x54);
      return in_lr;
    }
    if ((*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0xc0)) + 0xc000U < 0x18001) {
      return in_lr;
    }
    uVar1 = uVar1 - 8;
  }
  *puVar6 = uVar1;
  return in_lr;
}

