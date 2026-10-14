// sub_080569CC at 0x080569CC (thumb)

undefined4 sub_080569CC(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 *local_2c [4];
  
  local_2c[0] = &local_7c;
  local_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0x5000;
  local_70 = 0;
  uStack_6c = 0x2000;
  uStack_68 = 0x2800;
  local_64 = 0x9000;
  uStack_60 = 0x2800;
  uStack_5c = 0x6000;
  local_58 = 0x4000;
  local_2c[1] = &local_54;
  local_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x5000;
  local_48 = 0;
  uStack_44 = 0x2000;
  uStack_40 = 0x2800;
  local_3c = 0xc000;
  uStack_38 = 0x2800;
  uStack_34 = 0x9000;
  local_30 = 0x1800;
  local_2c[2] = (undefined4 *)0xa01f;
  local_2c[3] = (undefined4 *)0xa020;
  bVar1 = *(byte *)(param_1 + 10);
  puVar2 = &local_7c;
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar3 = sub_08059768(param_1);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x5c) = 0x200;
    *(undefined4 *)(param_1 + 100) = 0x20;
    *(uint *)(param_1 + 0x68) = (uint)*(ushort *)(&DAT_08855282 + iVar3 * 2);
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = (byte)(uVar4 * 2 >> 0x11) & 1;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    puVar2 = local_2c[0];
  }
  local_2c[0] = puVar2;
  if (*(char *)(param_1 + 0x13) == '\0') {
    sub_08002B10(0xf8);
    iVar3 = local_2c[*(byte *)(param_1 + 0x12)][(uint)*(byte *)(param_1 + 0xf) * 2] -
            (local_2c[*(byte *)(param_1 + 0x12)] + (uint)*(byte *)(param_1 + 0xf) * 2)[-2];
    sub_0801CF00(param_1,*(undefined2 *)(local_2c + (iVar3 >> 0x1f & 1U) + 2));
    uVar5 = sub_0810CCF0(((bVar1 >> 4 & 1) * 2 + -1) * iVar3,
                         local_2c[*(byte *)(param_1 + 0x12)][(uint)*(byte *)(param_1 + 0xf) * 2 + 1]
                         - local_2c[*(byte *)(param_1 + 0x12)]
                           [(uint)*(byte *)(param_1 + 0xf) * 2 + -1]);
    *(undefined4 *)(param_1 + 0xc4) = uVar5;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               &DAT_08854f90 +
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(&DAT_088551e0 +
                                        (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                  *(undefined *)(param_1 + 0x70)) - 0xa000) * 4)) *
               0x18);
  iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar3;
  if (*(int *)(param_1 + 0x68) < iVar3) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x68);
  }
  uVar4 = (uint)*(byte *)(undefined4 *)(param_1 + 0xc4);
  iVar3 = *(int *)(param_1 + 0x5c) *
          (int)*(short *)((int)&DAT_08128c10 + ((uVar4 + 0x40) * 0x1000000 >> 0x17));
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar9 = *(int *)(param_1 + 0x54) + (iVar3 >> 8);
  *(int *)(param_1 + 0x54) = iVar9;
  iVar3 = *(int *)(param_1 + 0x5c) * (int)(short)(&DAT_08128c10)[uVar4];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar8 = *(int *)(param_1 + 0xbc) + (iVar3 >> 8);
  *(int *)(param_1 + 0xbc) = iVar8;
  *(int *)(param_1 + 0x58) = iVar8 + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
  piVar6 = local_2c[*(byte *)(param_1 + 0x12)] + (uint)*(byte *)(param_1 + 0xf) * 2;
  iVar3 = *piVar6 - piVar6[-2];
  iVar7 = piVar6[1] - piVar6[-1];
  if (((iVar3 == 0) ||
      ((uint)((iVar3 + -1) * 2) < (uint)((iVar9 - *(int *)(param_1 + 0x60)) + -1 + iVar3))) &&
     ((iVar7 == 0 ||
      ((uint)((iVar7 + -1) * 2) < (uint)((iVar8 - *(int *)(param_1 + 0xb8)) + -1 + iVar7))))) {
    uVar4 = *(byte *)(param_1 + 0xf) + 1;
    *(char *)(param_1 + 0xf) = (char)uVar4;
    if ((uVar4 & 0xff) < 5) {
      *(undefined *)(param_1 + 0x13) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xe) = 4;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

