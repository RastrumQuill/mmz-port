// sub_0806FDA0 at 0x0806FDA0 (thumb)

undefined4 sub_0806FDA0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082b1168);
    sub_080489E4(param_1);
    sub_080033F0(param_1 + 0x6c,3);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    if (*(char *)(iVar3 + 0x10) == '\x01') {
      uVar4 = 0x10e;
    }
    else {
      uVar4 = 0xb4;
    }
    *(undefined4 *)(param_1 + 0xc0) = uVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (((*(uint *)(iVar3 + 0x90) & 0x10001) == 0) && ((*(byte *)(iVar3 + 0x94) & 2) == 0)) {
    cVar2 = (&DAT_02022f30)[*(byte *)(param_1 + 9)];
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar2 << 4;
    *(char *)(param_1 + 0x1e) = cVar2;
  }
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  uVar9 = bVar1 & 1;
  *(char *)(param_1 + 0x44) = (char)uVar9;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  iVar6 = *(int *)(iVar3 + 0x4c);
  *(int *)(param_1 + 0x4c) = iVar6;
  iVar7 = *(int *)(iVar3 + 0x50);
  *(int *)(param_1 + 0x50) = iVar7;
  iVar6 = sub_080C88E8((*(int *)(DAT_0202286c + 0x4c) - iVar6) * 0x100 >> 0x10,
                       ((*(int *)(DAT_0202286c + 0x50) - iVar7) + -0x1800) * 0x100 >> 0x10);
  uVar8 = ((uint)(iVar6 << 0x10) >> 0x18) + 0xa0 & 0xff;
  uVar8 = (uVar8 + uVar9 * (uVar8 * -2 + 0xc0)) * 0x1000000 + 0xf8000000;
  if (uVar8 >> 0x18 < 0x41) {
    sub_080033F0(param_1 + 0x6c,(&DAT_082b11db)[uVar8 >> 0x1c]);
  }
  else if (0xa0 < uVar8 >> 0x18) {
    sub_080033F0(param_1 + 0x6c,1);
  }
  piVar5 = (int *)(param_1 + 0xc0);
  if (*piVar5 == 0) {
    if (*(byte *)(param_1 + 0x12) < 9) goto LAB_0806ffd6;
    iVar6 = (uVar8 >> 0x1c) * 4;
    iVar7 = uVar9 * -2 + 1;
    local_28 = iVar7 * *(int *)(&DAT_082b11e0 + iVar6) + *(int *)(param_1 + 0x4c);
    local_24 = *(int *)(&DAT_082b11f4 + iVar6) + *(int *)(param_1 + 0x50);
    cVar2 = sub_080065AC();
    if ((cVar2 == '\0') && (1 < (byte)(*(char *)(iVar3 + 0xd) - 3U))) {
      sub_08001EAC(0x11);
      sub_08076710(&local_28,0x240,
                   (iVar7 * ((uVar8 & 0xf0000000) + 0x60000000 >> 0x18) & 0xff) + (1 - uVar9) * 0x80
                   & 0xff);
    }
    *(undefined *)(param_1 + 0x12) = 0;
    cVar2 = *(char *)(param_1 + 0x13) + '\x01';
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 != '\x03') goto LAB_0806ffd6;
    *(undefined *)(param_1 + 0x13) = 0;
    if ((*(byte *)(iVar3 + 0xc5) & 1) != 0) {
      *piVar5 = 0x5a;
      goto LAB_0806ffd6;
    }
    iVar3 = 0xb4;
  }
  else {
    iVar3 = *piVar5 + -1;
  }
  *piVar5 = iVar3;
LAB_0806ffd6:
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

