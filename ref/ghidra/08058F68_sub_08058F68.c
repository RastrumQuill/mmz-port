// sub_08058F68 at 0x08058F68 (thumb)

undefined4 sub_08058F68(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
LAB_08058fe8:
    iVar6 = param_1 + 0x6c;
    sub_08003458(iVar6);
    pbVar1 = (byte *)(param_1 + 0x70);
    pcVar7 = (char *)(param_1 + 0x71);
    puVar8 = (undefined *)(param_1 + 0x46);
    *puVar8 = *(undefined *)(*pcVar7 * 4 + *(int *)((uint)*pbVar1 * 4 + *(int *)(param_1 + 0x6c)));
    uVar2 = sub_080C88E8((*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x4c)) * 0x1000 >> 0x10,
                         (*(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0x50)) * 0x1000 >> 0x10);
    uVar2 = ((int)((uVar2 & 0xffff) + 0x4000) >> 8 & 0xffU) + 0xc0 & 0xff;
    iVar3 = (short)(&DAT_080c8e24)[uVar2 + 0x40] * 0x180;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x54) = iVar3 >> 8;
    iVar4 = (short)(&DAT_080c8e24)[uVar2] * 0x180;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x58) = iVar4 >> 8;
    iVar5 = *(int *)(param_1 + 0x4c) + (iVar3 >> 8);
    *(int *)(param_1 + 0x4c) = iVar5;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (iVar4 >> 8);
    iVar3 = *(int *)(param_1 + 0xb8);
    iVar4 = iVar5 - iVar3;
    if (iVar4 < 0) {
      iVar4 = iVar3 - iVar5;
    }
    if (iVar4 < 0x800) {
      iVar4 = *(int *)(param_1 + 0xbc);
      iVar3 = *(int *)(param_1 + 0x50) - iVar4;
      if (iVar3 < 0) {
        iVar3 = iVar4 - *(int *)(param_1 + 0x50);
      }
      if (iVar3 < 0x800) {
        if ((*(int *)(DAT_0202286c + 0x4c) >> 8) - (*(int *)(param_1 + 0x4c) >> 8) < 1) {
          if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
            *(undefined *)(param_1 + 0xd) = 3;
            *(undefined *)(param_1 + 0xe) = 1;
            *(undefined *)(param_1 + 0xf) = 0;
            sub_08003458(iVar6);
            *puVar8 = *(undefined *)
                       (*pcVar7 * 4 + *(int *)((uint)*pbVar1 * 4 + *(int *)(param_1 + 0x6c)));
            return in_lr;
          }
        }
        else if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          *(undefined *)(param_1 + 0xd) = 3;
          *(undefined *)(param_1 + 0xe) = 1;
          *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 10) & 0x10;
          sub_08003458(iVar6);
          *puVar8 = *(undefined *)
                     (*pcVar7 * 4 + *(int *)((uint)*pbVar1 * 4 + *(int *)(param_1 + 0x6c)));
          return in_lr;
        }
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 1;
      }
    }
  }
  else {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x4c) < 1) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) goto LAB_08058fe8;
    }
    else if ((*(byte *)(param_1 + 10) & 0x10) != 0) goto LAB_08058fe8;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 6;
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  return in_lr;
}

