// sub_0804D364 at 0x0804D364 (thumb)

undefined4 sub_0804D364(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  char local_20 [4];
  uint *local_1c;
  undefined4 uStack_4;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  uStack_4 = in_lr;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08017700(param_1,0x4602);
        *(undefined *)(param_1 + 0x12) = 0x80;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0800471C(0x10f);
    uVar8 = DAT_02030109 >> 5 & 1;
    if ((DAT_02030109 & 0x40) != 0) {
      uVar8 = uVar8 + 1;
    }
    if ((DAT_02030109 & 0x80) == 0) {
      uVar8 = uVar8 << 0x18;
    }
    else {
      uVar8 = (uVar8 + 1) * 0x1000000;
    }
    iVar3 = (uVar8 >> 0x18) + (DAT_0203010a & 1);
    if ((&DAT_0835faf1)[iVar3] == '\x04') {
      local_20[3] = 1;
      local_20[2] = 1;
      local_20[1] = 1;
      local_20[0] = '\x01';
    }
    else {
      iVar6 = 0;
      local_20[3] = 0;
      local_20[2] = 0;
      local_20[1] = 0;
      local_20[0] = '\0';
      iVar7 = 0;
      if ((&DAT_0835faf1)[iVar3] != '\0') {
        puVar5 = &DAT_0202f608;
        do {
          do {
            uVar8 = *puVar5 * 0x343fd + 0x269ec3;
            *puVar5 = uVar8 & 0x7fffffff;
            local_1c = puVar5;
            iVar4 = sub_080FE4D8(uVar8 * 2 >> 0x11,3);
            puVar5 = local_1c;
            iVar4 = iVar6 + 1 + iVar4;
            iVar6 = iVar4;
            if (iVar4 < 0) {
              iVar6 = iVar4 + 3;
            }
            iVar6 = iVar4 + (iVar6 >> 2) * -4;
          } while (local_20[iVar6] != '\0');
          local_20[iVar6] = '\x01';
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(uint)(byte)(&DAT_0835faf1)[iVar3]);
      }
    }
    uVar8 = 0;
    do {
      if (local_20[uVar8] != '\0') {
        sub_0807D3B8(*(undefined4 *)(param_1 + 0x54),
                     *(int *)(param_1 + 0x58) + ((int)uVar8 >> 1 & 1U) * 0x4000 + -0x2000,uVar8 & 1)
        ;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < 4);
    sub_08017700(param_1,0x4601);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08007390(param_1 + 0x74,
               &DAT_0835fa20 + (uint)(byte)(&DAT_0835faec)[*(char *)(param_1 + 0x71)] * 0x18);
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return uStack_4;
}

