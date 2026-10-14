// sub_08030218 at 0x08030218 (thumb)

undefined4 sub_08030218(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  undefined uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x143) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x153);
    bVar2 = 2;
    if ((bVar1 & 2) != 0) {
      return in_lr;
    }
    uVar6 = *(uint *)(param_1 + 600);
    if ((uVar6 & 1) == 0) {
      if ((((uVar6 & 4) != 0) && (bVar2 = 4, (bVar1 & 4) == 0)) &&
         (cVar3 = sub_0802EE40(param_1,&DAT_0884fe38), cVar3 != '\0')) goto LAB_080302d4;
      uVar6 = *(uint *)(param_1 + 600) & 0x30;
      uVar5 = (undefined)uVar6;
      if (uVar6 != 0) {
        return in_lr;
      }
    }
    else {
      if (((uVar6 & 0x80) != 0) && (sVar4 = sub_0802C4E4(param_1,&DAT_0884fe30,0), sVar4 != 0)) {
        *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) | 0x10;
        *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x58) + 0xd00;
        *(undefined *)(param_1 + 0xd) = 1;
LAB_080302d4:
        *(undefined *)(param_1 + 0xe) = 2;
        *(byte *)(param_1 + 0xf) = bVar1 & bVar2;
        return in_lr;
      }
      uVar5 = 0;
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  else {
    uVar5 = 0;
    *(undefined *)(param_1 + 0xd) = 7;
  }
  *(undefined *)(param_1 + 0xe) = uVar5;
  *(undefined *)(param_1 + 0xf) = uVar5;
  return in_lr;
}

