// sub_080750F0 at 0x080750F0 (thumb)

undefined4 sub_080750F0(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  iVar4 = param_1 + 0x6c;
  sub_08003458(iVar4);
  pbVar5 = (byte *)(param_1 + 0x70);
  pcVar6 = (char *)(param_1 + 0x71);
  puVar3 = (undefined *)(param_1 + 0x46);
  *puVar3 = *(undefined *)(*pcVar6 * 4 + *(int *)((uint)*pbVar5 * 4 + *(int *)(param_1 + 0x6c)));
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  cVar1 = *(char *)(param_1 + 0x12);
  if (cVar1 == '\x05') {
    sub_080033F0(iVar4,7);
    sub_08003458(iVar4);
    *puVar3 = *(undefined *)(*pcVar6 * 4 + *(int *)((uint)*pbVar5 * 4 + *(int *)(param_1 + 0x6c)));
  }
  else if (cVar1 == '\v') {
    sub_080033F0(iVar4,2);
    sub_08003458(iVar4);
    *puVar3 = *(undefined *)(*pcVar6 * 4 + *(int *)((uint)*pbVar5 * 4 + *(int *)(param_1 + 0x6c)));
  }
  else if (cVar1 == '\x11') {
    sub_080033F0(iVar4,3);
    sub_08003458(iVar4);
    *puVar3 = *(undefined *)(*pcVar6 * 4 + *(int *)((uint)*pbVar5 * 4 + *(int *)(param_1 + 0x6c)));
  }
  if (0x12 < *(byte *)(param_1 + 0x12)) {
    if ((*(byte *)(param_1 + 0x12) & 3) < 2) {
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
      *(undefined *)(param_1 + 0x1e) = 0xd;
    }
    else {
      cVar1 = (&DAT_02022f30)[*(byte *)(param_1 + 9)];
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
      *(char *)(param_1 + 0x1e) = cVar1;
    }
  }
  bVar2 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if (0x32 < bVar2) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08074B24(param_1);
  }
  return in_lr;
}

