// sub_08057040 at 0x08057040 (thumb)

undefined4 sub_08057040(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(short *)(param_1 + 0x8c) < 0x18) {
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    iVar3 = sub_080C8B68(*(undefined *)(param_1 + 0xf),
                         (*(short *)(param_1 + 0x8c) + -0x30 >> 1) + 0x1d);
    if (iVar3 == 0) {
      uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
      local_20 = (uVar4 * 2 >> 0x11 & 0x1f) * 0x100 + *(int *)(param_1 + 0x4c) + -0x1000;
      uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar4 & 0x7fffffff;
      local_1c = (uVar4 * 2 >> 0x11 & 0x10) * 0x100 + *(int *)(param_1 + 0x50) + -0x800;
      sub_0808827C(3,&local_20);
    }
  }
  puVar6 = (uint *)(iVar2 + 0xbc);
  if (((*(ushort *)(param_1 + 0x90) & 0x40) != 0) || ((*puVar6 & 0x100) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *puVar6 = *puVar6 | 0x100;
    return in_lr;
  }
  piVar5 = (int *)(param_1 + 0xb8);
  if (*piVar5 == 0) {
    if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
      iVar3 = sub_08015A64(0,param_1,&DAT_082afae0);
      *piVar5 = iVar3;
      if (iVar3 != 0) {
        uVar4 = *puVar6 | 0x200;
        goto LAB_0805714c;
      }
    }
  }
  else {
    iVar3 = sub_08015D94();
    if (iVar3 != 0) {
      *piVar5 = 0;
      uVar4 = *puVar6 & 0xfffffdff;
LAB_0805714c:
      *puVar6 = uVar4;
    }
  }
  if ((*puVar6 & 0x200) != 0) {
    return in_lr;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    break;
  case 1:
    goto switchD_0805716e_caseD_1;
  case 2:
    goto switchD_0805716e_caseD_2;
  case 3:
    sub_0800561C(param_1 + 0x74,&DAT_082af9f0);
    sub_0800561C(iVar2 + 0x74,&DAT_082afa0c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    if (((*puVar6 & 0x80) != 0) || ((byte)(*(char *)(iVar2 + 0x13) - 0x18U) < 0xd1))
    goto switchD_0805716e_caseD_5;
    cVar1 = '\x01';
    goto LAB_08057250;
  default:
    goto switchD_0805716e_caseD_5;
  }
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  sub_080033F0(param_1 + 0x6c,0);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082af9d4,param_1 + 0x4c,0x30);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x80569d5;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0805716e_caseD_1:
  sub_0800561C(param_1 + 0x74,&DAT_082af9d4);
  sub_0800561C(iVar2 + 0x74,&DAT_082af980);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0805716e_caseD_2:
  if ((*puVar6 & 0x80) == 0) {
    if (0xce < (byte)(*(char *)(iVar2 + 0x13) - 0x19U)) goto switchD_0805716e_caseD_5;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_08057250:
  *(char *)(param_1 + 0xe) = cVar1;
switchD_0805716e_caseD_5:
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x4c);
  *(int *)(param_1 + 0x50) = *(int *)(*(int *)(param_1 + 0x20) + 0x50) + -0x900;
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

