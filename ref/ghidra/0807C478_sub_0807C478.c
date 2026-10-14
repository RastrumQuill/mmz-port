// sub_0807C478 at 0x0807C478 (thumb)

undefined4 sub_0807C478(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined4 in_lr;
  
  puVar8 = (uint *)(param_1 + 0x90);
  uVar3 = *(ushort *)puVar8 & 0x40;
  if ((*(ushort *)puVar8 & 0x40) == 0) {
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    bVar1 = *(byte *)(param_1 + 0xd);
    if (bVar1 != 1) {
      if (1 < bVar1) {
        if (bVar1 != 2) {
          return in_lr;
        }
        if ((*(ushort *)puVar8 & 0x100) != 0) {
          iVar7 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
          *(int *)(iVar7 + 0x50) = *(int *)(iVar7 + 0x50) + 0x200;
          iVar6 = sub_08008360(*(undefined4 *)(iVar7 + 0x4c));
          if (iVar6 < *(int *)(iVar7 + 0x50)) {
            uVar5 = sub_08008360(*(undefined4 *)(iVar7 + 0x4c));
            *(undefined4 *)(iVar7 + 0x50) = uVar5;
          }
          *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar7 + 0x4c);
          *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar7 + 0x50);
          iVar6 = sub_0801BC08(iVar7,1,1,1,1,uVar3);
          iVar6 = (uint)*(ushort *)(param_1 + 0xc0) - iVar6;
          *(ushort *)(param_1 + 0xc0) = (ushort)iVar6;
          if (((*(ushort *)(iVar7 + 0x90) & 1) == 0) && (-1 < iVar6 * 0x10000)) {
            return in_lr;
          }
          *puVar8 = uVar3;
          *(undefined *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          return in_lr;
        }
        *(undefined *)(param_1 + 0x11) = 1;
        *(undefined *)(*(int *)(param_1 + 0x24) + 0x11) = 1;
        *(undefined *)(*(int *)(param_1 + 0x20) + 0xc9) = 0;
        sub_08001EAC(0x95);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
        sub_0807C6A0(param_1);
        return in_lr;
      }
      if (bVar1 != 0) {
        return in_lr;
      }
      if ((*(ushort *)puVar8 & 0x100) != 0) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
        *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(*(int *)(param_1 + 0x20) + 0xc9) = 1;
        uVar5 = sub_0807BE80(param_1);
        *(undefined4 *)(param_1 + 0x24) = uVar5;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar6 + 0x4c);
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar6 + 0x50);
        *(undefined2 *)(param_1 + 0xc0) = 0x1c;
        sub_08001EAC(0xb3);
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12);
      *(char *)(param_1 + 0x12) = cVar2 + -1;
      if (cVar2 != '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_080055FC(param_1 + 0x74,&DAT_082b2144,param_1 + 0x4c,6);
      *(int *)(param_1 + 0xb4) = param_1;
      *(undefined4 *)(param_1 + 0xb0) = 0;
      pcVar4 = (char *)(*(int *)(param_1 + 0x20) + 0xca);
      *pcVar4 = *pcVar4 + '\x01';
      *(undefined2 *)(param_1 + 0xc0) = 0x200;
      return in_lr;
    }
    iVar6 = *(ushort *)(param_1 + 0xc0) - 1;
    *(ushort *)(param_1 + 0xc0) = (ushort)iVar6;
    if (iVar6 * 0x10000 >> 0x10 != -1) {
      return in_lr;
    }
    sub_08001EAC(0x95);
    pcVar4 = (char *)(*(int *)(param_1 + 0x20) + 0xca);
    *pcVar4 = *pcVar4 + -1;
    bVar1 = *(byte *)(param_1 + 9);
  }
  else {
    sub_08001EAC(0x95);
    pcVar4 = (char *)(*(int *)(param_1 + 0x20) + 0xca);
    *pcVar4 = *pcVar4 + -1;
    bVar1 = *(byte *)(param_1 + 9);
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[bVar1] + 8);
  sub_0807C6A0(param_1);
  return in_lr;
}

