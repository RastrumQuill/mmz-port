// sub_080844D4 at 0x080844D4 (thumb)

undefined4 sub_080844D4(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined uVar6;
  uint *puVar7;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  puVar7 = (uint *)(param_1 + 0x8c);
  uVar5 = *puVar7;
  if ((uVar5 & 0x200) == 0) {
    iVar3 = sub_08065A24(param_1);
    if (iVar3 != 0) {
      if (*(char *)(param_1 + 0xb4) == '\0') {
        sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (sVar2 != 0) {
          uVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x400);
          *(undefined4 *)(param_1 + 0x58) = uVar4;
        }
        cVar1 = *(char *)(param_1 + 0xba);
        if (cVar1 == '\0') {
          if (*(int *)(param_1 + 0x2c) == 0) {
            return in_lr;
          }
          *(undefined4 *)(param_1 + 0x2c) = 0;
        }
        else {
          cVar1 = cVar1 + -1;
          *(char *)(param_1 + 0xba) = cVar1;
          if (cVar1 != '\0') {
            return in_lr;
          }
        }
        sub_08006E08(param_1 + 0x74,&DAT_08341330);
        return in_lr;
      }
      sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (sVar2 != 0) {
        uVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = uVar4;
      }
      if ((*puVar7 & 1) == 0) {
        return in_lr;
      }
      if ((*puVar7 & 0x8000) != 0) {
        *(undefined *)(param_1 + 0xb8) = 1;
      }
      *(undefined *)(param_1 + 0xd) = 0x11;
      *(undefined *)(param_1 + 0xe) = 0;
      *(char *)(param_1 + 0xb4) = '\0';
      sub_080851A8(param_1);
      return in_lr;
    }
    if (*(char *)(param_1 + 0xb4) == '\0') {
      if (((*puVar7 & 1) != 0) && (*(int *)(param_1 + 0x2c) == 0)) {
        cVar1 = sub_080862F8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if ((cVar1 == '\0') || ((*(byte *)(param_1 + 0x97) & 0xf0) != 0x20)) {
          iVar3 = sub_0801E11C(0,param_1,&DAT_083412c8);
          *(int *)(param_1 + 0x2c) = iVar3;
          if (iVar3 != 0) {
            *(undefined *)(param_1 + 0xd) = 0x1c;
            *(undefined *)(param_1 + 0xe) = 0;
          }
        }
        else {
          local_1c = *(undefined4 *)(param_1 + 0x54);
          local_18 = *(int *)(param_1 + 0x58) + -0x800;
          sub_08086220(&local_1c,0x1c00,10,0xc);
        }
      }
    }
    else if ((*puVar7 & 1) != 0) {
      if ((*puVar7 & 0x8000) != 0) {
        *(undefined *)(param_1 + 0xb8) = 1;
      }
      *(undefined *)(param_1 + 0xd) = 0x11;
      *(undefined *)(param_1 + 0xe) = 0;
      *(char *)(param_1 + 0xb4) = '\0';
    }
    if ((*(char *)(param_1 + 0x11) == '\0') ||
       (sVar2 = sub_08008354(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800),
       sVar2 != 0xf)) {
      if (*(char *)(param_1 + 0xb9) == '\0') {
        uVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x400);
        *(undefined4 *)(param_1 + 0x58) = uVar4;
      }
      if ((*(int *)(param_1 + 0x2c) != 0) && (iVar3 = sub_0801E4D8(), iVar3 != 0)) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      sub_080EF118(param_1,*(undefined4 *)(&UNK_08341248 + (uint)*(byte *)(param_1 + 0xd) * 4));
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    if ((uVar5 & 0x10000) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
      if ((uVar5 & 0x8000) != 0) {
        uVar6 = 2;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = uVar6;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  sub_08084710(param_1);
  return in_lr;
}

