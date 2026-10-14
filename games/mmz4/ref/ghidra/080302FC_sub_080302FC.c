// sub_080302FC at 0x080302FC (thumb)

undefined4 sub_080302FC(int param_1)

{
  undefined uVar1;
  short sVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x143) == '\0') {
    if ((*(byte *)(param_1 + 0x153) & 2) != 0) {
      return in_lr;
    }
    uVar3 = *(uint *)(param_1 + 600);
    if ((uVar3 & 1) == 0) {
      if ((uVar3 & 8) != 0) {
        return in_lr;
      }
      if ((uVar3 & 0x30) != 0) {
        *(undefined *)(param_1 + 0xe) = 1;
        *(undefined *)(param_1 + 0xf) = 0;
        return in_lr;
      }
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    if (((uVar3 & 0x80) != 0) && (sVar2 = sub_0802C4E4(param_1,&DAT_0884fe38,0), sVar2 != 0)) {
      *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) | 0x10;
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x58) + 0xd00;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 7;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

