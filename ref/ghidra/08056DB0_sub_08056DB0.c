// sub_08056DB0 at 0x08056DB0 (thumb)

undefined4 sub_08056DB0(int param_1)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0xbc) & 0x100) == 0) {
    if ((*(uint *)(param_1 + 0xbc) & 0x200) == 0) {
      bVar3 = *(byte *)(param_1 + 0xe);
      if (bVar3 != 1) {
        if (1 < bVar3) {
          if (bVar3 == 2) {
            *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x4c) + (int)*(short *)(param_1 + 0xc2);
            *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
          }
          else if (bVar3 != 3) {
            return in_lr;
          }
          iVar7 = *(int *)(param_1 + 0x5c);
          iVar8 = iVar7 - *(int *)(param_1 + 0x4c);
          if (iVar8 < 0) {
            iVar8 = iVar8 + 3;
          }
          iVar6 = *(int *)(param_1 + 0x4c) + (iVar8 >> 2);
          *(int *)(param_1 + 0x4c) = iVar6;
          iVar8 = iVar6 - iVar7;
          if (iVar8 < 0) {
            iVar8 = iVar7 - iVar6;
          }
          if (iVar8 < 0x100) {
            *(undefined *)(param_1 + 0xe) = 1;
            *(undefined2 *)(param_1 + 0xc2) = 0;
          }
          iVar8 = *(int *)(param_1 + 0xb8) + -0x8000;
          bVar1 = *(int *)(param_1 + 0x4c) < iVar8;
          if (bVar1) {
            *(int *)(param_1 + 0x4c) = iVar8;
          }
          iVar8 = *(int *)(param_1 + 0xb8) + 0x8000;
          bVar2 = iVar8 < *(int *)(param_1 + 0x4c);
          if (bVar2) {
            *(int *)(param_1 + 0x4c) = iVar8;
          }
          if (bVar2 || bVar1) {
            *(undefined *)(param_1 + 0xe) = 1;
            *(undefined2 *)(param_1 + 0xc2) = 0;
          }
          else {
            sub_08003458(param_1 + 0x6c);
            *(undefined *)(param_1 + 0x46) =
                 *(undefined *)
                  (*(char *)(param_1 + 0x71) * 4 +
                  *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
          }
          sub_0805580C(param_1);
          return in_lr;
        }
        if (bVar3 != 0) {
          return in_lr;
        }
        sub_08001EAC(0x7f);
        sub_080033F0(param_1 + 0x6c,1);
        *(undefined *)(param_1 + 0xc0) = 200;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      puVar11 = (uint *)(param_1 + 0xbc);
      if ((*puVar11 & 0x106) == 0) {
        pcVar5 = (char *)(param_1 + 0xc0);
        if (*pcVar5 == -0x38) {
          sub_08001EAC(0x7f);
        }
        uVar9 = *(byte *)(param_1 + 10) >> 4 & 1;
        iVar7 = *(int *)(param_1 + 0x4c) + *(int *)(&DAT_082afad8 + uVar9 * 4);
        *(int *)(param_1 + 0x4c) = iVar7;
        iVar7 = *(int *)(DAT_0202286c + 0x4c) - iVar7;
        iVar8 = iVar7;
        if (iVar7 < 0) {
          iVar8 = -iVar7;
        }
        if ((0x800 < iVar8) && (0 < iVar7 != uVar9)) {
          *puVar11 = *puVar11 | 1;
        }
        cVar4 = *pcVar5;
        *pcVar5 = cVar4 + -1;
        if ((((char)(cVar4 + -1) == '\0') || ((*puVar11 & 0x40) != 0)) && ((*puVar11 & 1) == 0)) {
          uVar10 = *puVar11 & 0xffffffbf;
          *puVar11 = uVar10;
          uVar9 = DAT_02022890 * 0x343fd + 0x269ec3;
          DAT_02022890 = uVar9 & 0x7fffffff;
          if ((uVar9 * 2 >> 0x11 & 1) == 0) {
            *puVar11 = uVar10 | 4;
          }
          else {
            *puVar11 = uVar10 | 2;
          }
          *pcVar5 = -0x38;
        }
        iVar8 = *(int *)(param_1 + 0xb8) + -0x7f00;
        bVar1 = iVar8 <= *(int *)(param_1 + 0x4c);
        if (!bVar1) {
          *(int *)(param_1 + 0x4c) = iVar8;
        }
        iVar8 = *(int *)(param_1 + 0xb8) + 0x8000;
        bVar2 = iVar8 < *(int *)(param_1 + 0x4c);
        if (bVar2) {
          *(int *)(param_1 + 0x4c) = iVar8;
        }
        if (!bVar2 && bVar1) {
          sub_08003458(param_1 + 0x6c);
          *(undefined *)(param_1 + 0x46) =
               *(undefined *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
        }
      }
      else {
        *puVar11 = *puVar11 & 0xffffffbf;
      }
      if (*(short *)(param_1 + 0xc2) != 0) {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      sub_0805580C(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080561A8(param_1);
  }
  return in_lr;
}

