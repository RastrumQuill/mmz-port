// sub_08081494 at 0x08081494 (thumb)

undefined4 sub_08081494(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x20);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (((*(uint *)(param_1 + 0x90) & 0x10001) == 0) && ((*(byte *)(param_1 + 0x94) & 2) == 0)) {
    cVar3 = (&DAT_02022fe0)[*(byte *)(param_1 + 9)];
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar3 << 4;
    *(char *)(param_1 + 0x1e) = cVar3;
  }
  else {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    *(undefined *)(param_1 + 0x1e) = 0xd;
    sub_08001EAC(5);
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) goto LAB_08081674;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b28a4,param_1 + 0x4c,0x18);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        iVar4 = *(int *)(DAT_0202286c + 0x50);
        if (iVar4 < DAT_02021648 + 0x3000) {
          iVar5 = *(int *)(iVar8 + 0x4c);
          iVar4 = *(int *)(iVar8 + 0x50);
        }
        else {
          iVar5 = *(int *)(DAT_0202286c + 0x4c);
        }
        uVar6 = sub_080C88E8(((iVar5 - *(int *)(param_1 + 0x4c)) + -0x1000) * 0x10 >> 0x10,
                             (iVar4 - *(int *)(param_1 + 0x50)) * 0x10 >> 0x10);
        iVar4 = (uVar6 & 0xffff) + 0x8000;
        iVar5 = iVar4 >> 8;
        *(short *)(param_1 + 0xc2) = (short)((uint)iVar4 >> 8);
        uVar6 = (uint)*(byte *)(param_1 + 0x13);
        if ((int)uVar6 < (int)*(short *)(param_1 + 0xc2)) {
          uVar6 = iVar5 - uVar6;
          *(char *)(param_1 + 0x12) = (char)uVar6;
          *(bool *)(param_1 + 0xf) = (uVar6 & 0xff) < 0x7f;
        }
        else {
          iVar5 = uVar6 - iVar5;
          *(char *)(param_1 + 0x12) = (char)iVar5;
          *(byte *)(param_1 + 0xf) = (byte)((uint)(iVar5 * 0x1000000) >> 0x1f);
        }
        if (*(char *)(param_1 + 0x12) < '\0') {
          *(byte *)(param_1 + 0x12) = ~*(byte *)(param_1 + 0x12);
        }
        if (*(char *)(param_1 + 0xf) == '\0') {
          cVar3 = *(char *)(param_1 + 0x13) + -2;
        }
        else {
          cVar3 = *(char *)(param_1 + 0x13) + '\x02';
        }
        *(char *)(param_1 + 0x13) = cVar3;
        if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
          *(undefined4 *)(param_1 + 0xc) = 2;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
          *(undefined *)(iVar8 + 0xd2) = 0;
          sub_08001EAC(0x95);
          sub_08096D70(param_1,1);
        }
      }
      goto LAB_08081674;
    }
    if ((bVar1 != 0) ||
       (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 != -1))
    goto LAB_08081674;
    sub_0806E29C(param_1,6,0);
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_08081674:
  if (*(byte *)(iVar8 + 0xc) < 2) {
    if (*(char *)(param_1 + 0xd) != '\0') {
      puVar7 = (ushort *)(param_1 + 0xc0);
      uVar2 = *puVar7;
      *puVar7 = (ushort)(uVar2 - 0x10);
      if ((int)((uVar2 - 0x10) * 0x10000) < 0x17f0001) {
        *puVar7 = 0x180;
      }
      uVar6 = *(byte *)(param_1 + 0x13) + 0x80 & 0xff;
      iVar8 = (int)(short)*puVar7 * (int)(short)(&DAT_080c8e24)[uVar6 + 0x40];
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0xff;
      }
      *(int *)(param_1 + 0x54) = iVar8 >> 8;
      iVar4 = (int)(short)(&DAT_080c8e24)[uVar6] * (int)(short)*puVar7;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      *(int *)(param_1 + 0x58) = iVar4 >> 8;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (iVar8 >> 8);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (iVar4 >> 8);
      *(undefined *)(param_1 + 0x1f) = *(undefined *)(param_1 + 0x13);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
    *(undefined *)(iVar8 + 0xd2) = 0;
    sub_08001EAC(0x95);
    sub_08096D70(param_1,1);
  }
  return in_lr;
}

