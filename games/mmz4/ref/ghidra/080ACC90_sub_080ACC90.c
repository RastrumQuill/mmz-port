// sub_080ACC90 at 0x080ACC90 (thumb)

undefined4 sub_080ACC90(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_60 [4];
  undefined auStack_50 [4];
  int local_4c [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  sbyte asStack_2c [4];
  int local_28;
  int local_24;
  
  local_60[0] = 0x9c05;
  local_60[1] = 0x9c09;
  local_60[2] = 0x9c0d;
  local_60[3] = 0x9c11;
  sub_08128B5C(auStack_50,&DAT_081296d8,4);
  local_4c[0] = 0x6800;
  local_4c[1] = 0;
  local_4c[2] = 0;
  local_4c[3] = 0x4000;
  uStack_3c = 0xffff9800;
  uStack_38 = 0;
  local_34 = 0;
  uStack_30 = 0xffffc000;
  sub_08128B5C(asStack_2c,&DAT_081296fc,4);
  iVar4 = *(int *)(param_1 + 0x28);
  uVar3 = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ((*(int *)(param_1 + 0xb8) == 0) &&
       (((int)(uint)*(byte *)(iVar4 + 0xb4) >> asStack_2c[uVar3] & 1U) != 0)) {
      local_28 = *(int *)(param_1 + 0x54) + local_4c[uVar3 * 2];
      local_24 = *(int *)(param_1 + 0x58) + local_4c[uVar3 * 2 + 1];
      iVar2 = sub_080CCD0C(param_1,&local_28,0,auStack_50[uVar3]);
      *(int *)(param_1 + 0xb8) = iVar2;
      if (iVar2 != 0) {
        *(char *)(iVar4 + 0xbc) = *(char *)(iVar4 + 0xbc) + '\x01';
      }
    }
    sub_0801CF00(param_1,*(undefined2 *)(local_60 + uVar3));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar2 = *(int *)(param_1 + 0xb8);
  if ((iVar2 != 0) && (((int)(uint)*(byte *)(iVar4 + 0xb4) >> asStack_2c[uVar3] & 1U) == 0)) {
    *(undefined *)(iVar2 + 0xb4) = 1;
    *(int *)(param_1 + 0xb8) = 0;
    cVar1 = *(char *)(iVar4 + 0xbc);
    if (cVar1 != '\0') {
      *(char *)(iVar4 + 0xbc) = cVar1 + -1;
    }
  }
  *(byte *)(iVar4 + 0xb5) = *(byte *)(iVar4 + 0xb5) & ~(byte)(1 << uVar3);
  return in_lr;
}

