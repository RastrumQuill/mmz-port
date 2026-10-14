// sub_08067C30 at 0x08067C30 (thumb)

undefined4 sub_08067C30(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined uVar3;
  ushort *puVar4;
  byte *pbVar5;
  ushort *puVar6;
  undefined2 *puVar7;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_08067c76:
    sub_080128D4(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    puVar7 = &DAT_080ef754;
    if ((ushort)*(byte *)(param_1 + 0x12) !=
        *(ushort *)(&DAT_080ef756 + (uint)*(byte *)(param_1 + 0xb6) * 4)) goto LAB_08067e14;
    if (*(short *)(&DAT_080ef756 + (*(byte *)(param_1 + 0xb6) + 1) * 4) == 0) {
      sub_0801260C(param_1);
      sub_080127E4(param_1,0x600);
      *(undefined *)(param_1 + 0x24) = 0;
      *(undefined2 *)(param_1 + 0xc0) = 0x30;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
      if (*(int *)(DAT_0202e130 + 0x54) < *(int *)(param_1 + 0x54)) {
        uVar3 = 0xff;
      }
      else {
        uVar3 = 1;
      }
      *(undefined *)(param_1 + 0xc2) = uVar3;
      *(undefined2 *)(param_1 + 0xbc) = 0;
      *(undefined2 *)(param_1 + 0xbe) = 0;
      *(undefined *)(param_1 + 0x12) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_08067e14;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_08067e14;
      *(undefined *)(param_1 + 0xb6) = 0;
      sub_080127E4(param_1,0x601);
      *(undefined *)(param_1 + 0xb7) = 0xc;
      *(undefined *)(param_1 + 0xc3) = 0;
      *(undefined *)(param_1 + 0x12) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_08067c76;
    }
    if (bVar1 == 2) {
      sub_080128D4(param_1);
      puVar6 = (ushort *)(param_1 + 0xc0);
      *(uint *)(param_1 + 0x5c) = (uint)*puVar6 * (int)*(char *)(param_1 + 0xc2);
      puVar4 = (ushort *)(param_1 + 0xbc);
      uVar2 = *puVar4;
      *puVar4 = (ushort)((uint)*puVar6 + (uint)uVar2);
      *(char *)(param_1 + 0x24) =
           (char)(((uint)*puVar6 + (uint)uVar2) * 0x10000 >> 0x16) * *(char *)(param_1 + 0xc2);
      if ((*puVar6 < 0x180) && (*puVar4 < 0x2000)) {
        *puVar6 = *puVar6 + 0x30;
        *(ushort *)(param_1 + 0xbe) = *puVar4;
      }
      else if ((int)(0x4000 - (uint)*puVar4) <= (int)(uint)*(ushort *)(param_1 + 0xbe)) {
        *puVar6 = *puVar6 - 0x30;
      }
      if (0x3fff < *puVar4) {
        sub_08012580(param_1);
        *(undefined *)(param_1 + 0xb6) = 0;
        sub_080127E4(param_1,0x600);
        *(undefined *)(param_1 + 0xb7) = 8;
        *(undefined *)(param_1 + 0x12) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
      goto LAB_08067e14;
    }
    if (bVar1 != 3) goto LAB_08067e14;
    sub_080128D4(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    puVar7 = (undefined2 *)&DAT_080ef764;
    if ((ushort)*(byte *)(param_1 + 0x12) !=
        *(ushort *)(&DAT_080ef766 + (uint)*(byte *)(param_1 + 0xb6) * 4)) goto LAB_08067e14;
    if (*(short *)(&DAT_080ef766 + (*(byte *)(param_1 + 0xb6) + 1) * 4) == 0) {
      *(undefined *)(param_1 + 0xd) = 0xff;
      goto LAB_08067e14;
    }
  }
  pbVar5 = (byte *)(param_1 + 0xb6);
  *(undefined *)(param_1 + 0x12) = 0;
  *pbVar5 = *pbVar5 + 1;
  sub_080127E4(param_1,puVar7[(uint)*pbVar5 * 2]);
LAB_08067e14:
  sub_080688B4(param_1,0xc);
  sub_08068800(param_1,*(undefined *)(param_1 + 0xb7));
  return in_lr;
}

