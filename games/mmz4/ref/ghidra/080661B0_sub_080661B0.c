// sub_080661B0 at 0x080661B0 (thumb)

void sub_080661B0(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined auStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  sub_08128B5C(auStack_40,&DAT_081291be,8);
  local_38 = *(int *)(DAT_0202dbf0 + 0x54);
  local_34 = *(int *)(DAT_0202dbf0 + 0x58) + -0x1000;
  local_28 = (*(byte *)(DAT_0202dbf0 + 10) >> 4 & 1) * 2 + -1;
  iVar3 = 0;
  do {
    local_30 = local_28 * (&DAT_08857bc4)[iVar3 * 2] + local_38 + -0x1000;
    local_2c = (&DAT_08857bc8)[iVar3 * 2] + local_34 + -0x1000;
    iVar7 = 0;
    iVar2 = iVar3 + 1;
    do {
      iVar6 = 0;
      local_24 = iVar3;
      do {
        iVar4 = local_30;
        if (iVar7 != 0) {
          iVar4 = local_30 + -1 + iVar7 * 0x1000;
        }
        iVar5 = local_2c;
        if (iVar6 != 0) {
          iVar5 = local_2c + -1 + iVar6 * 0x1000;
        }
        sVar1 = sub_08007C7C(iVar4,iVar5);
        iVar3 = local_24;
        if (((sVar1 != 0) || (0xd000 < (DAT_0202ea30 - iVar4) + 0x6800U)) ||
           (0x8000 < (DAT_0202ea34 - iVar5) + 0x4000U)) {
          auStack_40[local_24] = 0;
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 3);
    } while ((2 < iVar6) && (iVar7 = iVar7 + 1, iVar7 < 3));
    iVar3 = iVar2;
    if (7 < iVar2) {
      sub_08066308(auStack_40,8);
      return;
    }
  } while( true );
}

