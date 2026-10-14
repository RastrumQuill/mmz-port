// sub_08081588 at 0x08081588 (thumb)

undefined4 sub_08081588(int param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  short asStack_44 [8];
  int local_34 [2];
  short *local_2c;
  char *local_28;
  int *local_24;
  undefined4 uStack_4;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_54 = 0x1700;
    uStack_50 = 0x1700;
    uStack_4c = 0x1702;
    local_48 = 0x1702;
    sub_0801CF00(param_1,*(undefined2 *)(&local_54 + *(byte *)(param_1 + 0xb4)));
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885afb0);
  }
  else {
    sub_08005784(param_1 + 0x74,
                 *(undefined4 *)
                  (*(char *)(param_1 + 0x71) * 4 +
                  *(int *)(&DAT_0885b1e0 +
                          (uint)*(byte *)(param_1 + 0xb5) * 4 +
                          (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) -
                          0x1700) * 8)));
  }
  local_28 = (char *)(param_1 + 0x73);
  uStack_4 = in_lr;
  if ((*(char *)(param_1 + 0x71) == '\x01') && (*(char *)(param_1 + 0x12) == '\0')) {
    sub_08128B5C(&local_54,&DAT_081293b8,0x10);
    sub_08128B5C(asStack_44,&DAT_081293c8,0x10);
    uVar4 = (uint)*(byte *)(param_1 + 0xb4);
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    uVar2 = (uVar2 * 2 >> 0x11 & 1) + 2;
    if (uVar2 != 0) {
      local_2c = (short *)((int)&local_54 + uVar4 * 4 + 2);
      local_24 = local_34;
      do {
        local_34[0] = (int)*(short *)(&local_54 + uVar4);
        uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        local_34[0] = (uVar3 * 2 >> 0x11 & (int)asStack_44[uVar4 * 2]) +
                      (int)*(short *)(&local_54 + uVar4);
        sVar1 = *local_2c;
        local_24[1] = (int)sVar1;
        uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar3 & 0x7fffffff;
        local_24[1] = (uVar3 * 2 >> 0x11 & (int)asStack_44[uVar4 * 2 + 1]) + (int)sVar1;
        sub_080D7D30(param_1 + 0x54,local_24,0,uVar2 & 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    *(undefined *)(param_1 + 0x12) = 1;
  }
  if (*local_28 == '\x03') {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return uStack_4;
}

