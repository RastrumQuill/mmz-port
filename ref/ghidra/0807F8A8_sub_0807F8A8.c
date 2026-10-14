// sub_0807F8A8 at 0x0807F8A8 (thumb)

undefined4 sub_0807F8A8(int param_1)

{
  ushort uVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    if (((*(ushort *)(param_1 + 0x90) & 0x100) == 0) ||
       (*(char *)(*(int *)(param_1 + 0x20) + 0xd8) != '\0')) {
      if (*(char *)(param_1 + 0x73) == '\x03') {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
      }
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
      *(int *)(param_1 + 0xc0) = iVar5;
      pcVar2 = (char *)(*(int *)(param_1 + 0x20) + 0xd8);
      *pcVar2 = *pcVar2 + '\x01';
      uVar3 = sub_0807F630(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar3;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined2 *)(param_1 + 0xc4) = 0x280;
      *(undefined2 *)(param_1 + 0xc6) = 0x20;
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar5 + 0x4c);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar5 + 0x50);
      *(undefined4 *)(param_1 + 0x58) = 0;
      sub_0800561C(param_1 + 0x74,&DAT_082b26f4);
      sub_08001EAC(0xb3);
    }
  }
  else {
    psVar7 = (short *)(param_1 + 0xc4);
    *psVar7 = *psVar7 + -1;
    puVar4 = (uint *)(param_1 + 0x90);
    uVar1 = *(ushort *)puVar4;
    if ((uVar1 & 0x100) == 0) {
      *(undefined *)(*(int *)(param_1 + 0x24) + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8)
      ;
      *puVar4 = uVar1 & 0x100;
      *(undefined *)(param_1 + 0x94) = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
      *(int *)(iVar6 + 0x50) = *(int *)(iVar6 + 0x50) + *(int *)(param_1 + 0x58);
      iVar5 = *(int *)(param_1 + 0x58) + 0x40;
      *(int *)(param_1 + 0x58) = iVar5;
      if (0x700 < iVar5) {
        *(undefined4 *)(param_1 + 0x58) = 0x700;
      }
      iVar5 = sub_08008360(*(undefined4 *)(iVar6 + 0x4c),*(undefined4 *)(iVar6 + 0x50));
      if (iVar5 < *(int *)(iVar6 + 0x50)) {
        uVar3 = sub_08008360(*(undefined4 *)(iVar6 + 0x4c));
        *(undefined4 *)(iVar6 + 0x50) = uVar3;
      }
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar6 + 0x4c);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar6 + 0x50);
      iVar5 = sub_0801BC08(iVar6,1,1,1,1,0);
      iVar5 = (uint)*(ushort *)(param_1 + 0xc6) - iVar5;
      *(ushort *)(param_1 + 0xc6) = (ushort)iVar5;
      if ((((*(ushort *)(iVar6 + 0x90) & 1) == 0) && (0 < iVar5 * 0x10000)) && (0 < *psVar7)) {
        return in_lr;
      }
      *puVar4 = 0;
      *(undefined *)(param_1 + 0x94) = 0;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  return in_lr;
}

