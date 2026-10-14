// sub_08029EC8 at 0x08029EC8 (thumb)

undefined4 sub_08029EC8(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x119) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x124);
    if ((bVar1 & 1) != 0) {
      return in_lr;
    }
    uVar5 = *(uint *)(param_1 + 0x218);
    if ((uVar5 & 1) == 0) {
      if ((((bVar1 & 2) == 0) && ((uVar5 & 4) != 0)) &&
         (cVar2 = sub_08028F3C(param_1,&DAT_0835b03c), cVar2 != '\0')) {
        *(undefined *)(param_1 + 0xe) = 2;
        *(byte *)(param_1 + 0xf) = bVar1 & 2;
        return in_lr;
      }
      uVar5 = *(uint *)(param_1 + 0x218) & 0x30;
      uVar4 = (undefined)uVar5;
      if (uVar5 != 0) {
        return in_lr;
      }
    }
    else {
      if (((uVar5 & 0x80) != 0) && (sVar3 = sub_0802687C(param_1,&DAT_0835b034,0), sVar3 != 0)) {
        *(undefined *)(param_1 + 0x113) = 1;
        *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x58) + 0xd00;
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 2;
        *(byte *)(param_1 + 0xf) = bVar1 & 1;
        return in_lr;
      }
      uVar4 = 0;
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  else {
    uVar4 = 0;
    *(undefined *)(param_1 + 0xd) = 5;
  }
  *(undefined *)(param_1 + 0xe) = uVar4;
  *(undefined *)(param_1 + 0xf) = uVar4;
  return in_lr;
}

