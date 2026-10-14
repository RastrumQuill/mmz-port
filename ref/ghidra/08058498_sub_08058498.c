// sub_08058498 at 0x08058498 (thumb)

undefined4 sub_08058498(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  byte *pbVar5;
  undefined uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') goto LAB_080584ee;
  sub_080033F0(param_1 + 0x6c,7);
  *(undefined *)(param_1 + 0xe) = 0;
  pbVar5 = (byte *)(param_1 + 0xc6);
  *pbVar5 = *(byte *)(param_1 + 0x13);
  if (*(byte *)(param_1 + 0x1f) < *(byte *)(param_1 + 0x13)) {
    uVar6 = 0;
    if ((int)((uint)*pbVar5 - (uint)*(byte *)(param_1 + 0x1f)) < 0x7f) {
LAB_080584dc:
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 0;
    if (0x7f < (int)((uint)*(byte *)(param_1 + 0x1f) - (uint)*pbVar5)) goto LAB_080584dc;
  }
  *(undefined *)(param_1 + 199) = uVar6;
  *(undefined *)(param_1 + 0x12) = 0x1e;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
LAB_080584ee:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(param_1 + 0x1f);
  if ((bVar1 & 0xf8) == (*(byte *)(param_1 + 0xc6) & 0xf8)) {
    *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0xc6);
    cVar4 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar4 + -1;
    if (cVar4 == '\0') {
      *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xf);
      *(undefined *)(param_1 + 0xe) = 1;
      *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x50) + -0x2000;
    }
  }
  else {
    if (*(char *)(param_1 + 199) == '\0') {
      cVar4 = bVar1 - 4;
    }
    else {
      cVar4 = bVar1 + 4;
    }
    sVar2 = (&DAT_080c8e24)[(byte)(cVar4 - 0x40) + 0x40];
    *(int *)(param_1 + 0x54) = (int)sVar2 / 2;
    sVar3 = (&DAT_080c8e24)[(byte)(cVar4 - 0x40)];
    *(int *)(param_1 + 0x58) = (int)sVar3 / 2;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (int)sVar2 / 2;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (int)sVar3 / 2;
    *(char *)(param_1 + 0x1f) = cVar4;
  }
  return in_lr;
}

