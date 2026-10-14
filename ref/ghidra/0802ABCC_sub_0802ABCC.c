// sub_0802ABCC at 0x0802ABCC (thumb)

undefined4 sub_0802ABCC(int param_1)

{
  undefined uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  
  uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar4 & 0x7fffffff;
  uVar4 = uVar4 * 2 >> 0x11 & 0xf;
  if (*(char *)(param_1 + 0xe) == '\0') goto LAB_0802acac;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  if (*(short *)(param_1 + 0x8c) < 0x30) {
    if (uVar4 < 8) {
      *(undefined *)(param_1 + 0xe1) = 1;
      uVar1 = 5;
LAB_0802ac9e:
      *(undefined *)(param_1 + 0x13) = uVar1;
      uVar1 = 0x40;
      goto LAB_0802aca4;
    }
    *(undefined *)(param_1 + 0xe1) = 1;
    *(undefined *)(param_1 + 0x13) = 3;
    *(undefined *)(param_1 + 0xc1) = 0;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  else {
    if (*(short *)(param_1 + 0x8c) < 0x48) {
      if (4 < uVar4) {
        if (uVar4 < 10) {
LAB_0802ac94:
          *(undefined *)(param_1 + 0xe1) = 1;
          uVar1 = 3;
        }
        else {
          *(undefined *)(param_1 + 0xe1) = 1;
          uVar1 = 5;
        }
        goto LAB_0802ac9e;
      }
      *(undefined *)(param_1 + 0xe1) = 0;
      *(undefined *)(param_1 + 0x13) = 5;
      uVar1 = 0x50;
    }
    else if (uVar4 < 5) {
      *(undefined *)(param_1 + 0xe1) = 0;
      *(undefined *)(param_1 + 0x13) = 3;
      uVar1 = 0x50;
    }
    else {
      if (10 < uVar4) goto LAB_0802ac94;
      *(undefined *)(param_1 + 0xe1) = 0;
      *(undefined *)(param_1 + 0x13) = 5;
      uVar1 = 0x50;
    }
LAB_0802aca4:
    *(undefined *)(param_1 + 0xc1) = uVar1;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0xc1) + -1;
LAB_0802acac:
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (*(byte *)(param_1 + 0xc1) < bVar2) {
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
      uVar4 = (*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0xd8)) + -0x1000 >> 0xd;
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else {
        uVar5 = *(byte *)(param_1 + 0xc3) - 1;
        if ((int)uVar5 < (int)uVar4) {
          uVar4 = uVar5;
        }
      }
      iVar7 = 0;
      pbVar6 = &DAT_082acd38 + uVar4 * 6;
      do {
        uVar5 = (uint)*pbVar6;
        if ((((int)(uint)*(byte *)(param_1 + 0xe2) >> uVar5 & 1U) == 0) &&
           ((int)uVar5 <= (int)(*(byte *)(param_1 + 0xc3) - 1))) break;
        pbVar6 = pbVar6 + 1;
        iVar7 = iVar7 + 1;
        uVar5 = uVar4;
      } while (iVar7 < 6);
      bVar2 = (byte)(1 << (uVar5 & 0xff));
      *(byte *)(param_1 + 0xe0) = bVar2 | *(byte *)(param_1 + 0xe0);
      *(byte *)(param_1 + 0xe3) = bVar2 | *(byte *)(param_1 + 0xe3);
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  else {
    cVar3 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == '\x01') {
      iVar7 = (*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0xd8)) + -0x1000 >> 0xd;
      pbVar6 = (byte *)(param_1 + 0xc2);
      *pbVar6 = (byte)iVar7;
      if (iVar7 * 0x1000000 < 0) {
        *pbVar6 = 0;
      }
      else {
        iVar7 = *(byte *)(param_1 + 0xc3) - 1;
        if (iVar7 < (char)*pbVar6) {
          *pbVar6 = (byte)iVar7;
        }
      }
      *(byte *)(param_1 + 0xe0) = (byte)(1 << (uint)*pbVar6) | *(byte *)(param_1 + 0xe0);
      *(byte *)(param_1 + 0xe3) = (byte)(1 << (uint)*pbVar6) | *(byte *)(param_1 + 0xe3);
    }
    else if (cVar3 == ' ') {
      pbVar6 = (byte *)(param_1 + 0xc2);
      bVar2 = *pbVar6;
      *pbVar6 = bVar2 + 1;
      if (((-1 < (int)((uint)(byte)(bVar2 + 1) * 0x1000000)) &&
          (bVar2 = *pbVar6, (int)(char)bVar2 < (int)(uint)*(byte *)(param_1 + 0xc3))) &&
         (((int)(uint)*(byte *)(param_1 + 0xe2) >> (uint)bVar2 & 1U) == 0)) {
        *(byte *)(param_1 + 0xe0) = (byte)(1 << (uint)bVar2) | *(byte *)(param_1 + 0xe0);
        *(byte *)(param_1 + 0xe3) = (byte)(1 << (uint)*pbVar6) | *(byte *)(param_1 + 0xe3);
      }
      bVar2 = *pbVar6;
      *pbVar6 = (byte)(bVar2 - 2);
      if (((-1 < (int)((bVar2 - 2) * 0x1000000)) &&
          (bVar2 = *pbVar6, (int)(char)bVar2 < (int)(uint)*(byte *)(param_1 + 0xc3))) &&
         (((int)(uint)*(byte *)(param_1 + 0xe2) >> (uint)bVar2 & 1U) == 0)) {
        *(byte *)(param_1 + 0xe0) = (byte)(1 << (uint)bVar2) | *(byte *)(param_1 + 0xe0);
        *(byte *)(param_1 + 0xe3) = (byte)(1 << (uint)*pbVar6) | *(byte *)(param_1 + 0xe3);
      }
    }
    else if (cVar3 == -0x4c) {
      *(undefined *)(param_1 + 0x12) = 0;
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
    }
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 1;
    *(undefined *)(param_1 + 0x12) = 0x80;
  }
  return in_lr;
}

