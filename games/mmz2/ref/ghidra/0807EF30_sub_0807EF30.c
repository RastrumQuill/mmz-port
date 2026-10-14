// sub_0807EF30 at 0x0807EF30 (thumb)

undefined4 sub_0807EF30(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined uVar4;
  byte *pbVar5;
  uint *puVar6;
  undefined4 in_lr;
  
  puVar6 = (uint *)(param_1 + 0x8c);
  uVar3 = *puVar6;
  if ((uVar3 & 0x200) != 0) {
    if ((uVar3 & 0x10000) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
      if ((uVar3 & 0x8000) != 0) {
        uVar4 = 2;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xf) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = uVar4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0807EBCC(param_1);
    return in_lr;
  }
  uVar3 = DAT_0202ebbb & 1;
  if ((DAT_0202ebbb & 1) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar6 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    goto LAB_0807f06c;
  }
  if ((DAT_0202ebbb & 0x20) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar6 = uVar3;
    *(uint *)(param_1 + 0x90) = uVar3;
    *(char *)(param_1 + 0x94) = (char)uVar3;
    goto LAB_0807f06c;
  }
  if ((*(int *)(param_1 + 0x2c) != 0) && (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc))) {
    *(uint *)(param_1 + 0x2c) = DAT_0202ebbb & 0x20;
  }
  bVar1 = *(byte *)(param_1 + 0xb4);
  *(byte *)(param_1 + 0xb4) = bVar1 & 1;
  if ((bVar1 & 1) == 0) goto LAB_0807f030;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 2) {
LAB_0807f028:
    *(undefined *)(param_1 + 0xd) = 9;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else if (bVar1 < 3) {
    if (bVar1 == 0) goto LAB_0807f028;
  }
  else if ((bVar1 < 9) && (6 < bVar1)) goto LAB_0807f028;
LAB_0807f030:
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar3 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (0x4fff < uVar3) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
LAB_0807f06c:
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    if (*(char *)(param_1 + 0xd) == '\x02') {
      if (0x1e000 < (*(int *)(param_1 + 0xb8) - *(int *)(DAT_0202e130 + 0x54)) + 0xf000U) {
        *(undefined *)(param_1 + 0xd) = 9;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      if (0x1e000 < (*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x54)) + 0xf000U) {
        *(undefined *)(param_1 + 0xd) = 9;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  else if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  iVar2 = sub_08065A24(param_1);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xc0) == 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0xc0) = 0;
    sub_08006E08(param_1 + 0x74,&DAT_08340940 + (uint)*(byte *)(param_1 + 0xb5) * 0x30);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_0807f164:
    if (*(int *)(param_1 + 0xc0) == 0) goto LAB_0807f178;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xd);
    if ((bVar1 == 0) || ((bVar1 < 9 && (6 < bVar1)))) {
      if (*(int *)(param_1 + 0x2c) != 0) {
        pbVar5 = (byte *)(*(int *)(param_1 + 0x2c) + 0xb4);
        *pbVar5 = *pbVar5 | 2;
      }
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    if (*(int *)(param_1 + 0xc0) == 0) {
      iVar2 = sub_0801E11C(0,param_1,&DAT_08340938);
      *(int *)(param_1 + 0xc0) = iVar2;
      if (iVar2 == 0) goto LAB_0807f178;
      *(undefined *)(param_1 + 0xd) = 0xb;
      *(undefined *)(param_1 + 0xe) = 0;
      goto LAB_0807f164;
    }
  }
  iVar2 = sub_0801E4D8(*(undefined4 *)(param_1 + 0xc0));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
LAB_0807f178:
  sub_080EF118(param_1,*(undefined4 *)(&UNK_083408fc + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

