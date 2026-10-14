// sub_08029F9C at 0x08029F9C (thumb)

undefined4 sub_08029F9C(int param_1)

{
  byte bVar1;
  undefined uVar2;
  short sVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x119) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x124);
    if ((bVar1 & 1) != 0) {
      return in_lr;
    }
    uVar4 = *(uint *)(param_1 + 0x218);
    if ((uVar4 & 1) == 0) {
      if ((uVar4 & 8) != 0) {
        return in_lr;
      }
      if ((uVar4 & 0x30) != 0) {
        *(undefined *)(param_1 + 0xe) = 1;
        *(undefined *)(param_1 + 0xf) = 0;
        return in_lr;
      }
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    if (((uVar4 & 0x80) != 0) && (sVar3 = sub_0802687C(param_1,&DAT_0835b03c,0), sVar3 != 0)) {
      *(undefined *)(param_1 + 0x113) = 1;
      *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x58) + 0xd00;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 2;
      *(byte *)(param_1 + 0xf) = bVar1 & 1;
      return in_lr;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 5;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

