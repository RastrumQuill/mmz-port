// sub_080300A8 at 0x080300A8 (thumb)

undefined4 sub_080300A8(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  char cVar4;
  short sVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x143) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x153);
    bVar2 = bVar1 & 2;
    if ((bVar1 & 2) != 0) {
      return in_lr;
    }
    puVar8 = (uint *)(param_1 + 600);
    if (((*(ushort *)(param_1 + 0x252) & 0x8000) != 0) && ((*puVar8 & 0x80) != 0)) {
      *(undefined *)(param_1 + 0xd) = 0xb;
      *(byte *)(param_1 + 0xe) = bVar2;
      *(byte *)(param_1 + 0xf) = bVar2;
      return in_lr;
    }
    puVar6 = (uint *)(param_1 + 0x8c);
    if (((*puVar6 & 0x40000000) == 0) || ((*puVar8 & 0x430) != 0x400)) {
      if (((*puVar6 & 0x20000000) == 0) || ((*puVar8 & 0x400) == 0)) {
        if (((int)*puVar6 < 0) && ((*puVar8 & 0x400) != 0)) {
          *(undefined *)(param_1 + 0xd) = 10;
          *(undefined *)(param_1 + 0xe) = 0;
          *(undefined *)(param_1 + 0xf) = 1;
          return in_lr;
        }
        uVar7 = *puVar8;
        if ((uVar7 & 1) == 0) {
          if ((((uVar7 & 4) != 0) && (bVar1 = *(byte *)(param_1 + 0x153), (bVar1 & 4) == 0)) &&
             (cVar4 = sub_0802EE40(param_1,&DAT_0884fe38), cVar4 != '\0')) {
            *(undefined *)(param_1 + 0xe) = 2;
            *(byte *)(param_1 + 0xf) = bVar1 & 4;
            return in_lr;
          }
          if ((*puVar8 & 0x30) == 0) {
            return in_lr;
          }
          uVar3 = 1;
        }
        else {
          if (((uVar7 & 0x80) == 0) || (sVar5 = sub_0802C4E4(param_1,&DAT_0884fe30,0), sVar5 == 0))
          {
            *(undefined *)(param_1 + 0xd) = 1;
            *(undefined *)(param_1 + 0xe) = 0;
            goto LAB_08030210;
          }
          *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) | 0x10;
          *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x58) + 0xd00;
          *(undefined *)(param_1 + 0xd) = 1;
          uVar3 = 2;
        }
        *(undefined *)(param_1 + 0xe) = uVar3;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 9;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    else {
      *(undefined *)(param_1 + 0xd) = 8;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
LAB_08030210:
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

