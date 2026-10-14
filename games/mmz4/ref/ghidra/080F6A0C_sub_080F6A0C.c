// sub_080F6A0C at 0x080F6A0C (thumb)

undefined4 sub_080F6A0C(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  undefined4 in_lr;
  undefined auStack_150 [8];
  undefined auStack_148 [8];
  undefined auStack_140 [8];
  undefined auStack_138 [8];
  undefined auStack_130 [8];
  undefined auStack_128 [8];
  undefined auStack_120 [8];
  undefined auStack_118 [8];
  undefined auStack_110 [8];
  undefined auStack_108 [8];
  undefined auStack_100 [8];
  undefined auStack_f8 [8];
  undefined auStack_f0 [8];
  undefined auStack_e8 [8];
  undefined auStack_e0 [8];
  undefined auStack_d8 [8];
  short *apsStack_d0 [16];
  undefined *local_90;
  undefined *local_8c;
  undefined *local_88;
  undefined *local_84;
  undefined *local_80;
  undefined *local_7c;
  undefined *local_78;
  undefined *local_74;
  undefined *local_70;
  undefined *local_6c;
  undefined *local_68;
  undefined *local_64;
  undefined *local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined *local_54;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_48;
  undefined *local_44;
  undefined *local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  int local_28;
  int local_24;
  
  sub_08128B5C(auStack_150,&DAT_08129d10,6);
  local_50 = auStack_148;
  sub_08128B5C(local_50,&DAT_08129d16,6);
  local_4c = auStack_140;
  sub_08128B5C(local_4c,&DAT_08129d1c,6);
  local_48 = auStack_138;
  sub_08128B5C(local_48,&DAT_08129d22,6);
  local_44 = auStack_130;
  sub_08128B5C(local_44,&DAT_08129d28,6);
  local_40 = auStack_128;
  sub_08128B5C(local_40,&DAT_08129d2e,6);
  local_3c = auStack_120;
  sub_08128B5C(local_3c,&DAT_08129d1c,6);
  local_38 = auStack_118;
  sub_08128B5C(local_38,&DAT_08129d22,6);
  local_34 = auStack_110;
  sub_08128B5C(local_34,&DAT_08129d34,6);
  local_30 = auStack_108;
  sub_08128B5C(local_30,&DAT_08129d3a,6);
  local_2c = auStack_100;
  sub_08128B5C(local_2c,&DAT_08129d40,6);
  sub_08128B5C(auStack_f8,&DAT_08129d46,6);
  sub_08128B5C(auStack_f0,&DAT_08129d4c,6);
  sub_08128B5C(auStack_e8,&DAT_08129d52,6);
  sub_08128B5C(auStack_e0,&DAT_08129d58,6);
  sub_08128B5C(auStack_d8,&DAT_08129d5e,6);
  local_8c = local_50;
  local_88 = local_4c;
  local_84 = local_48;
  local_80 = local_44;
  local_7c = local_40;
  local_78 = local_3c;
  local_74 = local_38;
  local_70 = local_34;
  local_6c = local_30;
  local_68 = local_2c;
  local_90 = auStack_150;
  local_64 = auStack_f8;
  local_60 = auStack_f0;
  local_5c = auStack_e8;
  local_58 = auStack_e0;
  local_54 = auStack_d8;
  sub_08128B5C(apsStack_d0,&local_90,0x40);
  iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 0x28);
  uVar5 = *(byte *)(param_1 + 10) >> 4 & 1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 0x11);
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    iVar3 = sub_0810CCF0((*(int *)(iVar4 + 0xd0) + (uVar5 * 2 + -1) * 0x4800 + 0x7800) -
                         *(int *)(param_1 + 0x54),
                         *(int *)(iVar4 + 0xd4) - (*(int *)(param_1 + 0x58) + -0xd800));
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((int)&DAT_08128c10 + ((uint)((iVar3 + 0x40) * 0x1000000) >> 0x17)) << 1;
    *(int *)(param_1 + 0x60) =
         (int)*(short *)((int)&DAT_08128c10 + ((uint)(iVar3 << 0x18) >> 0x17)) << 1;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_080f6b88_caseD_1:
    sub_0801CFF0(param_1);
    sub_080F6EB4(param_1);
    local_28 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    local_24 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if (*(int *)(iVar4 + 0xd4) + 0xd800 < local_24) {
LAB_080f6ca0:
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    else {
      *(int *)(param_1 + 0x54) = local_28;
      *(int *)(param_1 + 0x58) = local_24;
    }
switchD_080f6b88_caseD_6:
    iVar4 = *(int *)(param_1 + 0xbc) + 1;
    *(int *)(param_1 + 0xbc) = iVar4;
    if ((*(byte *)(param_1 + 0x13) < 2) &&
       (psVar6 = *(short **)
                  ((int)apsStack_d0 +
                  ((uVar5 + (uint)bVar1 * 4 + (uint)*(byte *)(param_1 + 0x13) * 2) * 0x1000000 >>
                  0x16)), *psVar6 <= iVar4)) {
      iVar4 = sub_080C79FC(param_1,*(undefined *)(psVar6 + 1),*(undefined *)(psVar6 + 2));
      if (iVar4 != 0) {
        *(char *)(param_1 + 0xb4) = *(char *)(param_1 + 0xb4) + '\x01';
      }
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    }
    return in_lr;
  case 1:
    goto switchD_080f6b88_caseD_1;
  case 2:
    *(undefined4 *)(param_1 + 0x68) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    sub_0801CFF0(param_1);
    sub_080F6EB4(param_1);
    iVar4 = *(int *)(param_1 + 0x68) + -1;
    *(int *)(param_1 + 0x68) = iVar4;
    if (iVar4 != 0) goto switchD_080f6b88_caseD_6;
    goto LAB_080f6ca0;
  case 4:
    *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 5:
    sub_0801CFF0(param_1);
    sub_080F6EB4(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54));
    if (sVar2 != 0) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
  default:
    goto switchD_080f6b88_caseD_6;
  }
}

