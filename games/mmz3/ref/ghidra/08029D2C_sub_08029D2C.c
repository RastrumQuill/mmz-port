// sub_08029D2C at 0x08029D2C (thumb)

undefined4 sub_08029D2C(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  short sVar4;
  uint *puVar5;
  uint uVar6;
  byte bVar7;
  uint *puVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x119) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x124);
    bVar7 = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      return in_lr;
    }
    puVar5 = (uint *)(param_1 + 0x8c);
    puVar8 = (uint *)(param_1 + 0x218);
    if (((*puVar5 & 0x40000000) != 0) && ((*puVar8 & 0x430) == 0x400)) {
      *(undefined *)(param_1 + 0xd) = 6;
      *(byte *)(param_1 + 0xe) = bVar7;
      *(byte *)(param_1 + 0xf) = bVar7;
      return in_lr;
    }
    if (((*puVar5 & 0x20000000) == 0) || ((*puVar8 & 0x400) == 0)) {
      if (((int)*puVar5 < 0) && ((*puVar8 & 0x400) != 0)) {
        *(undefined *)(param_1 + 0xd) = 10;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 1;
        return in_lr;
      }
      uVar6 = *puVar8;
      if ((uVar6 & 1) == 0) {
        if ((((*(byte *)(param_1 + 0x124) & 2) == 0) && ((uVar6 & 4) != 0)) &&
           (cVar3 = sub_08028F3C(param_1,&DAT_0835b03c), cVar3 != '\0')) {
          *(undefined *)(param_1 + 0xe) = 2;
          *(undefined *)(param_1 + 0xf) = 0;
          return in_lr;
        }
        uVar6 = *puVar8;
        if ((uVar6 & 0x30) != 0) {
          *(undefined *)(param_1 + 0xe) = 1;
          *(undefined *)(param_1 + 0xf) = 0;
          return in_lr;
        }
        if (*(char *)(param_1 + 0x12e) != -1) {
          return in_lr;
        }
        if ((uVar6 & 0x80) != 0) {
          cVar3 = sub_08026ED0(param_1,&DAT_0835b034,0);
          if (cVar3 != '\x02') {
            return in_lr;
          }
          *(undefined *)(param_1 + 0xd) = 3;
          *(undefined *)(param_1 + 0xe) = 1;
          *(undefined *)(param_1 + 0xf) = 0;
          return in_lr;
        }
        if ((uVar6 & 0x40) == 0) {
          return in_lr;
        }
        cVar3 = sub_08026D90(param_1,&DAT_0835b034,0);
        if (cVar3 == '\0') {
          return in_lr;
        }
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
        return in_lr;
      }
      if (((uVar6 & 0x80) != 0) && (sVar4 = sub_0802687C(param_1,&DAT_0835b034,0), sVar4 != 0)) {
        *(undefined *)(param_1 + 0x113) = 1;
        *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x58) + 0xd00;
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 2;
        *(undefined *)(param_1 + 0xf) = 0;
        return in_lr;
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 9;
    }
  }
  else {
    uVar2 = 5;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

