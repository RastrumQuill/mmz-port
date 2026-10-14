// sub_0804F934 at 0x0804F934 (thumb)

undefined4 sub_0804F934(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,3);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0x5a;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(iVar3 + 0xd) != '\x03') {
    bVar1 = *(byte *)(iVar3 + 10) >> 4;
    uVar8 = bVar1 & 1;
    *(char *)(param_1 + 0x44) = (char)uVar8;
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
    iVar6 = *(int *)(DAT_0202286c + 0x4c) - iVar6;
    iVar7 = (*(int *)(DAT_0202286c + 0x50) - iVar7) + -0x1800;
    iVar4 = sub_080C88E8(iVar6 * 0x100 >> 0x10,iVar7 * 0x100 >> 0x10);
    uVar9 = ((uint)(iVar4 << 0x10) >> 0x18) + 0xa0 & 0xff;
    uVar9 = (uVar9 + (uVar9 * -2 + 0xc0) * uVar8) * 0x1000000 + 0xf8000000;
    if (uVar9 >> 0x18 < 0x41) {
      sub_080033F0(param_1 + 0x6c,(&DAT_082af314)[uVar9 >> 0x1c]);
      local_24 = param_1 + 0x6c;
    }
    else {
      local_24 = param_1 + 0x6c;
      if (0xa0 < uVar9 >> 0x18) {
        sub_080033F0(local_24,1);
      }
    }
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    if (iVar6 - 0x1801U < 0x67ff) {
      iVar6 = iVar7;
      if (iVar7 < 0) {
        iVar6 = -iVar7;
      }
      if (iVar6 < 0x8000) {
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        if (0x1800 < iVar7) {
          piVar5 = (int *)(param_1 + 0xc0);
          if (*piVar5 == 0) {
            if (0x10 < *(byte *)(param_1 + 0x12)) {
              iVar6 = (uVar9 >> 0x1c) * 4;
              iVar7 = uVar8 * -2 + 1;
              local_2c = iVar7 * *(int *)(&DAT_082af31c + iVar6) + *(int *)(param_1 + 0x4c);
              local_28 = *(int *)(&DAT_082af330 + iVar6) + *(int *)(param_1 + 0x50);
              cVar2 = sub_080065AC();
              if (cVar2 == '\0') {
                uVar8 = (iVar7 * ((uVar9 & 0xf0000000) + 0x60000000 >> 0x18) & 0xff) +
                        (1 - uVar8) * 0x80 & 0xff;
                if (iVar3 != 0) {
                  *(int *)(iVar3 + 0x54) = (int)(short)(&DAT_080c8e24)[uVar8 + 0x40] << 2;
                  *(int *)(iVar3 + 0x58) = (int)(short)(&DAT_080c8e24)[uVar8] << 2;
                  *(undefined *)(iVar3 + 0xd) = 5;
                  *(undefined *)(iVar3 + 0xe) = 0;
                }
                sub_08001EAC(0x11);
                sub_08076710(&local_2c,0x240,uVar8);
              }
              *(undefined *)(param_1 + 0x12) = 0;
              cVar2 = *(char *)(param_1 + 0x13) + '\x01';
              *(char *)(param_1 + 0x13) = cVar2;
              if (cVar2 == '\x03') {
                *(undefined *)(param_1 + 0x13) = 0;
                *piVar5 = 0x5a;
              }
            }
          }
          else {
            *piVar5 = *piVar5 + -1;
          }
        }
      }
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    sub_08003458(local_24);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  return in_lr;
}

